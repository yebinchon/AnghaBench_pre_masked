
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ outPort; scalar_t__ inPort; int handle; int component; } ;
struct TYPE_7__ {int nVersion; } ;
struct TYPE_9__ {int nSize; int nPorts; scalar_t__ nStartPortNumber; TYPE_1__ nVersion; } ;
struct TYPE_8__ {TYPE_5__* imageDecoder; int client; } ;
typedef TYPE_2__ OPENMAX_JPEG_DECODER ;
typedef TYPE_3__ OMX_PORT_PARAM_TYPE ;
typedef int COMPONENT_DETAILS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,char*,int) ;
 TYPE_5__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(OPENMAX_JPEG_DECODER * VAR_8)
{
    VAR_8->imageDecoder = FUNC_3(sizeof(COMPONENT_DETAILS));
    if (VAR_8->imageDecoder == ((void*)0)) {
 FUNC_4("malloc image decoder");
 return VAR_3;
    }

    int VAR_9 = FUNC_2(VAR_8->client,
          &VAR_8->
          imageDecoder->
          component,
          "image_decode",
          VAR_0
          |
          VAR_1);

    if (VAR_9 != 0) {
 FUNC_4("image decode");
 return VAR_2;
    }

    VAR_8->imageDecoder->handle =
 FUNC_0(VAR_8->imageDecoder->component);


    OMX_PORT_PARAM_TYPE VAR_10;
    VAR_10.nSize = sizeof(OMX_PORT_PARAM_TYPE);
    VAR_10.nVersion.nVersion = VAR_7;

    FUNC_1(VAR_8->imageDecoder->handle,
       VAR_6, &VAR_10);
    if (VAR_10.nPorts != 2) {
 return VAR_4;
    }
    VAR_8->imageDecoder->inPort = VAR_10.nStartPortNumber;
    VAR_8->imageDecoder->outPort = VAR_10.nStartPortNumber + 1;

    return VAR_5;
}
