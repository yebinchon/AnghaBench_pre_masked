
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


typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int * addressBuffer; } ;
struct TYPE_13__ {int * addressBuffer; } ;
struct vfe_output_path_combo {TYPE_6__ cbcrPath; TYPE_4__ yPath; } ;
struct TYPE_16__ {int imageWidth; int outRowIncrement; int outRowCount; int imageHeight; } ;
struct TYPE_14__ {int imageWidth; int outRowIncrement; int outRowCount; int imageHeight; } ;
struct TYPE_17__ {TYPE_7__ outputCbcr; TYPE_5__ outputY; } ;
struct TYPE_11__ {int imageWidth; int outRowIncrement; int outRowCount; int imageHeight; } ;
struct TYPE_10__ {int imageWidth; int outRowIncrement; int outRowCount; int imageHeight; } ;
struct TYPE_12__ {TYPE_2__ outputCbcr; TYPE_1__ outputY; } ;
struct vfe_cmd_axi_output_config {TYPE_8__ output1; TYPE_3__ output2; } ;
struct vfe_axi_out_cfg {int out2YImageWidthin64bit; int out2YRowIncrementIn64bit; int out2CbcrImageWidthIn64bit; int out2CbcrRowIncrementIn64bit; int out1YImageWidthin64bit; int out1YRowIncrementIn64bit; int out1CbcrImageWidthIn64bit; int out1CbcrRowIncrementIn64bit; int out1CbcrNumRows; void* out1CbcrBurstLength; int out1CbcrImageHeight; int out1CbcrPongAddr; int out1CbcrPingAddr; int out1YNumRows; void* out1YBurstLength; int out1YImageHeight; int out1YPongAddr; int out1YPingAddr; int out2CbcrNumRows; void* out2CbcrBurstLength; int out2CbcrImageHeight; int out2CbcrPongAddr; int out2CbcrPingAddr; int out2YNumRows; void* out2YBurstLength; int out2YImageHeight; int out2YPongAddr; int out2YPingAddr; } ;
typedef int cmd ;
struct TYPE_18__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_9__* VAR_1 ;
 int FUNC_0 (scalar_t__,void**,int) ;

__attribute__((used)) static void FUNC_1(struct vfe_cmd_axi_output_config *VAR_2,
 struct vfe_output_path_combo *VAR_3,
 struct vfe_output_path_combo *VAR_4, uint16_t VAR_5)
{
 struct vfe_axi_out_cfg VAR_6;

 uint16_t VAR_7;
 uint32_t VAR_8;


 VAR_8 = 1;



 VAR_6.out2YPingAddr = VAR_4->yPath.addressBuffer[0];


 VAR_6.out2YPongAddr = VAR_4->yPath.addressBuffer[1];


 VAR_6.out2YImageHeight = VAR_2->output2.outputY.imageHeight;


 VAR_7 = (VAR_2->output2.outputY.imageWidth + (VAR_5 - 1)) /
  VAR_5;
 VAR_6.out2YImageWidthin64bit = VAR_7;


 VAR_6.out2YBurstLength = VAR_8;
 VAR_6.out2YNumRows = VAR_2->output2.outputY.outRowCount;
 VAR_7 = (VAR_2->output2.outputY.outRowIncrement + (VAR_5 - 1)) /
  VAR_5;
 VAR_6.out2YRowIncrementIn64bit = VAR_7;



 VAR_6.out2CbcrPingAddr = VAR_4->cbcrPath.addressBuffer[0];


 VAR_6.out2CbcrPongAddr = VAR_4->cbcrPath.addressBuffer[1];


 VAR_6.out2CbcrImageHeight = VAR_2->output2.outputCbcr.imageHeight;
 VAR_7 = (VAR_2->output2.outputCbcr.imageWidth + (VAR_5 - 1)) /
  VAR_5;
 VAR_6.out2CbcrImageWidthIn64bit = VAR_7;


 VAR_6.out2CbcrBurstLength = VAR_8;
 VAR_6.out2CbcrNumRows = VAR_2->output2.outputCbcr.outRowCount;
 VAR_7 = (VAR_2->output2.outputCbcr.outRowIncrement + (VAR_5 - 1)) /
  VAR_5;
 VAR_6.out2CbcrRowIncrementIn64bit = VAR_7;



 VAR_6.out1YPingAddr = VAR_3->yPath.addressBuffer[0];


 VAR_6.out1YPongAddr = VAR_3->yPath.addressBuffer[1];


 VAR_6.out1YImageHeight = VAR_2->output1.outputY.imageHeight;
 VAR_7 = (VAR_2->output1.outputY.imageWidth + (VAR_5 - 1)) /
  VAR_5;
 VAR_6.out1YImageWidthin64bit = VAR_7;


 VAR_6.out1YBurstLength = VAR_8;
 VAR_6.out1YNumRows = VAR_2->output1.outputY.outRowCount;

 VAR_7 =
  (VAR_2->output1.outputY.outRowIncrement +
   (VAR_5 - 1)) / VAR_5;
 VAR_6.out1YRowIncrementIn64bit = VAR_7;


 VAR_6.out1CbcrPingAddr = VAR_3->cbcrPath.addressBuffer[0];


 VAR_6.out1CbcrPongAddr =
  VAR_3->cbcrPath.addressBuffer[1];


 VAR_6.out1CbcrImageHeight = VAR_2->output1.outputCbcr.imageHeight;
 VAR_7 = (VAR_2->output1.outputCbcr.imageWidth +
  (VAR_5 - 1)) / VAR_5;
 VAR_6.out1CbcrImageWidthIn64bit = VAR_7;

 VAR_6.out1CbcrBurstLength = VAR_8;
 VAR_6.out1CbcrNumRows = VAR_2->output1.outputCbcr.outRowCount;
 VAR_7 =
  (VAR_2->output1.outputCbcr.outRowIncrement +
   (VAR_5 - 1)) / VAR_5;

 VAR_6.out1CbcrRowIncrementIn64bit = VAR_7;

 FUNC_0(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_6, sizeof(VAR_6));
}
