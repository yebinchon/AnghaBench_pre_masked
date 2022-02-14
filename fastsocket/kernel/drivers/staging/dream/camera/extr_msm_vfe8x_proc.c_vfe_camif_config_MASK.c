
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {scalar_t__ enable; scalar_t__ lineindex; } ;
struct TYPE_16__ {scalar_t__ enable; scalar_t__ lineindex; } ;
struct TYPE_15__ {int pixelskipwrap; int frameskipmode; int frameskip; int lineskipmask; int pixelskipmask; } ;
struct TYPE_14__ {scalar_t__ firstpixel; scalar_t__ lastpixel; scalar_t__ firstline; scalar_t__ lastline; } ;
struct TYPE_13__ {scalar_t__ pixelsPerLine; scalar_t__ linesPerFrame; } ;
struct TYPE_12__ {int efsstartofframe; int efsendofframe; int efsstartofline; int efsendofline; } ;
struct vfe_cmd_camif_config {TYPE_8__ epoch2; TYPE_7__ epoch1; TYPE_6__ subsample; TYPE_5__ window; TYPE_4__ frame; TYPE_3__ EFS; int camifConfig; } ;
struct vfe_camifcfg {scalar_t__ frameConfigPixelsPerLine; scalar_t__ frameConfigLinesPerFrame; scalar_t__ windowWidthCfgLastPixel; scalar_t__ windowWidthCfgFirstPixel; scalar_t__ windowHeightCfglastLine; scalar_t__ windowHeightCfgfirstLine; scalar_t__ epoch1Line; scalar_t__ epoch2Line; int subsample2CfgPixelSkipWrap; int subsample2CfgFrameSkipMode; int subsample2CfgFrameSkip; int subsample1CfgLineSkip; int subsample1CfgPixelSkip; int efsStartOfFrame; int efsEndOfFrame; int efsStartOfLine; int efsEndOfLine; } ;
typedef int cmd ;
struct TYPE_11__ {int camifCfgFromCmd; } ;
struct TYPE_10__ {int camifEpoch1Irq; int camifEpoch2Irq; } ;
struct TYPE_18__ {scalar_t__ vfebase; TYPE_2__ vfeCamifConfigLocal; TYPE_1__ vfeImaskLocal; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_9__* VAR_2 ;
 int FUNC_1 (struct vfe_camifcfg*,int ,int) ;
 int FUNC_2 (scalar_t__,int *,int) ;

void FUNC_3(struct vfe_cmd_camif_config *VAR_3)
{
 struct vfe_camifcfg VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 FUNC_0("camif.frame pixelsPerLine = %d\n", VAR_3->frame.pixelsPerLine);
 FUNC_0("camif.frame linesPerFrame = %d\n", VAR_3->frame.linesPerFrame);
 FUNC_0("camif.window firstpixel = %d\n", VAR_3->window.firstpixel);
 FUNC_0("camif.window lastpixel = %d\n", VAR_3->window.lastpixel);
 FUNC_0("camif.window firstline = %d\n", VAR_3->window.firstline);
 FUNC_0("camif.window lastline = %d\n", VAR_3->window.lastline);


 if ((VAR_3->epoch1.enable == VAR_1) &&
   (VAR_3->epoch1.lineindex <=
    VAR_3->frame.linesPerFrame))
  VAR_2->vfeImaskLocal.camifEpoch1Irq = 1;

 if ((VAR_3->epoch2.enable == VAR_1) &&
   (VAR_3->epoch2.lineindex <=
    VAR_3->frame.linesPerFrame)) {
  VAR_2->vfeImaskLocal.camifEpoch2Irq = 1;
 }


 VAR_2->vfeCamifConfigLocal.camifCfgFromCmd = VAR_3->camifConfig;


 VAR_4.efsEndOfLine = VAR_3->EFS.efsendofline;
 VAR_4.efsStartOfLine = VAR_3->EFS.efsstartofline;
 VAR_4.efsEndOfFrame = VAR_3->EFS.efsendofframe;
 VAR_4.efsStartOfFrame = VAR_3->EFS.efsstartofframe;


 VAR_4.frameConfigPixelsPerLine = VAR_3->frame.pixelsPerLine;
 VAR_4.frameConfigLinesPerFrame = VAR_3->frame.linesPerFrame;


 VAR_4.windowWidthCfgLastPixel = VAR_3->window.lastpixel;
 VAR_4.windowWidthCfgFirstPixel = VAR_3->window.firstpixel;


 VAR_4.windowHeightCfglastLine = VAR_3->window.lastline;
 VAR_4.windowHeightCfgfirstLine = VAR_3->window.firstline;


 VAR_4.subsample1CfgPixelSkip = VAR_3->subsample.pixelskipmask;
 VAR_4.subsample1CfgLineSkip = VAR_3->subsample.lineskipmask;


 VAR_4.subsample2CfgFrameSkip = VAR_3->subsample.frameskip;
 VAR_4.subsample2CfgFrameSkipMode = VAR_3->subsample.frameskipmode;
 VAR_4.subsample2CfgPixelSkipWrap = VAR_3->subsample.pixelskipwrap;


 VAR_4.epoch1Line = VAR_3->epoch1.lineindex;
 VAR_4.epoch2Line = VAR_3->epoch2.lineindex;

 FUNC_2(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_4, sizeof(VAR_4));
}
