
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int reserved1; int reserved2; int reserved3; int reserved4; int reserved5; int status_fifo_lo; int status_fifo_hi; int login_ID_misc; } ;
struct sbp2_lu {int management_agent_addr; int ne; TYPE_3__ logout_orb_dma; TYPE_3__* logout_orb; int status_fifo_addr; TYPE_1__* login_response; struct sbp2_fwhost_info* hi; } ;
struct sbp2_logout_orb {int dummy; } ;
struct sbp2_fwhost_info {TYPE_2__* host; } ;
typedef TYPE_3__ quadlet_t ;
struct TYPE_8__ {int node_id; } ;
struct TYPE_7__ {int length_login_ID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (struct sbp2_lu*,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_10(struct sbp2_lu *VAR_3)
{
 struct sbp2_fwhost_info *VAR_4 = VAR_3->hi;
 quadlet_t VAR_5[2];
 int VAR_6;

 VAR_3->logout_orb->reserved1 = 0x0;
 VAR_3->logout_orb->reserved2 = 0x0;
 VAR_3->logout_orb->reserved3 = 0x0;
 VAR_3->logout_orb->reserved4 = 0x0;

 VAR_3->logout_orb->login_ID_misc = FUNC_0(VAR_2);
 VAR_3->logout_orb->login_ID_misc |=
   FUNC_1(VAR_3->login_response->length_login_ID);
 VAR_3->logout_orb->login_ID_misc |= FUNC_3(1);

 VAR_3->logout_orb->reserved5 = 0x0;
 VAR_3->logout_orb->status_fifo_hi =
  FUNC_4(VAR_3->status_fifo_addr, VAR_4->host->node_id);
 VAR_3->logout_orb->status_fifo_lo =
  FUNC_5(VAR_3->status_fifo_addr);

 FUNC_9(VAR_3->logout_orb,
        sizeof(struct sbp2_logout_orb));

 VAR_5[0] = FUNC_2(VAR_4->host->node_id);
 VAR_5[1] = VAR_3->logout_orb_dma;
 FUNC_9(VAR_5, 8);

 VAR_6 = FUNC_7(VAR_3->ne, VAR_3->management_agent_addr, VAR_5, 8);
 if (VAR_6)
  return VAR_6;


 if (FUNC_8(VAR_3, VAR_1))
  return -VAR_0;

 FUNC_6("Logged out of SBP-2 device");
 return 0;
}
