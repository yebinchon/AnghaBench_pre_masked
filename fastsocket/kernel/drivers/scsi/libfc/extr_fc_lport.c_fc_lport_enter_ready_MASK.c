
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disc_start ) (int ,struct fc_lport*) ;} ;
struct fc_lport {TYPE_1__ tt; int ptp_rdata; scalar_t__ vport; } ;


 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int ,struct fc_lport*) ;

__attribute__((used)) static void FUNC_6(struct fc_lport *VAR_3)
{
 FUNC_0(VAR_3, "Entered READY from state %s\n",
       FUNC_1(VAR_3));

 FUNC_2(VAR_3, VAR_1);
 if (VAR_3->vport)
  FUNC_3(VAR_3->vport, VAR_0);
 FUNC_4(VAR_3);

 if (!VAR_3->ptp_rdata)
  VAR_3->tt.disc_start(VAR_2, VAR_3);
}
