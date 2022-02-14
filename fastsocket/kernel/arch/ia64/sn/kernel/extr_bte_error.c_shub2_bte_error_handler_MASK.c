
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timer_list {int dummy; } ;
struct nodepda_s {struct bteinfo_s* bte_if; struct timer_list bte_recovery_timer; } ;
struct bteinfo_s {int bh_error; int bte_cnode; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int FUNC_0 (struct bteinfo_s*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timer_list*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct timer_list*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;

int FUNC_9(unsigned long VAR_5)
{
 struct nodepda_s *VAR_6 = (struct nodepda_s *)VAR_5;
 struct timer_list *VAR_7 = &VAR_6->bte_recovery_timer;
 struct bteinfo_s *VAR_8;
 nasid_t VAR_9;
 u64 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6->bte_if[0].bte_cnode);




 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_8 = &VAR_6->bte_if[VAR_11];
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 & VAR_3) {
   VAR_8->bh_error = FUNC_2(VAR_10);
   continue;
  }
  if (!(VAR_10 & VAR_2))
   continue;
  FUNC_6(VAR_7, VAR_4 + (VAR_1 * 5));
  FUNC_1(("eh:%p:%d Marked Giving up\n", VAR_6,
       FUNC_8()));
  return 1;
 }
 if (FUNC_5(VAR_9))
  FUNC_7("bte_error_handler(): Fatal BTE Error");

 FUNC_4(VAR_7);
 return 0;
}
