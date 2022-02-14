
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_error_t ;
typedef int hb_title_t ;
struct TYPE_3__ {int list_title; int feature; } ;
typedef TYPE_1__ hb_title_set_t ;
typedef int hb_dict_t ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,int ,char*,char*,int ,char*) ;

hb_dict_t* FUNC_7( const hb_title_set_t * VAR_0 )
{
    hb_dict_t *VAR_1;
    json_error_t VAR_2;
    int VAR_3;

    VAR_1 = FUNC_6(&VAR_2, 0,
        "{s:o, s:[]}",
        "MainFeature", FUNC_5(VAR_0->feature),
        "TitleList");

    hb_dict_t *VAR_4 = FUNC_0(VAR_1, "TitleList");
    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0->list_title); VAR_3++)
    {
        hb_title_t *VAR_5 = FUNC_2(VAR_0->list_title, VAR_3);
        hb_dict_t *VAR_6 = FUNC_3(VAR_5);
        FUNC_4(VAR_4, VAR_6);
    }

    return VAR_1;
}
