
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int lp_mutex; int retry_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fc_lport*,int ) ;
 int FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_lport*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct fc_lport *VAR_4)
{
 FUNC_0(&VAR_4->retry_work, VAR_3);
 FUNC_4(&VAR_4->lp_mutex);

 FUNC_3(VAR_4, VAR_2);

 FUNC_2(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_1);

 return 0;
}
