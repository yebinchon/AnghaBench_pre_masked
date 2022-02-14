
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nFrameWidth; int nFrameHeight; int nStride; int nSliceHeight; int xFramerate; int eColorFormat; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_7__ {int nPortIndex; scalar_t__ eDir; int nBufferCountActual; int nBufferCountMin; int nBufferSize; int nBufferAlignment; TYPE_2__ format; scalar_t__ bBuffersContiguous; scalar_t__ bPopulated; scalar_t__ bEnabled; } ;
typedef TYPE_3__ OMX_PARAM_PORTDEFINITIONTYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,int,int,int,int,char*,char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(OMX_PARAM_PORTDEFINITIONTYPE VAR_1)
{
   FUNC_0("Port %u: %s %u/%u %u %u %s,%s,%s %ux%u %ux%u @%u %u\n",
          VAR_1.nPortIndex,
          VAR_1.eDir == VAR_0 ? "in" : "out",
          VAR_1.nBufferCountActual,
          VAR_1.nBufferCountMin,
          VAR_1.nBufferSize,
          VAR_1.nBufferAlignment,
          VAR_1.bEnabled ? "enabled" : "disabled",
          VAR_1.bPopulated ? "populated" : "not pop.",
          VAR_1.bBuffersContiguous ? "contig." : "not cont.",
          VAR_1.format.video.nFrameWidth,
          VAR_1.format.video.nFrameHeight,
          VAR_1.format.video.nStride,
          VAR_1.format.video.nSliceHeight,
          VAR_1.format.video.xFramerate, VAR_1.format.video.eColorFormat);
}
