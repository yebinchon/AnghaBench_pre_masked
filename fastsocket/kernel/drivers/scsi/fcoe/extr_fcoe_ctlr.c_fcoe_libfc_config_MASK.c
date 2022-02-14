
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfc_function_template {int dummy; } ;
struct fcoe_ctlr {int mode; } ;
struct fc_lport {int tt; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*) ;
 scalar_t__ FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*,struct fcoe_ctlr*,int ) ;
 int FUNC_7 (int *,struct libfc_function_template const*,int) ;

int FUNC_8(struct fc_lport *VAR_1, struct fcoe_ctlr *VAR_2,
        const struct libfc_function_template *VAR_3, int VAR_4)
{

 FUNC_7(&VAR_1->tt, VAR_3, sizeof(*VAR_3));
 if (VAR_4 && FUNC_3(VAR_1))
  return -VAR_0;
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
 FUNC_6(VAR_1, VAR_2, VAR_2->mode);
 return 0;
}
