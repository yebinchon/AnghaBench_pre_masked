
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; int x; int y; } ;
struct TYPE_9__ {int colStart; int rowStart; int colEnd; int rowEnd; } ;
struct TYPE_8__ {int videoSize; } ;
struct TYPE_10__ {int streamStartLine; TYPE_4__ roi; TYPE_3__ format; } ;
struct TYPE_7__ {int width; int height; } ;
struct cam_data {int video_size; TYPE_1__ vc; TYPE_5__ params; TYPE_2__ vw; } ;


 int FUNC_0 (char*,int) ;
__attribute__((used)) static void FUNC_1(struct cam_data *VAR_0)
{




 switch(VAR_0->video_size) {
 case 131:
  VAR_0->vw.width = 352;
  VAR_0->vw.height = 288;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=0;
  VAR_0->params.roi.rowStart=0;
  VAR_0->params.streamStartLine = 120;
  break;
 case 128:
  VAR_0->vw.width = 320;
  VAR_0->vw.height = 240;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=2;
  VAR_0->params.roi.rowStart=6;
  VAR_0->params.streamStartLine = 120;
  break;
 case 135:
  VAR_0->vw.width = 288;
  VAR_0->vw.height = 216;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=4;
  VAR_0->params.roi.rowStart=9;
  VAR_0->params.streamStartLine = 120;
  break;
 case 136:
  VAR_0->vw.width = 256;
  VAR_0->vw.height = 192;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=6;
  VAR_0->params.roi.rowStart=12;
  VAR_0->params.streamStartLine = 120;
  break;
 case 137:
  VAR_0->vw.width = 224;
  VAR_0->vw.height = 168;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=8;
  VAR_0->params.roi.rowStart=15;
  VAR_0->params.streamStartLine = 120;
  break;
 case 138:
  VAR_0->vw.width = 192;
  VAR_0->vw.height = 144;
  VAR_0->params.format.videoSize=131;
  VAR_0->params.roi.colStart=10;
  VAR_0->params.roi.rowStart=18;
  VAR_0->params.streamStartLine = 120;
  break;
 case 130:
  VAR_0->vw.width = 176;
  VAR_0->vw.height = 144;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=0;
  VAR_0->params.roi.rowStart=0;
  VAR_0->params.streamStartLine = 60;
  break;
 case 129:
  VAR_0->vw.width = 160;
  VAR_0->vw.height = 120;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=1;
  VAR_0->params.roi.rowStart=3;
  VAR_0->params.streamStartLine = 60;
  break;
 case 139:
  VAR_0->vw.width = 128;
  VAR_0->vw.height = 96;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=3;
  VAR_0->params.roi.rowStart=6;
  VAR_0->params.streamStartLine = 60;
  break;
 case 132:
  VAR_0->vw.width = 88;
  VAR_0->vw.height = 72;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=5;
  VAR_0->params.roi.rowStart=9;
  VAR_0->params.streamStartLine = 60;
  break;
 case 133:
  VAR_0->vw.width = 64;
  VAR_0->vw.height = 48;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=7;
  VAR_0->params.roi.rowStart=12;
  VAR_0->params.streamStartLine = 60;
  break;
 case 134:
  VAR_0->vw.width = 48;
  VAR_0->vw.height = 48;
  VAR_0->params.format.videoSize=130;
  VAR_0->params.roi.colStart=8;
  VAR_0->params.roi.rowStart=6;
  VAR_0->params.streamStartLine = 60;
  break;
 default:
  FUNC_0("bad videosize value: %d\n", VAR_0->video_size);
  return;
 }

 if(VAR_0->vc.width == 0)
  VAR_0->vc.width = VAR_0->vw.width;
 if(VAR_0->vc.height == 0)
  VAR_0->vc.height = VAR_0->vw.height;

 VAR_0->params.roi.colStart += VAR_0->vc.x >> 3;
 VAR_0->params.roi.colEnd = VAR_0->params.roi.colStart +
     (VAR_0->vc.width >> 3);
 VAR_0->params.roi.rowStart += VAR_0->vc.y >> 2;
 VAR_0->params.roi.rowEnd = VAR_0->params.roi.rowStart +
     (VAR_0->vc.height >> 2);

 return;
}
