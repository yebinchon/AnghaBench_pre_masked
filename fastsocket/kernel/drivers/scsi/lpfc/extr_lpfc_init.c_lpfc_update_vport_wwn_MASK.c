
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* wwn; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_4__ portName; TYPE_4__ nodeName; } ;
struct lpfc_vport {TYPE_4__ fc_portname; TYPE_3__ fc_sparam; TYPE_2__* phba; TYPE_4__ fc_nodename; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_7__ {scalar_t__ cfg_soft_wwpn; scalar_t__ cfg_soft_wwnn; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

void
FUNC_2(struct lpfc_vport *VAR_0)
{

 if (VAR_0->phba->cfg_soft_wwnn)
  FUNC_1(VAR_0->phba->cfg_soft_wwnn,
      VAR_0->fc_sparam.nodeName.u.wwn);
 if (VAR_0->phba->cfg_soft_wwpn)
  FUNC_1(VAR_0->phba->cfg_soft_wwpn,
      VAR_0->fc_sparam.portName.u.wwn);





 if (VAR_0->fc_nodename.u.wwn[0] == 0 || VAR_0->phba->cfg_soft_wwnn)
  FUNC_0(&VAR_0->fc_nodename, &VAR_0->fc_sparam.nodeName,
   sizeof(struct lpfc_name));
 else
  FUNC_0(&VAR_0->fc_sparam.nodeName, &VAR_0->fc_nodename,
   sizeof(struct lpfc_name));

 if (VAR_0->fc_portname.u.wwn[0] == 0 || VAR_0->phba->cfg_soft_wwpn)
  FUNC_0(&VAR_0->fc_portname, &VAR_0->fc_sparam.portName,
   sizeof(struct lpfc_name));
 else
  FUNC_0(&VAR_0->fc_sparam.portName, &VAR_0->fc_portname,
   sizeof(struct lpfc_name));
}
