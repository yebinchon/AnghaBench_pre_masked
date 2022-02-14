
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fcoe_ctlr {int dummy; } ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {struct fc_lport* lp; } ;
struct TYPE_2__ {int * granted_mac; } ;


 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_seq*,struct fc_frame*,struct fc_lport*) ;
 struct fc_exch* FUNC_2 (struct fc_seq*) ;
 int FUNC_3 (struct fcoe_ctlr*,struct fc_lport*,struct fc_frame*) ;
 int FUNC_4 (struct fc_lport*,int *) ;
 TYPE_1__* FUNC_5 (struct fc_frame*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fc_seq *VAR_0, struct fc_frame *VAR_1, void *VAR_2)
{
 struct fcoe_ctlr *VAR_3 = VAR_2;
 struct fc_exch *VAR_4 = FUNC_2(VAR_0);
 struct fc_lport *VAR_5 = VAR_4->lp;
 u8 *VAR_6;

 if (FUNC_0(VAR_1))
  goto done;

 VAR_6 = FUNC_5(VAR_1)->granted_mac;

 if (FUNC_6(VAR_6))
  FUNC_3(VAR_3, VAR_5, VAR_1);
 if (!FUNC_6(VAR_6))
  FUNC_4(VAR_5, VAR_6);
done:
 FUNC_1(VAR_0, VAR_1, VAR_5);
}
