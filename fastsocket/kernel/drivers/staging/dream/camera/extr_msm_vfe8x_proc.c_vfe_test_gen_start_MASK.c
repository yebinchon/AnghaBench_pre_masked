
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct vfe_cmd_test_gen_start {int testGenRandomSeed; int colorBarsRotatePeriod; scalar_t__ colorBarsPixelPattern; int colorBarsSplitEnable; int unicolorBarEnable; int unicolorBarSelect; int endOfFrameDummyLine; int startOfFrameDummyLine; int vblEnable; int vbl; int hbi; int endOfLineNOffset; int startOfLineOffset; int endOfFrameNOffset; int startOfFrameOffset; int imageHeight; int imageWidth; scalar_t__ vsyncEdge; scalar_t__ hsyncEdge; scalar_t__ pixelDataSize; int systematicDataSelect; int pixelDataSelect; int numFrame; } ;
struct VFE_TestGen_ConfigCmdType {int randomSeed; int rotatePeriod; void* pixelPattern; int splitEnable; int unicolorBarEnable; int unicolorBarSelect; int eofDummy; int sofDummy; int vBlankIntervalEnable; int vBlankInterval; int hBlankInterval; int eolNOffset; int solOffset; int eofNOffset; int sofOffset; int imageHeight; int imageWidth; void* vsyncEdge; void* hsyncEdge; void* pixelDataSize; int systematicDataSelect; int pixelDataSelect; int numFrame; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct VFE_TestGen_ConfigCmdType*,int ,int) ;
 int FUNC_1 (scalar_t__,void**,int) ;

void FUNC_2(struct vfe_cmd_test_gen_start *VAR_2)
{
 struct VFE_TestGen_ConfigCmdType VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.numFrame = VAR_2->numFrame;
 VAR_3.pixelDataSelect = VAR_2->pixelDataSelect;
 VAR_3.systematicDataSelect = VAR_2->systematicDataSelect;
 VAR_3.pixelDataSize = (uint32_t)VAR_2->pixelDataSize;
 VAR_3.hsyncEdge = (uint32_t)VAR_2->hsyncEdge;
 VAR_3.vsyncEdge = (uint32_t)VAR_2->vsyncEdge;
 VAR_3.imageWidth = VAR_2->imageWidth;
 VAR_3.imageHeight = VAR_2->imageHeight;
 VAR_3.sofOffset = VAR_2->startOfFrameOffset;
 VAR_3.eofNOffset = VAR_2->endOfFrameNOffset;
 VAR_3.solOffset = VAR_2->startOfLineOffset;
 VAR_3.eolNOffset = VAR_2->endOfLineNOffset;
 VAR_3.hBlankInterval = VAR_2->hbi;
 VAR_3.vBlankInterval = VAR_2->vbl;
 VAR_3.vBlankIntervalEnable = VAR_2->vblEnable;
 VAR_3.sofDummy = VAR_2->startOfFrameDummyLine;
 VAR_3.eofDummy = VAR_2->endOfFrameDummyLine;
 VAR_3.unicolorBarSelect = VAR_2->unicolorBarSelect;
 VAR_3.unicolorBarEnable = VAR_2->unicolorBarEnable;
 VAR_3.splitEnable = VAR_2->colorBarsSplitEnable;
 VAR_3.pixelPattern = (uint32_t)VAR_2->colorBarsPixelPattern;
 VAR_3.rotatePeriod = VAR_2->colorBarsRotatePeriod;
 VAR_3.randomSeed = VAR_2->testGenRandomSeed;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *) &VAR_3, sizeof(VAR_3));
}
