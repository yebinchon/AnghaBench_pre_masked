
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* priv_data; } ;
struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_8__ {int count; TYPE_1__* object; } ;
struct TYPE_10__ {TYPE_3__ palettes; TYPE_2__ objects; } ;
struct TYPE_7__ {scalar_t__ rle_remaining_len; scalar_t__ rle_buffer_size; int rle; } ;
typedef TYPE_4__ PGSSubContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    PGSSubContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->objects.count; VAR_2++) {
        FUNC_0(&VAR_1->objects.object[VAR_2].rle);
        VAR_1->objects.object[VAR_2].rle_buffer_size = 0;
        VAR_1->objects.object[VAR_2].rle_remaining_len = 0;
    }
    VAR_1->objects.count = 0;
    VAR_1->palettes.count = 0;
}
