
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_3__ {scalar_t__ flags; int type; } ;
typedef TYPE_1__ AVStereo3D ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;



 int FUNC_0 (int *,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVIOContext *VAR_2, AVStereo3D *VAR_3)
{
    int8_t VAR_4;

    if (VAR_3->flags != 0) {
        FUNC_0(VAR_1, VAR_0, "Unsupported stereo_3d flags %x. st3d not written.\n", VAR_3->flags);
        return 0;
    }

    switch (VAR_3->type) {
    case 130:
        VAR_4 = 0;
        break;
    case 128:
        VAR_4 = 1;
        break;
    case 129:
        VAR_4 = 2;
        break;
    default:
        FUNC_0(VAR_1, VAR_0, "Unsupported stereo_3d type %s. st3d not written.\n", FUNC_1(VAR_3->type));
        return 0;
    }
    FUNC_3(VAR_2, 13);
    FUNC_4(VAR_2, "st3d");
    FUNC_3(VAR_2, 0);
    FUNC_2(VAR_2, VAR_4);
    return 13;
}
