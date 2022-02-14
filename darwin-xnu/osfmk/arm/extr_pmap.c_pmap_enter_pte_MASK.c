
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_3__* vm_map_address_t ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
struct TYPE_20__ {TYPE_1__* pt_cnt; } ;
struct TYPE_19__ {int wired_mem; } ;
struct TYPE_17__ {int wired_count; } ;
struct TYPE_18__ {TYPE_2__ stats; } ;
struct TYPE_16__ {int wiredcnt; } ;
typedef int SInt32 ;
typedef int SInt16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int*) ;
 int VAR_2 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,int ,int ,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 TYPE_6__* FUNC_13 (int*) ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static inline void FUNC_14(pmap_t VAR_7, pt_entry_t *VAR_8, pt_entry_t VAR_9, vm_map_address_t VAR_10)
{
 if (VAR_7 != VAR_5 && ((VAR_9 & VAR_1) != (*VAR_8 & VAR_1)))
 {
  SInt16 *VAR_11 = (SInt16 *)&(FUNC_13(VAR_8)->pt_cnt[FUNC_1(VAR_8)].wiredcnt);
  if (VAR_9 & VAR_1) {
   FUNC_3(1, VAR_11);
   FUNC_11(VAR_7, VAR_6.wired_mem, VAR_3);
   FUNC_2(1, (SInt32 *) &VAR_7->stats.wired_count);
  } else {
   FUNC_3(-1, VAR_11);
   FUNC_12(VAR_7, VAR_6.wired_mem, VAR_3);
   FUNC_2(-1, (SInt32 *) &VAR_7->stats.wired_count);
  }
 }
 if (*VAR_8 != VAR_0 &&
     !FUNC_0(*VAR_8)) {
  FUNC_9(VAR_8, VAR_9);
  FUNC_6(VAR_7, VAR_10, VAR_10 + VAR_3);
 } else {
  FUNC_8(VAR_8, VAR_9);
  FUNC_10(VAR_2);
 }

 FUNC_5(3, FUNC_4(VAR_4), FUNC_7(VAR_7), FUNC_7(VAR_10), FUNC_7(VAR_10 + VAR_3), VAR_9);
}
