
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_12__ {TYPE_5__* plane_ctx; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_13__ {int * settings; TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_11__ {int width; } ;
struct TYPE_14__ {TYPE_1__ geometry; } ;
typedef TYPE_4__ hb_filter_init_t ;
typedef int hb_dict_t ;
struct TYPE_15__ {int strength; int size; double amount; int steps; int scalebits; int halfscale; int width; } ;
typedef TYPE_5__ chroma_smooth_plane_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int*,int *,char*) ;
 int FUNC_4 (int*,int *,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(hb_filter_object_t *VAR_4,
                              hb_filter_init_t *VAR_5)
{
    VAR_4->private_data = FUNC_0(sizeof(struct hb_filter_private_s), 1);
    if (VAR_4->private_data == ((void*)0))
    {
        FUNC_5("Chroma Smooth calloc failed");
        return -1;
    }
    hb_filter_private_t * VAR_6 = VAR_4->private_data;


    for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
    {
        VAR_6->plane_ctx[VAR_7].strength = -1;
        VAR_6->plane_ctx[VAR_7].size = -1;
    }


    if (VAR_4->settings != ((void*)0))
    {
        hb_dict_t * VAR_8 = VAR_4->settings;
        FUNC_3(&VAR_6->plane_ctx[1].strength, VAR_8, "cb-strength");
        FUNC_4(&VAR_6->plane_ctx[1].size, VAR_8, "cb-size");

        FUNC_3(&VAR_6->plane_ctx[2].strength, VAR_8, "cr-strength");
        FUNC_4(&VAR_6->plane_ctx[2].size, VAR_8, "cr-size");
    }



    for (int VAR_9 = 2; VAR_9 < 3; VAR_9++)
    {
        chroma_smooth_plane_context_t * VAR_10 = &VAR_6->plane_ctx[VAR_9 - 1];
        chroma_smooth_plane_context_t * VAR_11 = &VAR_6->plane_ctx[VAR_9];

        if (VAR_11->strength == -1) VAR_11->strength = VAR_10->strength;
        if (VAR_11->size == -1) VAR_11->size = VAR_10->size;
    }

    for (int VAR_12 = 0; VAR_12 < 3; VAR_12++)
    {
        chroma_smooth_plane_context_t * VAR_13 = &VAR_6->plane_ctx[VAR_12];

        VAR_13->width = VAR_5->geometry.width;


        if (VAR_13->strength == -1)
        {
            VAR_13->strength = VAR_3;
        }
        if (VAR_13->size == -1)
        {
            VAR_13->size = VAR_0;
        }


        if (VAR_13->strength < 0) VAR_13->strength = 0;
        if (VAR_13->strength > 3) VAR_13->strength = 3;
        if (VAR_13->size % 2 == 0) VAR_13->size--;
        if (VAR_13->size < VAR_2) VAR_13->size = VAR_2;
        if (VAR_13->size > VAR_1) VAR_13->size = VAR_1;

        if (VAR_12)
        {

            VAR_13->amount = VAR_13->strength * 65536.0;
            VAR_13->steps = VAR_13->size / 2;
            VAR_13->scalebits = VAR_13->steps * 4;
            VAR_13->halfscale = 1 << (VAR_13->scalebits - 1);
        }
        else
        {

            VAR_13->amount = 0;
            VAR_13->steps = 0;
            VAR_13->scalebits = 0;
            VAR_13->halfscale = 0;
        }
    }

    if (FUNC_2(VAR_4, 1) < 0)
    {
        FUNC_1(VAR_4);
        return -1;
    }

    return 0;
}
