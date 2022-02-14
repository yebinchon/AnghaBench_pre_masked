
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
typedef int hb_value_t ;
typedef int hb_list_t ;
struct TYPE_7__ {int input; int * avfilters; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_8__ {int id; int aliased; int settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

void FUNC_7( hb_list_t * VAR_0)
{
    hb_filter_object_t * VAR_1 = ((void*)0);
    hb_value_t * VAR_2 = ((void*)0);
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++)
    {
        hb_filter_object_t * VAR_4 = FUNC_4(VAR_0, VAR_3);
        hb_filter_private_t * VAR_5 = VAR_4->private_data;
        switch (VAR_4->id)
        {
            case 133:
            case 130:
            case 131:
            case 132:
            case 129:
            case 128:
            {
                VAR_2 = VAR_5->avfilters;
            } break;
            default:
            {
                VAR_2 = ((void*)0);
                VAR_1 = ((void*)0);
            } break;
        }
        if (VAR_2 != ((void*)0))
        {
            if (VAR_1 == ((void*)0))
            {
                hb_filter_private_t * VAR_6 = ((void*)0);
                VAR_1 = FUNC_1(133);
                VAR_1->aliased = 1;

                VAR_6 = FUNC_0(1, sizeof(struct hb_filter_private_s));
                VAR_1->private_data = VAR_6;
                VAR_6->input = VAR_5->input;

                VAR_1->settings = FUNC_6();
                FUNC_3(VAR_0, VAR_3, VAR_1);
                VAR_3++;
            }

            FUNC_5(VAR_1->settings, VAR_2);
        }
    }
}
