
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ tt_entry_t ;
typedef int pmap_t ;
struct TYPE_4__ {TYPE_1__* pt_cnt; } ;
struct TYPE_3__ {scalar_t__ refcnt; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 unsigned int VAR_0 ;
 int FUNC_3 (char*,scalar_t__*,...) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(
 pmap_t VAR_1,
 tt_entry_t *VAR_2,
 unsigned int VAR_3)
{
 tt_entry_t VAR_4 = *VAR_2;

 if (VAR_4 == 0) {
  FUNC_3("pmap_tte_deallocate(): null tt_entry ttep==%p\n", VAR_2);
 }

 if (((VAR_3+1) == VAR_0) && (FUNC_4(VAR_4)->pt_cnt[FUNC_0(FUNC_5(*VAR_2))].refcnt != 0)) {
  FUNC_3("pmap_tte_deallocate(): pmap=%p ttep=%p ptd=%p refcnt=0x%x \n", VAR_1, VAR_2,
         FUNC_4(VAR_4), (FUNC_4(VAR_4)->pt_cnt[FUNC_0(FUNC_5(*VAR_2))].refcnt));
 }
 *VAR_2 = (tt_entry_t) 0;
 FUNC_2(VAR_2);

}
