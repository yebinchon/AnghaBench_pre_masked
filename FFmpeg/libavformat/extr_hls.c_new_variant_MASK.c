
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct variant_info {int subtitles; int video; int audio; int bandwidth; } ;
struct variant {int n_playlists; int playlists; int subtitles_group; int video_group; int audio_group; int bandwidth; } ;
struct playlist {int n_playlists; int playlists; int subtitles_group; int video_group; int audio_group; int bandwidth; } ;
struct TYPE_4__ {int n_variants; int variants; } ;
typedef TYPE_1__ HLSContext ;


 int FUNC_0 (int ) ;
 struct variant* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,struct variant*) ;
 struct variant* FUNC_3 (TYPE_1__*,char const*,char const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct variant *FUNC_5(HLSContext *VAR_0, struct variant_info *VAR_1,
                                   const char *VAR_2, const char *VAR_3)
{
    struct variant *VAR_4;
    struct playlist *VAR_5;

    VAR_5 = FUNC_3(VAR_0, VAR_2, VAR_3);
    if (!VAR_5)
        return ((void*)0);

    VAR_4 = FUNC_1(sizeof(struct variant));
    if (!VAR_4)
        return ((void*)0);

    if (VAR_1) {
        VAR_4->bandwidth = FUNC_0(VAR_1->bandwidth);
        FUNC_4(VAR_4->audio_group, VAR_1->audio);
        FUNC_4(VAR_4->video_group, VAR_1->video);
        FUNC_4(VAR_4->subtitles_group, VAR_1->subtitles);
    }

    FUNC_2(&VAR_0->variants, &VAR_0->n_variants, VAR_4);
    FUNC_2(&VAR_4->playlists, &VAR_4->n_playlists, VAR_5);
    return VAR_4;
}
