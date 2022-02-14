
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int playlist; int duration; } ;
struct TYPE_10__ {int playlist; scalar_t__ angle; int chapter; int bd; } ;
typedef TYPE_2__ BlurayContext ;
typedef TYPE_3__ BLURAY_TITLE_INFO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (char const*,int ,char const**) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_6, const char *VAR_7, int VAR_8)
{
    BlurayContext *VAR_9 = VAR_6->priv_data;
    int VAR_10;
    const char *VAR_11 = VAR_7;

    FUNC_2(VAR_7, VAR_2, &VAR_11);

    VAR_9->bd = FUNC_6(VAR_11, ((void*)0));
    if (!VAR_9->bd) {
        FUNC_1(VAR_6, VAR_0, "bd_open() failed\n");
        return FUNC_0(VAR_3);
    }


    if (FUNC_10(VAR_6) < 0) {
        return FUNC_0(VAR_3);
    }
    VAR_10 = FUNC_5(VAR_9->bd, VAR_5, VAR_4);
    FUNC_1(VAR_6, VAR_1, "%d usable playlists:\n", VAR_10);
    if (VAR_10 < 1) {
        return FUNC_0(VAR_3);
    }


    if (VAR_9->playlist < 0) {
        uint64_t VAR_12 = 0;
        int VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
            BLURAY_TITLE_INFO *VAR_14 = FUNC_4(VAR_9->bd, VAR_13, 0);

            FUNC_1(VAR_6, VAR_1, "playlist %05d.mpls (%d:%02d:%02d)\n",
                   VAR_14->playlist,
                   ((int)(VAR_14->duration / 90000) / 3600),
                   ((int)(VAR_14->duration / 90000) % 3600) / 60,
                   ((int)(VAR_14->duration / 90000) % 60));

            if (VAR_14->duration > VAR_12) {
                VAR_9->playlist = VAR_14->playlist;
                VAR_12 = VAR_14->duration;
            }

            FUNC_3(VAR_14);
        }
        FUNC_1(VAR_6, VAR_1, "selected %05d.mpls\n", VAR_9->playlist);
    }


    if (FUNC_9(VAR_9->bd, VAR_9->playlist) <= 0) {
        FUNC_1(VAR_6, VAR_0, "bd_select_playlist(%05d.mpls) failed\n", VAR_9->playlist);
        return FUNC_0(VAR_3);
    }


    if (VAR_9->angle >= 0) {
        FUNC_8(VAR_9->bd, VAR_9->angle);
    }


    if (VAR_9->chapter > 1) {
        FUNC_7(VAR_9->bd, VAR_9->chapter - 1);
    }

    return 0;
}
