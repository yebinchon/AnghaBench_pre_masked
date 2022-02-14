
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* buf; TYPE_1__* sys; } ;
struct TYPE_7__ {int* mb_coordinates; } ;
struct TYPE_6__ {int height; } ;
typedef TYPE_2__ DVwork_chunk ;
typedef TYPE_3__ DVVideoContext ;



__attribute__((used)) static inline void FUNC_0(DVVideoContext *VAR_0,
                                      DVwork_chunk *VAR_1,
                                      int VAR_2, int *VAR_3, int *VAR_4)
{
    *VAR_3 = VAR_1->mb_coordinates[VAR_2] & 0xff;
    *VAR_4 = VAR_1->mb_coordinates[VAR_2] >> 8;



    if (VAR_0->sys->height == 720 && !(VAR_0->buf[1] & 0x0C))

        *VAR_4 -= (*VAR_4 > 17) ? 18 : -72;
}
