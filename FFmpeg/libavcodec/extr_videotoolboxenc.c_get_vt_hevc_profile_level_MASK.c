
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int profile; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_8__ {int * kVTProfileLevel_HEVC_Main10_AutoLevel; int * kVTProfileLevel_HEVC_Main_AutoLevel; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int * CFStringRef ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;



 int FUNC_0 (TYPE_2__*,int ,char*) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(AVCodecContext *VAR_2,
                                      CFStringRef *VAR_3)
{
    VTEncContext *VAR_4 = VAR_2->priv_data;
    int64_t VAR_5 = VAR_4->profile;

    *VAR_3 = ((void*)0);

    switch (VAR_5) {
        case 130:
            return 1;
        case 129:
            *VAR_3 =
                VAR_1.kVTProfileLevel_HEVC_Main_AutoLevel;
            break;
        case 128:
            *VAR_3 =
                VAR_1.kVTProfileLevel_HEVC_Main10_AutoLevel;
            break;
    }

    if (!*VAR_3) {
        FUNC_0(VAR_2, VAR_0, "Invalid Profile/Level.\n");
        return 0;
    }

    return 1;
}
