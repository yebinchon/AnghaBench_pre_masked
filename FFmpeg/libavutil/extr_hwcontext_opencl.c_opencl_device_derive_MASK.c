
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef intptr_t cl_context_properties ;
struct TYPE_13__ {int type; TYPE_2__* hwctx; } ;
struct TYPE_12__ {int * device; int devmgr; int * display; } ;
struct TYPE_11__ {int platform_index; int device_index; int * filter_device; int * enumerate_devices; int * filter_platform; int * enumerate_platforms; int * context; } ;
typedef TYPE_1__ OpenCLDeviceSelector ;
typedef int IDirect3DDevice9 ;
typedef scalar_t__ HRESULT ;
typedef int HANDLE ;
typedef TYPE_2__ AVVAAPIDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef int AVDictionary ;
typedef TYPE_2__ AVDXVA2DeviceContext ;
typedef TYPE_2__ AVD3D11VADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 intptr_t VAR_2 ;
 intptr_t VAR_3 ;
 intptr_t VAR_4 ;
 intptr_t VAR_5 ;
 intptr_t VAR_6 ;
 intptr_t VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int **,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int **,char*,char*,int ) ;
 int FUNC_9 (TYPE_3__*,int ,char*,unsigned long) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*,intptr_t*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_11(AVHWDeviceContext *VAR_23,
                                AVHWDeviceContext *VAR_24,
                                int VAR_25)
{
    int VAR_26;
    switch (VAR_24->type) {
    default:
        VAR_26 = FUNC_0(VAR_8);
        break;
    }

    return VAR_26;
}
