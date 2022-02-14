
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int list_audio; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_6__ {char* iso639_2; } ;
struct TYPE_8__ {TYPE_1__ lang; } ;
typedef TYPE_3__ hb_audio_config_t ;
typedef int gint ;
typedef int gchar ;


 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,char*) ;

gint
FUNC_3(const hb_title_t *VAR_0, const gchar *VAR_1, int VAR_2)
{
    hb_audio_config_t * VAR_3;
    gint VAR_4, VAR_5 = 0;

    if (VAR_0 != ((void*)0))
    {
        VAR_5 = FUNC_1(VAR_0->list_audio);
    }

    for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4++)
    {
        VAR_3 = FUNC_0(VAR_0->list_audio, VAR_4);
        if (!FUNC_2(VAR_1, VAR_3->lang.iso639_2) || !FUNC_2(VAR_1, "und"))
        {
            return VAR_4;
        }
    }
    return -1;
}
