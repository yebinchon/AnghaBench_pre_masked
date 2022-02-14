
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* nVersion; } ;
struct TYPE_16__ {int nSize; int eCompressionFormat; int nPortIndex; TYPE_1__ nVersion; } ;
struct TYPE_12__ {void* nVersion; } ;
struct TYPE_15__ {int nSize; int nBufferCountActual; int nBufferSize; int nPortIndex; TYPE_2__ nVersion; } ;
struct TYPE_14__ {int inputBufferHeaderCount; TYPE_3__* imageDecoder; int ** ppInputBufferHeader; } ;
struct TYPE_13__ {int component; int handle; int inPort; } ;
typedef TYPE_4__ OPENMAX_JPEG_DECODER ;
typedef TYPE_5__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef TYPE_6__ OMX_IMAGE_PARAM_PORTFORMATTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int **,int ,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_6__*) ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (char*) ;
 int VAR_14 ;

int
FUNC_10(OPENMAX_JPEG_DECODER * VAR_15)
{

    FUNC_5(VAR_15->imageDecoder->component,
        VAR_11);


    OMX_IMAGE_PARAM_PORTFORMATTYPE VAR_16;
    FUNC_8(&VAR_16, 0, sizeof(OMX_IMAGE_PARAM_PORTFORMATTYPE));
    VAR_16.nSize = sizeof(OMX_IMAGE_PARAM_PORTFORMATTYPE);
    VAR_16.nVersion.nVersion = VAR_12;
    VAR_16.nPortIndex = VAR_15->imageDecoder->inPort;
    VAR_16.eCompressionFormat = VAR_7;
    FUNC_3(VAR_15->imageDecoder->handle,
       VAR_8, &VAR_16);


    OMX_PARAM_PORTDEFINITIONTYPE VAR_17;
    VAR_17.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
    VAR_17.nVersion.nVersion = VAR_12;
    VAR_17.nPortIndex = VAR_15->imageDecoder->inPort;
    FUNC_1(VAR_15->imageDecoder->handle,
       VAR_9, &VAR_17);


    FUNC_2(VAR_15->imageDecoder->handle,
      VAR_3,
      VAR_15->imageDecoder->inPort, ((void*)0));
    VAR_15->inputBufferHeaderCount = VAR_17.nBufferCountActual;

    VAR_15->ppInputBufferHeader =
 (OMX_BUFFERHEADERTYPE **) FUNC_7(sizeof(void) *
      VAR_15->inputBufferHeaderCount);

    int VAR_18;
    for (VAR_18 = 0; VAR_18 < VAR_15->inputBufferHeaderCount; VAR_18++) {
 if (FUNC_0(VAR_15->imageDecoder->handle,
          &VAR_15->ppInputBufferHeader[VAR_18],
          VAR_15->imageDecoder->inPort,
          (void *) VAR_18,
          VAR_17.nBufferSize) != VAR_5) {
     FUNC_9("Allocate decode buffer");
     return VAR_1;
 }
    }


    int VAR_19 =
 FUNC_6(VAR_15->imageDecoder->component,
    VAR_6,
    VAR_3, 0,
    VAR_15->imageDecoder->inPort, 0,
    0, VAR_13);
    if (VAR_19 != 0) {
 FUNC_4(VAR_14, "Did not get port enable %d\n", VAR_19);
 return VAR_0;
    }

    VAR_19 = FUNC_2(VAR_15->imageDecoder->handle,
     VAR_4, VAR_10, ((void*)0));
    if (VAR_19 != 0) {
 FUNC_4(VAR_14, "Error starting image decoder %x\n", VAR_19);
 return VAR_0;
    }
    VAR_19 = FUNC_6(VAR_15->imageDecoder->component,
      VAR_6,
      VAR_10, 0, 0, 1, 0,
      VAR_13);
    if (VAR_19 != 0) {
 FUNC_4(VAR_14, "Did not receive executing stat %d\n", VAR_19);

    }

    return VAR_2;
}
