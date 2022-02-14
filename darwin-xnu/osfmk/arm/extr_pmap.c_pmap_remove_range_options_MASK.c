
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_map_address_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {TYPE_1__* pt_cnt; } ;
struct TYPE_18__ {int phys_footprint; int internal_compressed; int alternate_accounting_compressed; int alternate_accounting; int internal; int wired_mem; int phys_mem; } ;
struct TYPE_16__ {int internal; int reusable; int external; int compressed; int wired_count; int resident_count; } ;
struct TYPE_17__ {int pmap_pid; char* pmap_procname; TYPE_2__ stats; int pmap_stats_assert; } ;
struct TYPE_15__ {int refcnt; } ;
typedef int SInt32 ;
typedef int SInt16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 size_t FUNC_1 (int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*) ;
 scalar_t__ FUNC_5 (int,int *) ;
 int FUNC_6 (int,int*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_8 (int,TYPE_3__*,char*,TYPE_3__*,int,int,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (TYPE_3__*,int ,int ) ;
 int FUNC_17 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_18 (TYPE_3__*,int*,int,int*,int*,int*,int*) ;
 int VAR_9 ;
 int FUNC_19 (char*,int,char*,TYPE_3__*,int,int*,int*,int,int,int,int,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int*,int ) ;
 int FUNC_22 (int) ;
 TYPE_5__* FUNC_23 (int*) ;
 scalar_t__ FUNC_24 (int*) ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static int
FUNC_25(
 pmap_t VAR_11,
 vm_map_address_t VAR_12,
 pt_entry_t *VAR_13,
 pt_entry_t *VAR_14,
 uint32_t *VAR_15,
 int VAR_16)
{
 pt_entry_t *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 pmap_paddr_t VAR_22;
 int VAR_23, VAR_24, VAR_25;
 int VAR_26;
 uint64_t VAR_27, VAR_28;

 FUNC_7(VAR_11);

 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = 0;
 VAR_23 = 0;
 VAR_24 = 0;
 VAR_25 = 0;
 VAR_27 = 0;
 VAR_26 = 0;
 VAR_28 = 0;

 for (VAR_17 = VAR_13; VAR_17 < VAR_14;
      VAR_17 += VAR_4/VAR_0, VAR_12 += VAR_4) {
  pt_entry_t VAR_29;
  boolean_t VAR_30=VAR_3;

  VAR_29 = *VAR_17;






  while (!VAR_30) {
   if (VAR_11 != VAR_7 &&
       (VAR_16 & VAR_5) &&
       (FUNC_0(VAR_29))) {







    VAR_27++;
    if (VAR_29 & VAR_1) {

     VAR_28++;
    }


    FUNC_10(VAR_17, VAR_2);





    if (FUNC_5(-1, (SInt16 *) &(FUNC_23(VAR_17)->pt_cnt[FUNC_1(VAR_17)].refcnt)) <= 0)
     FUNC_15("pmap_remove_range_options: over-release of ptdp %p for pte %p\n", FUNC_23(VAR_17), VAR_17);
    VAR_29 = *VAR_17;
   }






   VAR_22 = FUNC_22(VAR_29);
   if (!FUNC_14(VAR_22)) {
    break;
   }
   VAR_21 = (int)FUNC_13(VAR_22);
   FUNC_3(VAR_21);
   VAR_29 = *VAR_17;
   VAR_22 = FUNC_22(VAR_29);
   if (VAR_21 == (int)FUNC_13(VAR_22)) {
    VAR_30 =VAR_6;
    break;
   }
   FUNC_9(VAR_21);
  }

  if (FUNC_0(*VAR_17)) {






   continue;
  }


  if (*VAR_17 != VAR_2) {
   FUNC_11(!FUNC_0(*VAR_17));






   FUNC_10(VAR_17, VAR_2);
   VAR_20++;
  }

  if ((VAR_29 != VAR_2) &&
      (VAR_11 != VAR_7)) {
   FUNC_11(!FUNC_0(VAR_29));
   if (FUNC_5(-1, (SInt16 *) &(FUNC_23(VAR_17)->pt_cnt[FUNC_1(VAR_17)].refcnt)) <= 0)
    FUNC_15("pmap_remove_range_options: over-release of ptdp %p for pte %p\n", FUNC_23(VAR_17), VAR_17);
   if(VAR_15) (*VAR_15)++;
  }

  if (FUNC_20(VAR_29)) {
   FUNC_21(VAR_17, 0);
   VAR_19++;
  }



  if (!VAR_30)
   continue;





  FUNC_18(VAR_11, VAR_17, VAR_21, &VAR_24, &VAR_26, &VAR_25, &VAR_23);

  FUNC_9(VAR_21);
  VAR_18++;
 }




 FUNC_4(-VAR_18, (SInt32 *) &VAR_11->stats.resident_count);
 FUNC_16(VAR_11, VAR_10.phys_mem, FUNC_12(VAR_18));

 if (VAR_11 != VAR_7) {
  FUNC_8(VAR_11->stats.external >= VAR_23,
       VAR_11,
       "pmap=%p num_external=%d stats.external=%d",
       VAR_11, VAR_23, VAR_11->stats.external);
  FUNC_8(VAR_11->stats.internal >= VAR_24,
       VAR_11,
       "pmap=%p num_internal=%d stats.internal=%d num_reusable=%d stats.reusable=%d",
       VAR_11,
       VAR_24, VAR_11->stats.internal,
       VAR_25, VAR_11->stats.reusable);
  FUNC_8(VAR_11->stats.reusable >= VAR_25,
       VAR_11,
       "pmap=%p num_internal=%d stats.internal=%d num_reusable=%d stats.reusable=%d",
       VAR_11,
       VAR_24, VAR_11->stats.internal,
       VAR_25, VAR_11->stats.reusable);
  FUNC_8(VAR_11->stats.compressed >= VAR_27,
       VAR_11,
       "pmap=%p num_compressed=%lld num_alt_compressed=%lld stats.compressed=%lld",
       VAR_11, VAR_27, VAR_28,
       VAR_11->stats.compressed);


  FUNC_4(-VAR_19, (SInt32 *) &VAR_11->stats.wired_count);
  if (VAR_23)
   FUNC_4(-VAR_23, &VAR_11->stats.external);
  if (VAR_24)
   FUNC_4(-VAR_24, &VAR_11->stats.internal);
  if (VAR_25)
   FUNC_4(-VAR_25, &VAR_11->stats.reusable);
  if (VAR_27)
   FUNC_6(-VAR_27, &VAR_11->stats.compressed);

  FUNC_16(VAR_11, VAR_10.wired_mem, FUNC_12(VAR_19));
  FUNC_16(VAR_11, VAR_10.internal, FUNC_12(VAR_24));
  FUNC_16(VAR_11, VAR_10.alternate_accounting, FUNC_12(VAR_26));
  FUNC_16(VAR_11, VAR_10.alternate_accounting_compressed, FUNC_12(VAR_28));
  FUNC_16(VAR_11, VAR_10.internal_compressed, FUNC_12(VAR_27));

  FUNC_16(VAR_11, VAR_10.phys_footprint,
      FUNC_12((VAR_24 -
      VAR_26) +
            (VAR_27 -
      VAR_28)));
 }


 if (VAR_20 > 0)
  FUNC_2(VAR_13, VAR_14);

 return VAR_20;
}
