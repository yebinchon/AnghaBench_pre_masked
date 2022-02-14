
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {char* (* nvEncGetLastErrorString ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_3__ nvenc_funcs; } ;
struct TYPE_8__ {scalar_t__ nvencoder; TYPE_1__ nvenc_dload_funcs; } ;
typedef TYPE_2__ NvencContext ;
typedef TYPE_3__ NV_ENCODE_API_FUNCTION_LIST ;
typedef int NVENCSTATUS ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*,char const*,char const*,int ,char const*) ;
 int FUNC_1 (int ,char const**) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1, NVENCSTATUS VAR_2,
                             const char *VAR_3)
{
    const char *VAR_4;
    const char *VAR_5 = "(no details)";
    int VAR_6 = FUNC_1(VAR_2, &VAR_4);
    FUNC_0(VAR_1, VAR_0, "%s: %s (%d): %s\n", VAR_3, VAR_4, VAR_2, VAR_5);

    return VAR_6;
}
