
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* system; char* game; char* song; char* author; char* copyright; char* comment; char* dumper; } ;
typedef TYPE_1__ gme_info_t ;
typedef int buf ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {int music_emu; TYPE_1__* info; } ;
typedef TYPE_2__ GMEContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    GMEContext *VAR_1 = VAR_0->priv_data;
    gme_info_t *VAR_2 = VAR_1->info;
    char VAR_3[30];

    FUNC_0(VAR_0, "system", VAR_2->system);
    FUNC_0(VAR_0, "game", VAR_2->game);
    FUNC_0(VAR_0, "song", VAR_2->song);
    FUNC_0(VAR_0, "author", VAR_2->author);
    FUNC_0(VAR_0, "copyright", VAR_2->copyright);
    FUNC_0(VAR_0, "comment", VAR_2->comment);
    FUNC_0(VAR_0, "dumper", VAR_2->dumper);

    FUNC_2(VAR_3, sizeof(VAR_3), "%d", (int)FUNC_1(VAR_1->music_emu));
    FUNC_0(VAR_0, "tracks", VAR_3);

    return 0;
}
