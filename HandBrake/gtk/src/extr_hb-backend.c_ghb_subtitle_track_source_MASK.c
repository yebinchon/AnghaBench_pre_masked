
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {int source; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int gint ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int,int*) ;
 TYPE_2__* FUNC_2 (int ,int) ;

gint
FUNC_3(GhbValue *VAR_2, gint VAR_3)
{
    gint VAR_4, VAR_5;
    const hb_title_t *VAR_6;

    if (VAR_3 == -2)
        return VAR_0;
    if (VAR_3 < 0)
        return VAR_1;
    VAR_4 = FUNC_0(VAR_2, "title");
    VAR_6 = FUNC_1(VAR_4, &VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_1;

    hb_subtitle_t * VAR_7;
    VAR_7 = FUNC_2( VAR_6->list_subtitle, VAR_3);
    if (VAR_7 != ((void*)0))
        return VAR_7->source;
    else
        return VAR_1;
}
