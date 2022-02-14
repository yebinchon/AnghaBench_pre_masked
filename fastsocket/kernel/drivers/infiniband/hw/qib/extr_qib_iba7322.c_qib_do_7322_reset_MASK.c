
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qib_pportdata {int lflags_lock; int lflags; TYPE_1__* cpspec; } ;
struct qib_devdata {int flags; int control; int revision; int num_pports; struct qib_pportdata* pport; TYPE_3__* cspec; int lbus_width; int * kregbase; scalar_t__ int_counter; int unit; } ;
struct TYPE_6__ {int entry; } ;
struct TYPE_8__ {TYPE_2__ msix; } ;
struct TYPE_7__ {int num_msix_entries; TYPE_4__* msix_entries; } ;
struct TYPE_5__ {scalar_t__ ibmalfdelta; scalar_t__ iblnkerrdelta; scalar_t__ ibsymdelta; scalar_t__ ibdeltainprog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*,int ) ;
 int FUNC_5 (struct qib_devdata*,char*,...) ;
 int FUNC_6 (struct qib_devdata*,int *,int *,int *) ;
 scalar_t__ FUNC_7 (struct qib_devdata*,int ,int*,TYPE_4__*) ;
 int FUNC_8 (struct qib_devdata*,int ,int ,int ) ;
 int FUNC_9 (struct qib_devdata*,int) ;
 int FUNC_10 (struct qib_devdata*,int) ;
 int FUNC_11 (struct qib_devdata*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct qib_pportdata*) ;
 int FUNC_16 (struct qib_devdata*) ;
 int FUNC_17 (int,int *) ;

__attribute__((used)) static int FUNC_18(struct qib_devdata *VAR_11)
{
 u64 VAR_12;
 u64 *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 1;
 u16 VAR_17;
 u8 VAR_18, VAR_19;
 unsigned long VAR_20;


 FUNC_5(VAR_11, "Resetting InfiniPath unit %u\n", VAR_11->unit);

 FUNC_6(VAR_11, &VAR_17, &VAR_18, &VAR_19);

 VAR_15 = VAR_11->cspec->num_msix_entries;


 FUNC_4(VAR_11, 0);

 if (VAR_15) {
  FUNC_3(VAR_11);

  VAR_13 = FUNC_1(2 * VAR_11->cspec->num_msix_entries *
   sizeof(u64), VAR_0);
  if (!VAR_13)
   FUNC_5(VAR_11, "No mem to save MSIx data\n");
 } else
  VAR_13 = ((void*)0);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  u64 VAR_21, VAR_22;
  VAR_21 = FUNC_9(VAR_11, 2 * VAR_14 +
      (VAR_3 / sizeof(u64)));
  VAR_22 = FUNC_9(VAR_11, 1 + 2 * VAR_14 +
      (VAR_3 / sizeof(u64)));
  if (VAR_13) {
   VAR_13[2 * VAR_14] = VAR_21;

   VAR_13[1 + 2 * VAR_14] = VAR_22 & ~0x100000000ULL;
  }
 }

 VAR_11->pport->cpspec->ibdeltainprog = 0;
 VAR_11->pport->cpspec->ibsymdelta = 0;
 VAR_11->pport->cpspec->iblnkerrdelta = 0;
 VAR_11->pport->cpspec->ibmalfdelta = 0;
 VAR_11->int_counter = 0;






 VAR_11->flags &= ~(VAR_6 | VAR_7 | VAR_4);
 VAR_11->flags |= VAR_5;
 VAR_12 = VAR_11->control | VAR_8;
 FUNC_17(VAR_12, &VAR_11->kregbase[VAR_9]);

 for (VAR_14 = 1; VAR_14 <= 5; VAR_14++) {





  FUNC_2(1000 + (1 + VAR_14) * 3000);

  FUNC_8(VAR_11, VAR_17, VAR_18, VAR_19);





  VAR_12 = FUNC_12(&VAR_11->kregbase[VAR_10]);
  if (VAR_12 == VAR_11->revision)
   break;
  if (VAR_14 == 5) {
   FUNC_5(VAR_11,
    "Failed to initialize after reset, unusable\n");
   VAR_16 = 0;
   goto bail;
  }
 }

 VAR_11->flags |= VAR_7;

 if (VAR_15) {

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_11->cspec->msix_entries[VAR_14].msix.entry = VAR_14;
   if (!VAR_13 || !VAR_13[2 * VAR_14])
    continue;
   FUNC_11(VAR_11, 2 * VAR_14 +
    (VAR_3 / sizeof(u64)),
    VAR_13[2 * VAR_14]);
   FUNC_11(VAR_11, 1 + 2 * VAR_14 +
    (VAR_3 / sizeof(u64)),
    VAR_13[1 + 2 * VAR_14]);
  }
 }


 for (VAR_14 = 0; VAR_14 < VAR_11->num_pports; ++VAR_14)
  FUNC_15(&VAR_11->pport[VAR_14]);
 FUNC_16(VAR_11);

 if (FUNC_7(VAR_11, VAR_11->lbus_width,
       &VAR_11->cspec->num_msix_entries,
       VAR_11->cspec->msix_entries))
  FUNC_5(VAR_11,
   "Reset failed to setup PCIe or interrupts; continuing anyway\n");

 FUNC_10(VAR_11, 1);

 for (VAR_14 = 0; VAR_14 < VAR_11->num_pports; ++VAR_14) {
  struct qib_pportdata *VAR_23 = &VAR_11->pport[VAR_14];

  FUNC_13(&VAR_23->lflags_lock, VAR_20);
  VAR_23->lflags |= VAR_2;
  VAR_23->lflags &= ~VAR_1;
  FUNC_14(&VAR_23->lflags_lock, VAR_20);
 }

bail:
 VAR_11->flags &= ~VAR_5;
 FUNC_0(VAR_13);
 return VAR_16;
}
