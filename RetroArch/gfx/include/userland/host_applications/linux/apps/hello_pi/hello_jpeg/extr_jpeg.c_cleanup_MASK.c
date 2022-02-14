
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int inputBufferHeaderCount; int * client; TYPE_2__* imageResizer; TYPE_1__* imageDecoder; int * pOutputBufferHeader; int ** ppInputBufferHeader; } ;
struct TYPE_6__ {int component; int inPort; int handle; int outPort; } ;
struct TYPE_5__ {int component; int outPort; int handle; int inPort; } ;
typedef TYPE_3__ OPENMAX_JPEG_DECODER ;
typedef int OMX_BUFFERHEADERTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int,int ,int ) ;

void
FUNC_7(OPENMAX_JPEG_DECODER * VAR_7)
{

    FUNC_2(VAR_7->imageDecoder->handle,
      VAR_0, VAR_7->imageDecoder->outPort,
      ((void*)0));
    FUNC_6(VAR_7->imageDecoder->component,
       VAR_3, VAR_0, 0,
       VAR_7->imageDecoder->outPort, 0, 0,
       VAR_6);
    FUNC_2(VAR_7->imageResizer->handle, VAR_0,
      VAR_7->imageResizer->inPort, ((void*)0));
    FUNC_6(VAR_7->imageResizer->component,
       VAR_3, VAR_0, 0,
       VAR_7->imageResizer->inPort, 1, 0,
       VAR_6);

    FUNC_2(VAR_7->imageDecoder->handle, VAR_1,
      VAR_7->imageDecoder->inPort, ((void*)0));

    int VAR_8 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_7->inputBufferHeaderCount; VAR_8++) {
 OMX_BUFFERHEADERTYPE *VAR_9 =
     VAR_7->ppInputBufferHeader[VAR_8];

 FUNC_1(VAR_7->imageDecoder->handle,
         VAR_7->imageDecoder->inPort, VAR_9);
    }

    FUNC_6(VAR_7->imageDecoder->component,
       VAR_3, VAR_1,
       0, VAR_7->imageDecoder->inPort, 0, 0,
       VAR_6);

    FUNC_2(VAR_7->imageResizer->handle, VAR_1,
      VAR_7->imageResizer->outPort, ((void*)0));

    FUNC_1(VAR_7->imageResizer->handle,
     VAR_7->imageResizer->outPort,
     VAR_7->pOutputBufferHeader);

    FUNC_6(VAR_7->imageResizer->component,
       VAR_3, VAR_1,
       0, VAR_7->imageResizer->outPort, 0, 0,
       VAR_6);

    FUNC_2(VAR_7->imageDecoder->handle, VAR_1,
      VAR_7->imageDecoder->outPort, ((void*)0));
    FUNC_6(VAR_7->imageDecoder->component,
       VAR_3, VAR_1,
       0, VAR_7->imageDecoder->outPort, 0, 0,
       VAR_6);

    FUNC_2(VAR_7->imageResizer->handle, VAR_1,
      VAR_7->imageResizer->inPort, ((void*)0));
    FUNC_6(VAR_7->imageResizer->component,
       VAR_3, VAR_1,
       0, VAR_7->imageResizer->inPort, 0, 0,
       VAR_6);

    FUNC_3(VAR_7->imageDecoder->handle,
      VAR_7->imageDecoder->outPort, ((void*)0), 0);
    FUNC_3(VAR_7->imageResizer->handle,
      VAR_7->imageResizer->inPort, ((void*)0), 0);

    FUNC_4(VAR_7->imageDecoder->component,
        VAR_4);
    FUNC_4(VAR_7->imageResizer->component,
        VAR_4);

    FUNC_6(VAR_7->imageDecoder->component,
       VAR_3, VAR_2, 0,
       VAR_4, 0, 0, VAR_6);
    FUNC_6(VAR_7->imageResizer->component,
       VAR_3, VAR_2, 0,
       VAR_4, 0, 0, VAR_6);

    FUNC_4(VAR_7->imageDecoder->component,
        VAR_5);
    FUNC_4(VAR_7->imageResizer->component,
        VAR_5);

    FUNC_6(VAR_7->imageDecoder->component,
       VAR_3, VAR_2, 0,
       VAR_5, 0, 0, VAR_6);
    FUNC_6(VAR_7->imageResizer->component,
       VAR_3, VAR_2, 0,
       VAR_5, 0, 0, VAR_6);

    FUNC_0();

    if (VAR_7->client != ((void*)0)) {
 FUNC_5(VAR_7->client);
    }
}
