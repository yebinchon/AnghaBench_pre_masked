
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_6__ {int strength; int kernel; } ;
typedef TYPE_1__ lapsharp_plane_context_t ;
struct TYPE_7__ {void* output; TYPE_1__* plane_ctx; void* input; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_8__ {int * settings; TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
typedef void* hb_filter_init_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int *,char*) ;
 int FUNC_3 (char**,int *,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(hb_filter_object_t *VAR_5,
                            hb_filter_init_t *VAR_6)
{
    VAR_5->private_data = FUNC_0(sizeof(struct hb_filter_private_s), 1);
    hb_filter_private_t * VAR_7 = VAR_5->private_data;

    char *VAR_8[3];

    VAR_7->input = *VAR_6;


    for (int VAR_9 = 0; VAR_9 < 3; VAR_9++)
    {
        VAR_7->plane_ctx[VAR_9].strength = -1;
        VAR_7->plane_ctx[VAR_9].kernel = -1;
        VAR_8[VAR_9] = ((void*)0);
    }


    if (VAR_5->settings != ((void*)0))
    {
        hb_dict_t * VAR_10 = VAR_5->settings;
        FUNC_2(&VAR_7->plane_ctx[0].strength, VAR_10, "y-strength");
        FUNC_3(&VAR_8[0], VAR_10, "y-kernel");

        FUNC_2(&VAR_7->plane_ctx[1].strength, VAR_10, "cb-strength");
        FUNC_3(&VAR_8[1], VAR_10, "cb-kernel");

        FUNC_2(&VAR_7->plane_ctx[2].strength, VAR_10, "cr-strength");
        FUNC_3(&VAR_8[2], VAR_10, "cr-kernel");
    }


    for (int VAR_11 = 0; VAR_11 < 3; VAR_11++)
    {
        lapsharp_plane_context_t * VAR_12 = &VAR_7->plane_ctx[VAR_11];

        VAR_12->kernel = -1;

        if (VAR_8[VAR_11] == ((void*)0))
        {
            continue;
        }

        if (!FUNC_4(VAR_8[VAR_11], "lap"))
        {
            VAR_12->kernel = 0;
        }
        else if (!FUNC_4(VAR_8[VAR_11], "isolap"))
        {
            VAR_12->kernel = 1;
        }
        else if (!FUNC_4(VAR_8[VAR_11], "log"))
        {
            VAR_12->kernel = 2;
        }
        else if (!FUNC_4(VAR_8[VAR_11], "isolog"))
        {
            VAR_12->kernel = 3;
        }

        FUNC_1(VAR_8[VAR_11]);
    }



    for (int VAR_13 = 1; VAR_13 < 3; VAR_13++)
    {
        lapsharp_plane_context_t * VAR_14 = &VAR_7->plane_ctx[VAR_13 - 1];
        lapsharp_plane_context_t * VAR_15 = &VAR_7->plane_ctx[VAR_13];

        if (VAR_15->strength == -1) VAR_15->strength = VAR_14->strength;
        if (VAR_15->kernel == -1) VAR_15->kernel = VAR_14->kernel;
    }

    for (int VAR_16 = 0; VAR_16 < 3; VAR_16++)
    {
        lapsharp_plane_context_t * VAR_17 = &VAR_7->plane_ctx[VAR_16];


        if (VAR_17->strength == -1)
        {
            VAR_17->strength = VAR_16 ? VAR_3 :
                                VAR_4;
        }
        if (VAR_17->kernel == -1)
        {
            VAR_17->kernel = VAR_16 ? VAR_1 :
                                VAR_2;
        }


        if (VAR_17->strength < 0) VAR_17->strength = 0;
        if (VAR_17->strength > 1.5) VAR_17->strength = 1.5;
        if ((VAR_17->kernel < 0) || (VAR_17->kernel >= VAR_0))
        {
            VAR_17->kernel = VAR_16 ? VAR_1 : VAR_2;
        }
    }
    VAR_7->output = *VAR_6;

    return 0;
}
