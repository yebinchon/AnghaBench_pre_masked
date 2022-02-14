
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct variant {int n_playlists; int bandwidth; struct playlist** playlists; } ;
struct playlist {int dummy; } ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int metadata; int index; } ;
struct TYPE_7__ {int n_variants; struct variant** variants; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, struct playlist *VAR_1, AVStream *VAR_2)
{
    HLSContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5;
    int VAR_6 = -1;

    for (VAR_4 = 0; VAR_4 < VAR_3->n_variants; VAR_4++) {
        struct variant *VAR_7 = VAR_3->variants[VAR_4];

        for (VAR_5 = 0; VAR_5 < VAR_7->n_playlists; VAR_5++) {
            if (VAR_7->playlists[VAR_5] != VAR_1)
                continue;

            FUNC_1(VAR_0, VAR_4, VAR_2->index);

            if (VAR_6 < 0)
                VAR_6 = VAR_7->bandwidth;
            else if (VAR_6 != VAR_7->bandwidth)
                VAR_6 = -1;
        }
    }

    if (VAR_6 >= 0)
        FUNC_0(&VAR_2->metadata, "variant_bitrate", VAR_6, 0);
}
