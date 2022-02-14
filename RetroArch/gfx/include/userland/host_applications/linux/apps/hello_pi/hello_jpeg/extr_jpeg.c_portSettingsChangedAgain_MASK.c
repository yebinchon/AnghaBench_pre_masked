
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nVersion; } ;
struct TYPE_13__ {int nSize; int nPortIndex; TYPE_1__ nVersion; } ;
struct TYPE_12__ {TYPE_3__* imageResizer; TYPE_2__* imageDecoder; } ;
struct TYPE_11__ {int outPort; int component; int inPort; int handle; } ;
struct TYPE_10__ {int outPort; int component; int handle; } ;
typedef TYPE_4__ OPENMAX_JPEG_DECODER ;
typedef TYPE_5__ OMX_PARAM_PORTDEFINITIONTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int ,int ) ;

int
FUNC_5(OPENMAX_JPEG_DECODER * VAR_5)
{
    FUNC_2(VAR_5->imageDecoder->component,
     VAR_5->imageDecoder->outPort);
    FUNC_2(VAR_5->imageResizer->component,
     VAR_5->imageResizer->inPort);

    OMX_PARAM_PORTDEFINITIONTYPE VAR_6;



    VAR_6.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
    VAR_6.nVersion.nVersion = VAR_3;
    VAR_6.nPortIndex = VAR_5->imageDecoder->outPort;
    FUNC_0(VAR_5->imageDecoder->handle,
       VAR_2, &VAR_6);


    VAR_6.nPortIndex = VAR_5->imageResizer->inPort;
    FUNC_1(VAR_5->imageResizer->handle,
       VAR_2, &VAR_6);


    FUNC_3(VAR_5->imageDecoder->component,
    VAR_5->imageDecoder->outPort);
    FUNC_3(VAR_5->imageResizer->component,
    VAR_5->imageResizer->inPort);


    FUNC_4(VAR_5->imageResizer->component,
       VAR_1,
       VAR_5->imageResizer->outPort, 1,
       0, 0, 0, VAR_4);

    return VAR_0;
}
