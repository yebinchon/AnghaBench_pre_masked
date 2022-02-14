
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgr_info {int level; int stfle_fac_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct lgr_info*) ;
 int FUNC_2 (struct lgr_info*) ;
 int FUNC_3 (struct lgr_info*) ;
 int FUNC_4 (struct lgr_info*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct lgr_info *VAR_1)
{
 FUNC_4(VAR_1, 0, sizeof(*VAR_1));
 FUNC_5(VAR_1->stfle_fac_list, FUNC_0(VAR_1->stfle_fac_list));
 VAR_1->level = FUNC_6();
 if (VAR_1->level == -VAR_0)
  return;
 if (VAR_1->level >= 1)
  FUNC_1(VAR_1);
 if (VAR_1->level >= 2)
  FUNC_2(VAR_1);
 if (VAR_1->level >= 3)
  FUNC_3(VAR_1);
}
