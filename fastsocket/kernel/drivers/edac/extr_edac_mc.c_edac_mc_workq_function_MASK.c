
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct mem_ctl_info {scalar_t__ op_state; int work; int (* edac_check ) (struct mem_ctl_info*) ;} ;
struct delayed_work {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct mem_ctl_info*) ;
 struct delayed_work* FUNC_7 (struct work_struct*) ;
 struct mem_ctl_info* FUNC_8 (struct delayed_work*) ;

__attribute__((used)) static void FUNC_9(struct work_struct *VAR_3)
{
 struct delayed_work *VAR_4 = FUNC_7(VAR_3);
 struct mem_ctl_info *VAR_5 = FUNC_8(VAR_4);

 FUNC_3(&VAR_2);


 if (VAR_5->op_state == VAR_0) {
  FUNC_4(&VAR_2);
  return;
 }


 if (FUNC_0() && (VAR_5->edac_check != ((void*)0)))
  VAR_5->edac_check(VAR_5);

 FUNC_4(&VAR_2);


 FUNC_5(VAR_1, &VAR_5->work,
   FUNC_2(FUNC_1()));
}
