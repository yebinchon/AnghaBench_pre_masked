
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
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int *,char*) ;
 int FUNC_3 (char**,int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,double) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_9(hb_filter_object_t * VAR_0, hb_filter_init_t * VAR_1)
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

    int VAR_4 = -1, VAR_5 = 8;
    char * VAR_6 = ((void*)0);

    FUNC_3(&VAR_6, VAR_3, "strength");
    FUNC_2(&VAR_4, VAR_3, "thresh");
    FUNC_2(&VAR_5, VAR_3, "blocksize");

    hb_dict_t * VAR_7 = FUNC_4();
    hb_dict_t * VAR_8 = FUNC_4();

    if (VAR_6 != ((void*)0))
    {
        FUNC_8(VAR_8, "filter", VAR_6);
        FUNC_1(VAR_6);
    }
    FUNC_7(VAR_8, "block", VAR_5);

    if (VAR_4 > 0)
    {
        double VAR_9, VAR_10, VAR_11, VAR_12;

        VAR_9 = VAR_4 * 0.010;
        VAR_10 = VAR_11 = VAR_12 = VAR_9 / 2;
        FUNC_6(VAR_8, "alpha", VAR_9);
        FUNC_6(VAR_8, "beta", VAR_10);
        FUNC_6(VAR_8, "gamma", VAR_11);
        FUNC_6(VAR_8, "delta", VAR_12);
    }
    FUNC_5(VAR_7, "deblock", VAR_8);
    VAR_2->avfilters = VAR_7;

    VAR_2->output = *VAR_1;

    return 0;
}
