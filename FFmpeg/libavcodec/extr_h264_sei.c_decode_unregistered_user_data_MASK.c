
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int x264_build; } ;
typedef TYPE_1__ H264SEIUnregistered ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__*,char*,int*) ;
 int FUNC_5 (scalar_t__*,char*,int) ;

__attribute__((used)) static int FUNC_6(H264SEIUnregistered *VAR_3, GetBitContext *VAR_4,
                                         void *VAR_5, int VAR_6)
{
    uint8_t *VAR_7;
    int VAR_8, VAR_9, VAR_10;

    if (VAR_6 < 16 || VAR_6 >= VAR_2 - 16)
        return VAR_0;

    VAR_7 = FUNC_2(16 + VAR_6 + 1);
    if (!VAR_7)
        return FUNC_0(VAR_1);

    for (VAR_10 = 0; VAR_10 < VAR_6 + 16; VAR_10++)
        VAR_7[VAR_10] = FUNC_3(VAR_4, 8);

    VAR_7[VAR_10] = 0;
    VAR_8 = FUNC_4(VAR_7 + 16, "x264 - core %d", &VAR_9);
    if (VAR_8 == 1 && VAR_9 > 0)
        VAR_3->x264_build = VAR_9;
    if (VAR_8 == 1 && VAR_9 == 1 && !FUNC_5(VAR_7+16, "x264 - core 0000", 16))
        VAR_3->x264_build = 67;

    FUNC_1(VAR_7);
    return 0;
}
