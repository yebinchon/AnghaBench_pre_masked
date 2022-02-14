
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nStride; int nSliceHeight; int nFrameHeight; int nFrameWidth; } ;
struct TYPE_5__ {TYPE_2__ video; } ;
struct TYPE_7__ {TYPE_1__ format; } ;
typedef TYPE_2__ OMX_VIDEO_PORTDEFINITIONTYPE ;
typedef int OMX_U32 ;
typedef TYPE_3__ OMX_PARAM_PORTDEFINITIONTYPE ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, OMX_U32 * VAR_1, int VAR_2, OMX_PARAM_PORTDEFINITIONTYPE *VAR_3)
{
   int VAR_4, VAR_5;
   OMX_VIDEO_PORTDEFINITIONTYPE *VAR_6 = &VAR_3->format.video;
   char *VAR_7 = VAR_0;
   char *VAR_8 = VAR_7 + VAR_6->nStride * VAR_6->nSliceHeight;
   char *VAR_9 = VAR_8 + (VAR_6->nStride >> 1) * (VAR_6->nSliceHeight >> 1);

   for (VAR_5 = 0; VAR_5 < VAR_6->nFrameHeight / 2; VAR_5++) {
      char *VAR_10 = VAR_7 + 2 * VAR_5 * VAR_6->nStride;
      char *VAR_11 = VAR_8 + VAR_5 * (VAR_6->nStride >> 1);
      char *VAR_12 = VAR_9 + VAR_5 * (VAR_6->nStride >> 1);
      for (VAR_4 = 0; VAR_4 < VAR_6->nFrameWidth / 2; VAR_4++) {
         int VAR_13 = (((VAR_4 + VAR_2) >> 4) ^ ((VAR_5 + VAR_2) >> 4)) & 15;
         VAR_10[0] = VAR_10[1] = VAR_10[VAR_6->nStride] = VAR_10[VAR_6->nStride + 1] = 0x80 + VAR_13 * 0x8;
         VAR_11[0] = 0x00 + VAR_13 * 0x10;
         VAR_12[0] = 0x80 + VAR_13 * 0x30;
         VAR_10 += 2;
         VAR_11++;
         VAR_12++;
      }
   }
   *VAR_1 = (VAR_6->nStride * VAR_6->nSliceHeight * 3) >> 1;
   return 1;
}
