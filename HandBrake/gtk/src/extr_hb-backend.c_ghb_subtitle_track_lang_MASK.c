
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_7__ {char const* iso639_2; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int gint ;
typedef char gchar ;
typedef int GhbValue ;


 int FUNC_0 (int *,char*) ;
 char const* FUNC_1 (int *,TYPE_1__ const*,int ) ;
 TYPE_1__* FUNC_2 (int,int*) ;
 TYPE_2__* FUNC_3 (int ,int) ;

const gchar*
FUNC_4(GhbValue *VAR_0, gint VAR_1)
{
    gint VAR_2, VAR_3;
    const hb_title_t * VAR_4;

    VAR_2 = FUNC_0(VAR_0, "title");
    VAR_4 = FUNC_2(VAR_2, &VAR_3);
    if (VAR_4 == ((void*)0))
        goto fail;
    if (VAR_1 == -1)
        return FUNC_1(VAR_0, VAR_4, 0);
    if (VAR_1 < 0)
        goto fail;

    hb_subtitle_t * VAR_5;
    VAR_5 = FUNC_3( VAR_4->list_subtitle, VAR_1);
    if (VAR_5 != ((void*)0))
        return VAR_5->iso639_2;

fail:
    return "und";
}
