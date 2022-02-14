
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int awbBuffer; } ;
struct TYPE_9__ {int afBuffer; } ;
struct TYPE_8__ {int pmData; int frameCounter; int asfInfo; int bpcInfo; int cbcrBuffer; int yBuffer; } ;
struct TYPE_7__ {int pmData; int frameCounter; int asfInfo; int bpcInfo; int cbcrBuffer; int yBuffer; } ;
struct TYPE_11__ {TYPE_4__ msgStatsWbExp; TYPE_3__ msgStatsAf; TYPE_2__ msgOutput2; TYPE_1__ msgOutput1; } ;
struct vfe_message {TYPE_5__ _u; } ;
struct vfe_frame_extra {int pmData; int frameCounter; int asfInfo; int bpcInfo; } ;
struct msm_vfe_phy_info {int sbuf_phy; int cbcr_phy; int y_phy; } ;
typedef int int32_t ;
typedef enum vfe_resp_msg { ____Placeholder_vfe_resp_msg } vfe_resp_msg ;
struct TYPE_12__ {int extlen; void* extdata; } ;


 int FUNC_0 (char*,int ) ;




 TYPE_6__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct msm_vfe_phy_info *VAR_1,
 enum vfe_resp_msg VAR_2, void *VAR_3, void **VAR_4, int32_t *VAR_5)
{
 switch (VAR_2) {
 case 131: {
  VAR_1->y_phy =
   ((struct vfe_message *)VAR_3)->_u.msgOutput1.yBuffer;
  VAR_1->cbcr_phy =
   ((struct vfe_message *)VAR_3)->_u.msgOutput1.cbcrBuffer;

  ((struct vfe_frame_extra *)VAR_0->extdata)->bpcInfo =
  ((struct vfe_message *)VAR_3)->_u.msgOutput1.bpcInfo;

  ((struct vfe_frame_extra *)VAR_0->extdata)->asfInfo =
  ((struct vfe_message *)VAR_3)->_u.msgOutput1.asfInfo;

  ((struct vfe_frame_extra *)VAR_0->extdata)->frameCounter =
  ((struct vfe_message *)VAR_3)->_u.msgOutput1.frameCounter;

  ((struct vfe_frame_extra *)VAR_0->extdata)->pmData =
  ((struct vfe_message *)VAR_3)->_u.msgOutput1.pmData;

  *VAR_4 = VAR_0->extdata;
  *VAR_5 = VAR_0->extlen;
 }
  break;

 case 130: {
  VAR_1->y_phy =
   ((struct vfe_message *)VAR_3)->_u.msgOutput2.yBuffer;
  VAR_1->cbcr_phy =
   ((struct vfe_message *)VAR_3)->_u.msgOutput2.cbcrBuffer;

  FUNC_0("vfe_addr_convert, pinfo->y_phy = 0x%x\n", VAR_1->y_phy);
  FUNC_0("vfe_addr_convert, pinfo->cbcr_phy = 0x%x\n",
   VAR_1->cbcr_phy);

  ((struct vfe_frame_extra *)VAR_0->extdata)->bpcInfo =
  ((struct vfe_message *)VAR_3)->_u.msgOutput2.bpcInfo;

  ((struct vfe_frame_extra *)VAR_0->extdata)->asfInfo =
  ((struct vfe_message *)VAR_3)->_u.msgOutput2.asfInfo;

  ((struct vfe_frame_extra *)VAR_0->extdata)->frameCounter =
  ((struct vfe_message *)VAR_3)->_u.msgOutput2.frameCounter;

  ((struct vfe_frame_extra *)VAR_0->extdata)->pmData =
  ((struct vfe_message *)VAR_3)->_u.msgOutput2.pmData;

  *VAR_4 = VAR_0->extdata;
  *VAR_5 = VAR_0->extlen;
 }
  break;

 case 129:
  VAR_1->sbuf_phy =
  ((struct vfe_message *)VAR_3)->_u.msgStatsAf.afBuffer;
  break;

 case 128:
  VAR_1->sbuf_phy =
  ((struct vfe_message *)VAR_3)->_u.msgStatsWbExp.awbBuffer;
  break;

 default:
  break;
 }
}
