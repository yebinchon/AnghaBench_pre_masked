
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int frame_size; int ** frame; int gb; } ;
typedef TYPE_1__ PAFVideoDecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(PAFVideoDecContext *VAR_0,
                             const uint8_t **VAR_1,
                             const uint8_t **VAR_2)
{
    int VAR_3 = FUNC_0(&VAR_0->gb);
    int VAR_4 = VAR_3 >> 14;
    int VAR_5 = (VAR_3 & 0x7F);
    int VAR_6 = ((VAR_3 >> 7) & 0x7F);

    *VAR_1 = VAR_0->frame[VAR_4] + VAR_5 * 2 + VAR_6 * 2 * VAR_0->width;
    *VAR_2 = VAR_0->frame[VAR_4] + VAR_0->frame_size;
}
