
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_lport {int state; int lp_mutex; } ;




 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fc_lport *VAR_0, u32 VAR_1)
{
 FUNC_2(&VAR_0->lp_mutex);

 FUNC_1(VAR_0, VAR_1, ((void*)0));

 switch (VAR_0->state) {
 case 128:
 case 129:
  if (VAR_1)
   FUNC_0(VAR_0);
  break;
 default:
  break;
 }
 FUNC_3(&VAR_0->lp_mutex);
}
