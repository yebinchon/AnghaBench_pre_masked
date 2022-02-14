
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ outPort; scalar_t__ inPort; int component; int handle; } ;
struct TYPE_7__ {int nVersion; } ;
struct TYPE_9__ {int nSize; int nPorts; scalar_t__ nStartPortNumber; TYPE_1__ nVersion; } ;
struct TYPE_8__ {int * pOutputBufferHeader; TYPE_5__* imageResizer; int client; } ;
typedef TYPE_2__ OPENMAX_JPEG_DECODER ;
typedef TYPE_3__ OMX_PORT_PARAM_TYPE ;
typedef int COMPONENT_DETAILS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *,char*,int) ;
 TYPE_5__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(OPENMAX_JPEG_DECODER * VAR_9)
{
    VAR_9->imageResizer = FUNC_3(sizeof(COMPONENT_DETAILS));
    if (VAR_9->imageResizer == ((void*)0)) {
 FUNC_4("malloc image resizer");
 return VAR_4;
    }

    int VAR_10 = FUNC_2(VAR_9->client,
          &VAR_9->
          imageResizer->
          component,
          "resize",
          VAR_0
          |
          VAR_1
          |
          VAR_2);
    if (VAR_10 != 0) {
 FUNC_4("image resizer");
 return VAR_3;
    }

    VAR_9->imageResizer->handle =
 FUNC_0(VAR_9->imageResizer->component);


    OMX_PORT_PARAM_TYPE VAR_11;
    VAR_11.nSize = sizeof(OMX_PORT_PARAM_TYPE);
    VAR_11.nVersion.nVersion = VAR_8;

    FUNC_1(FUNC_0(VAR_9->imageResizer->component),
       VAR_7, &VAR_11);
    if (VAR_11.nPorts != 2) {
 return VAR_5;
    }
    VAR_9->imageResizer->inPort = VAR_11.nStartPortNumber;
    VAR_9->imageResizer->outPort = VAR_11.nStartPortNumber + 1;

    VAR_9->pOutputBufferHeader = ((void*)0);

    return VAR_6;
}
