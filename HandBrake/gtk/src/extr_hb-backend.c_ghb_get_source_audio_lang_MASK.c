
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
typedef scalar_t__ gint ;
typedef char gchar ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

const gchar*
FUNC_3(const hb_title_t *VAR_0, gint VAR_1)
{
    hb_audio_config_t * VAR_2;
    const gchar *VAR_3 = "und";

    FUNC_0("ghb_lookup_1st_audio_lang ()\n");
    if (VAR_0 == ((void*)0))
        return VAR_3;
    if (FUNC_2( VAR_0->list_audio ) <= VAR_1)
        return VAR_3;

    VAR_2 = FUNC_1(VAR_0->list_audio, VAR_1);
    if (VAR_2 == ((void*)0))
        return VAR_3;

    VAR_3 = VAR_2->lang.iso639_2;
    return VAR_3;
}
