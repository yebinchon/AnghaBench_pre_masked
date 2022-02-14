
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_5__ {void* output; int * avfilters; void* input; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {int * settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef void* hb_filter_init_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int*,int *,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(hb_filter_object_t * VAR_4,
                            hb_filter_init_t * VAR_5)
{
    hb_filter_private_t * VAR_6 = ((void*)0);

    VAR_6 = FUNC_0(1, sizeof(struct hb_filter_private_s));
    VAR_4->private_data = VAR_6;
    if (VAR_6 == ((void*)0))
    {
        return 1;
    }
    VAR_6->input = *VAR_5;

    hb_dict_t * VAR_7 = VAR_4->settings;

    int VAR_8 = 3, VAR_9 = -1;

    FUNC_1(&VAR_8, VAR_7, "mode");
    FUNC_1(&VAR_9, VAR_7, "parity");

    if (!(VAR_8 & VAR_2))
    {
        return 0;
    }

    hb_dict_t * VAR_10 = FUNC_2();
    hb_dict_t * VAR_11 = FUNC_2();

    if (VAR_8 & VAR_1)
    {
        if (VAR_8 & VAR_3)
        {
            FUNC_3(VAR_11, "mode", FUNC_4("send_field"));
        }
        else
        {
            FUNC_3(VAR_11, "mode",
                        FUNC_4("send_field_nospatial"));
        }
    }
    else
    {
        if (VAR_8 & VAR_3)
        {
            FUNC_3(VAR_11, "mode", FUNC_4("send_frame"));
        }
        else
        {
            FUNC_3(VAR_11, "mode",
                        FUNC_4("send_frame_nospatial"));
        }
    }

    if (VAR_8 & VAR_0)
    {
        FUNC_3(VAR_11, "deint", FUNC_4("interlaced"));
    }
    if (VAR_9 == 0)
    {
        FUNC_3(VAR_11, "parity", FUNC_4("tff"));
    }
    else if (VAR_9 == 1)
    {
        FUNC_3(VAR_11, "parity", FUNC_4("bff"));
    }
    FUNC_3(VAR_10, "yadif", VAR_11);
    VAR_6->avfilters = VAR_10;

    VAR_6->output = *VAR_5;

    return 0;
}
