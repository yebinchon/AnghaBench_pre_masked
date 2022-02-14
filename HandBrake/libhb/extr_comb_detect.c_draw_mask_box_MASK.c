
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int mask_box_x; int mask_box_y; int block_width; int block_height; int mode; TYPE_4__* mask; TYPE_2__* mask_filtered; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {int* data; int stride; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int* data; int stride; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( hb_filter_private_t * VAR_1 )
{
    int VAR_2 = VAR_1->mask_box_x;
    int VAR_3 = VAR_1->mask_box_y;
    int VAR_4 = VAR_1->block_width;
    int VAR_5 = VAR_1->block_height;
    int VAR_6;
    uint8_t * VAR_7;

    if (VAR_1->mode & VAR_0)
    {
        VAR_7 = VAR_1->mask_filtered->plane[0].data;
        VAR_6 = VAR_1->mask_filtered->plane[0].stride;
    }
    else
    {
        VAR_7 = VAR_1->mask->plane[0].data;
        VAR_6 = VAR_1->mask->plane[0].stride;
    }


    int VAR_8, VAR_9;
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        VAR_7[ VAR_3 * VAR_6 + VAR_2 + VAR_8] = 128;
        VAR_7[(VAR_3 + VAR_5) * VAR_6 + VAR_2 + VAR_8] = 128;
    }

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    {
        VAR_7[VAR_6 * (VAR_3 + VAR_9) + VAR_2 ] = 128;
        VAR_7[VAR_6 * (VAR_3 + VAR_9) + VAR_2 + VAR_4] = 128;
    }
}
