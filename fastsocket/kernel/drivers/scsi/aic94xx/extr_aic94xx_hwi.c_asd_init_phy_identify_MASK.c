
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int role; int id; int tproto; int iproto; } ;
struct asd_phy {TYPE_3__ sas_phy; TYPE_4__* identify_frame; TYPE_2__* phy_desc; TYPE_1__* id_frm_tok; } ;
struct TYPE_8__ {int phy_id; int sas_addr; int target_bits; int initiator_bits; int dev_type; } ;
struct TYPE_6__ {int sas_addr; } ;
struct TYPE_5__ {TYPE_4__* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct asd_phy *VAR_4)
{
 VAR_4->identify_frame = VAR_4->id_frm_tok->vaddr;

 FUNC_1(VAR_4->identify_frame, 0, sizeof(*VAR_4->identify_frame));

 VAR_4->identify_frame->dev_type = VAR_3;
 if (VAR_4->sas_phy.role & VAR_0)
  VAR_4->identify_frame->initiator_bits = VAR_4->sas_phy.iproto;
 if (VAR_4->sas_phy.role & VAR_1)
  VAR_4->identify_frame->target_bits = VAR_4->sas_phy.tproto;
 FUNC_0(VAR_4->identify_frame->sas_addr, VAR_4->phy_desc->sas_addr,
        VAR_2);
 VAR_4->identify_frame->phy_id = VAR_4->sas_phy.id;
}
