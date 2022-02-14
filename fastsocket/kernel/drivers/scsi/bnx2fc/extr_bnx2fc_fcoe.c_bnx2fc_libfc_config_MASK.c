
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfc_function_template {int dummy; } ;
struct fc_lport {int tt; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(struct fc_lport *VAR_1)
{


 FUNC_5(&VAR_1->tt, &VAR_0,
  sizeof(struct libfc_function_template));
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_1);
 return 0;
}
