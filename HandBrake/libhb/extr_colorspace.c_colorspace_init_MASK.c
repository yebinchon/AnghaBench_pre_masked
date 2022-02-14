
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


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char**,int *,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_5(hb_filter_object_t * VAR_0, hb_filter_init_t * VAR_1)
{
    hb_filter_private_t * VAR_2 = ((void*)0);

    VAR_2 = FUNC_0(1, sizeof(struct hb_filter_private_s));
    VAR_0->private_data = VAR_2;
    if (VAR_2 == ((void*)0))
    {
        return 1;
    }
    VAR_2->input = *VAR_1;

    hb_dict_t * VAR_3 = VAR_0->settings;

    char * VAR_4 = ((void*)0), * VAR_5 = ((void*)0);
    char * VAR_6 = ((void*)0), * VAR_7 = ((void*)0), * VAR_8 = ((void*)0);

    FUNC_1(&VAR_4, VAR_3, "format");
    FUNC_1(&VAR_5, VAR_3, "range");
    FUNC_1(&VAR_6, VAR_3, "primaries");
    FUNC_1(&VAR_7, VAR_3, "transfer");
    FUNC_1(&VAR_8, VAR_3, "matrix");

    if (!(VAR_4 || VAR_5 || VAR_6 || VAR_7 || VAR_8))
    {
        return 0;
    }

    hb_dict_t * VAR_9 = FUNC_2();
    hb_dict_t * VAR_10 = FUNC_2();

    if (VAR_4)
    {
        FUNC_4(VAR_10, "format", VAR_4);
    }
    if (VAR_5)
    {
        FUNC_4(VAR_10, "range", VAR_5);
    }
    if (VAR_6)
    {
        FUNC_4(VAR_10, "primaries", VAR_6);
    }
    if (VAR_7)
    {
        FUNC_4(VAR_10, "trc", VAR_7);
    }
    if (VAR_8)
    {
        FUNC_4(VAR_10, "space", VAR_8);
    }
    FUNC_3(VAR_9, "colorspace", VAR_10);
    VAR_2->avfilters = VAR_9;

    VAR_2->output = *VAR_1;

    return 0;
}
