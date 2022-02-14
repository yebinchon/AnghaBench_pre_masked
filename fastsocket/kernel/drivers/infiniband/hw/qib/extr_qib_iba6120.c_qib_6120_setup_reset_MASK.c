
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qib_devdata {int flags; int control; int revision; TYPE_1__* cspec; int lbus_width; int * kregbase; scalar_t__ int_counter; int unit; } ;
struct TYPE_2__ {int gpio_mask; scalar_t__ iblnkerrdelta; scalar_t__ ibsymdelta; scalar_t__ ibdeltainprog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,char*,...) ;
 int FUNC_5 (struct qib_devdata*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (struct qib_devdata*,int ,int *,int *) ;
 int FUNC_7 (struct qib_devdata*,int ,int ,int ) ;
 int FUNC_8 (struct qib_devdata*) ;
 int FUNC_9 (struct qib_devdata*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int *) ;

__attribute__((used)) static int FUNC_12(struct qib_devdata *VAR_6)
{
 u64 VAR_7;
 int VAR_8;
 int VAR_9;
 u16 VAR_10;
 u8 VAR_11, VAR_12;

 FUNC_5(VAR_6, &VAR_10, &VAR_11, &VAR_12);


 FUNC_4(VAR_6, "Resetting InfiniPath unit %u\n", VAR_6->unit);


 FUNC_3(VAR_6, 0);

 VAR_6->cspec->ibdeltainprog = 0;
 VAR_6->cspec->ibsymdelta = 0;
 VAR_6->cspec->iblnkerrdelta = 0;






 VAR_6->flags &= ~(VAR_0 | VAR_1);
 VAR_6->int_counter = 0;
 VAR_7 = VAR_6->control | VAR_2;
 FUNC_11(VAR_7, &VAR_6->kregbase[VAR_3]);
 FUNC_0();

 for (VAR_8 = 1; VAR_8 <= 5; VAR_8++) {





  FUNC_1(1000 + (1 + VAR_8) * 2000);

  FUNC_7(VAR_6, VAR_10, VAR_11, VAR_12);





  VAR_7 = FUNC_10(&VAR_6->kregbase[VAR_5]);
  if (VAR_7 == VAR_6->revision) {
   VAR_6->flags |= VAR_1;
   VAR_9 = FUNC_8(VAR_6);
   goto bail;
  }
 }
 VAR_9 = 0;

bail:
 if (VAR_9) {
  if (FUNC_6(VAR_6, VAR_6->lbus_width, ((void*)0), ((void*)0)))
   FUNC_4(VAR_6,
    "Reset failed to setup PCIe or interrupts; continuing anyway\n");

  FUNC_2(VAR_6);

  FUNC_9(VAR_6, VAR_4, VAR_6->cspec->gpio_mask);

  FUNC_2(VAR_6);
 }
 return VAR_9;
}
