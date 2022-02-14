
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; } ;
struct TYPE_10__ {TYPE_1__ geometry; } ;
struct TYPE_11__ {TYPE_2__ input; int output; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_12__ {int * settings; TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_filter_object_t ;
struct TYPE_13__ {int human_readable_desc; int output; } ;
typedef TYPE_5__ hb_filter_info_t ;
typedef int hb_dict_t ;


 TYPE_5__* FUNC_0 (int,int) ;
 int FUNC_1 (int*,int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static hb_filter_info_t * FUNC_4( hb_filter_object_t * VAR_0 )
{
    hb_filter_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }

    hb_filter_info_t * VAR_2;
    hb_dict_t * VAR_3 = VAR_0->settings;
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_2 = FUNC_0(1, sizeof(hb_filter_info_t));
    if (VAR_2 == ((void*)0))
    {
        FUNC_2("crop_scale_info: allocation failure");
        return ((void*)0);
    }
    VAR_2->output = VAR_1->output;

    FUNC_1(&VAR_6, VAR_3, "crop-top");
    FUNC_1(&VAR_7, VAR_3, "crop-bottom");
    FUNC_1(&VAR_8, VAR_3, "crop-left");
    FUNC_1(&VAR_9, VAR_3, "crop-right");
    FUNC_1(&VAR_4, VAR_3, "width");
    FUNC_1(&VAR_5, VAR_3, "height");

    int VAR_10 = VAR_1->input.geometry.width - (VAR_8 + VAR_9);
    int VAR_11 = VAR_1->input.geometry.height - (VAR_6 + VAR_7);

    VAR_2->human_readable_desc = FUNC_3(
        "source: %d * %d, crop (%d/%d/%d/%d): %d * %d, scale: %d * %d",
        VAR_1->input.geometry.width, VAR_1->input.geometry.height,
        VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_11, VAR_4, VAR_5);

    return VAR_2;
}
