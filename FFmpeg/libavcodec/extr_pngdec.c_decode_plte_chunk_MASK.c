
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* palette; int gb; int hdr_state; } ;
typedef TYPE_1__ PNGDecContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2, PNGDecContext *VAR_3,
                             uint32_t VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if ((VAR_4 % 3) != 0 || VAR_4 > 256 * 3)
        return VAR_0;

    VAR_5 = VAR_4 / 3;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        VAR_7 = FUNC_0(&VAR_3->gb);
        VAR_8 = FUNC_0(&VAR_3->gb);
        VAR_9 = FUNC_0(&VAR_3->gb);
        VAR_3->palette[VAR_6] = (0xFFU << 24) | (VAR_7 << 16) | (VAR_8 << 8) | VAR_9;
    }
    for (; VAR_6 < 256; VAR_6++)
        VAR_3->palette[VAR_6] = (0xFFU << 24);
    VAR_3->hdr_state |= VAR_1;
    FUNC_1(&VAR_3->gb, 4);

    return 0;
}
