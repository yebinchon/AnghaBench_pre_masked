
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct lpfc_sli {int dummy; } ;
struct TYPE_11__ {int feaLevelHigh; } ;
struct TYPE_14__ {TYPE_2__ rev; } ;
struct lpfc_hba {int fc_pref_ALPA; TYPE_5__ vpd; struct lpfc_sli sli; } ;
typedef TYPE_5__ lpfc_vpd_t ;
struct TYPE_12__ {int link_flags; int fabric_AL_PA; void* link_speed; } ;
struct TYPE_13__ {TYPE_3__ varInitLnk; } ;
struct TYPE_15__ {TYPE_4__ un; int mbxOwner; scalar_t__ mbxCommand; } ;
struct TYPE_10__ {TYPE_6__ mb; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;







 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_12,
        LPFC_MBOXQ_t * VAR_13, uint32_t VAR_14, uint32_t VAR_15)
{
 lpfc_vpd_t *VAR_16;
 struct lpfc_sli *VAR_17;
 MAILBOX_t *VAR_18;

 VAR_18 = &VAR_13->u.mb;
 FUNC_0(VAR_13, 0, sizeof (LPFC_MBOXQ_t));

 VAR_17 = &VAR_12->sli;
 switch (VAR_14) {
 case 137:
  VAR_18->un.varInitLnk.link_flags = 138;
  VAR_18->un.varInitLnk.link_flags |= VAR_2;
  break;
 case 135:
  VAR_18->un.varInitLnk.link_flags = 135;
  break;
 case 138:
  VAR_18->un.varInitLnk.link_flags = 138;
  break;
 case 136:
  VAR_18->un.varInitLnk.link_flags = 135;
  VAR_18->un.varInitLnk.link_flags |= VAR_2;
  break;
 case 139:
  VAR_18->un.varInitLnk.link_flags = 139;
  break;
 }


 VAR_18->un.varInitLnk.link_flags |= VAR_0;




 VAR_16 = &VAR_12->vpd;
 if (VAR_16->rev.feaLevelHigh >= 0x02){
  switch(VAR_15){
  case 132:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_5;
   break;
  case 131:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_6;
   break;
  case 130:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_7;
   break;
  case 129:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_8;
   break;
  case 134:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_3;
   break;
  case 133:
   VAR_18->un.varInitLnk.link_flags |= VAR_1;
   VAR_18->un.varInitLnk.link_speed = VAR_4;
   break;
  case 128:
  default:
   VAR_18->un.varInitLnk.link_speed = VAR_9;
   break;
  }

 }
 else
  VAR_18->un.varInitLnk.link_speed = VAR_9;

 VAR_18->mbxCommand = (volatile uint8_t)VAR_10;
 VAR_18->mbxOwner = VAR_11;
 VAR_18->un.varInitLnk.fabric_AL_PA = VAR_12->fc_pref_ALPA;
 return;
}
