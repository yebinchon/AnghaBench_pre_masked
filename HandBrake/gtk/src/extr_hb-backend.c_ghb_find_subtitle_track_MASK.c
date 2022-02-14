
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_5__ {char* iso639_2; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int gint ;
typedef int gchar ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int const*,char*) ;

gint
FUNC_3(const hb_title_t * VAR_0, const gchar * VAR_1, int VAR_2)
{
    hb_subtitle_t * VAR_3;
    gint VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_0->list_subtitle);


    for (VAR_5 = VAR_2; VAR_5 < VAR_4; VAR_5++)
    {
        VAR_3 = (hb_subtitle_t*)FUNC_1( VAR_0->list_subtitle, VAR_5 );
        if (FUNC_2(VAR_1, VAR_3->iso639_2) == 0 ||
            FUNC_2(VAR_1, "und") == 0)
        {
            return VAR_5;
        }
    }
    return -1;
}
