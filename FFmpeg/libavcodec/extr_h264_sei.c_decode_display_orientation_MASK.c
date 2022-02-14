
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; int anticlockwise_rotation; void* vflip; void* hflip; } ;
typedef TYPE_1__ H264SEIDisplayOrientation ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(H264SEIDisplayOrientation *VAR_0,
                                      GetBitContext *VAR_1)
{
    VAR_0->present = !FUNC_1(VAR_1);

    if (VAR_0->present) {
        VAR_0->hflip = FUNC_1(VAR_1);
        VAR_0->vflip = FUNC_1(VAR_1);

        VAR_0->anticlockwise_rotation = FUNC_0(VAR_1, 16);
        FUNC_2(VAR_1);
        FUNC_3(VAR_1);
    }

    return 0;
}
