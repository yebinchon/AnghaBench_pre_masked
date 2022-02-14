
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {unsigned int nFrameWidth; unsigned int nFrameHeight; scalar_t__ eColorFormat; int bFlagErrorConcealment; scalar_t__ nSliceHeight; scalar_t__ nStride; int eCompressionFormat; } ;
struct TYPE_15__ {TYPE_4__ image; } ;
struct TYPE_12__ {void* nVersion; } ;
struct TYPE_17__ {int nSize; int nBufferSize; TYPE_5__ format; int nPortIndex; TYPE_2__ nVersion; } ;
struct TYPE_16__ {TYPE_3__* imageResizer; int pOutputBufferHeader; TYPE_1__* imageDecoder; } ;
struct TYPE_13__ {int outPort; int component; int handle; int inPort; } ;
struct TYPE_11__ {int outPort; int component; int handle; } ;
typedef TYPE_6__ OPENMAX_JPEG_DECODER ;
typedef TYPE_7__ OMX_PARAM_PORTDEFINITIONTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,TYPE_7__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int,int ,int,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_15 ;
 int VAR_16 ;

int
FUNC_12(OPENMAX_JPEG_DECODER * VAR_17)
{
    OMX_PARAM_PORTDEFINITIONTYPE VAR_18;



    VAR_18.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
    VAR_18.nVersion.nVersion = VAR_13;
    VAR_18.nPortIndex = VAR_17->imageDecoder->outPort;
    FUNC_1(VAR_17->imageDecoder->handle,
       VAR_10, &VAR_18);

    unsigned int VAR_19 =
 (unsigned int) VAR_18.format.image.nFrameWidth;
    unsigned int VAR_20 =
 (unsigned int) VAR_18.format.image.nFrameHeight;


    VAR_18.nPortIndex = VAR_17->imageResizer->inPort;
    FUNC_3(VAR_17->imageResizer->handle,
       VAR_10, &VAR_18);


    FUNC_4(VAR_17->imageDecoder->handle,
      VAR_17->imageDecoder->outPort,
      VAR_17->imageResizer->handle,
      VAR_17->imageResizer->inPort);


    FUNC_2(VAR_17->imageDecoder->handle,
      VAR_3,
      VAR_17->imageDecoder->outPort, ((void*)0));
    FUNC_2(VAR_17->imageResizer->handle,
      VAR_3,
      VAR_17->imageResizer->inPort, ((void*)0));



    FUNC_2(VAR_17->imageResizer->handle,
      VAR_4, VAR_12, ((void*)0));


    FUNC_9(VAR_17->imageResizer->component,
       VAR_6,
       VAR_4, 1,
       VAR_12, 1, 0, VAR_14);




    FUNC_9(VAR_17->imageDecoder->component,
       VAR_6,
       VAR_3, 1,
       VAR_17->imageDecoder->outPort, 1, 0,
       VAR_14);
    FUNC_9(VAR_17->imageResizer->component,
       VAR_6, VAR_3, 1,
       VAR_17->imageResizer->inPort, 1, 0,
       VAR_14);
    FUNC_9(VAR_17->imageResizer->component,
       VAR_7,
       VAR_17->imageResizer->outPort, 1, 0, 1, 0,
       VAR_14);

    FUNC_8(VAR_17->imageResizer->component,
     VAR_17->imageResizer->outPort);


    VAR_18.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
    VAR_18.nVersion.nVersion = VAR_13;
    VAR_18.nPortIndex = VAR_17->imageResizer->outPort;
    FUNC_1(VAR_17->imageResizer->handle,
       VAR_10, &VAR_18);


    VAR_18.format.image.eCompressionFormat = VAR_9;
    VAR_18.format.image.eColorFormat = VAR_2;
    VAR_18.format.image.nFrameWidth = VAR_19;
    VAR_18.format.image.nFrameHeight = VAR_20;
    VAR_18.format.image.nStride = 0;
    VAR_18.format.image.nSliceHeight = 0;
    VAR_18.format.image.bFlagErrorConcealment = VAR_8;

    FUNC_3(VAR_17->imageResizer->handle,
       VAR_10, &VAR_18);



    FUNC_1(VAR_17->imageResizer->handle,
       VAR_10, &VAR_18);


    FUNC_7(VAR_17->imageResizer->component,
        VAR_11);


    FUNC_11
 ("Width: %u Height: %u Output Color Format: 0x%x Buffer Size: %u\n",
  (unsigned int) VAR_18.format.image.nFrameWidth,
  (unsigned int) VAR_18.format.image.nFrameHeight,
  (unsigned int) VAR_18.format.image.eColorFormat,
  (unsigned int) VAR_18.nBufferSize);
    FUNC_5(VAR_16);


    FUNC_2(VAR_17->imageResizer->handle,
      VAR_3,
      VAR_17->imageResizer->outPort, ((void*)0));
    int VAR_21 = FUNC_0(VAR_17->imageResizer->handle,
          &VAR_17->pOutputBufferHeader,
          VAR_17->imageResizer->
          outPort,
          ((void*)0),
          VAR_18.nBufferSize);
    if (VAR_21 != VAR_5) {
 FUNC_10("Eror allocating buffer");
 FUNC_6(VAR_15, "OMX_AllocateBuffer returned 0x%x allocating buffer size 0x%x\n", VAR_21, VAR_18.nBufferSize);
 return VAR_0;
    }

    FUNC_9(VAR_17->imageResizer->component,
       VAR_6,
       VAR_3, 1,
       VAR_17->imageResizer->outPort, 1, 0,
       VAR_14);

    return VAR_1;
}
