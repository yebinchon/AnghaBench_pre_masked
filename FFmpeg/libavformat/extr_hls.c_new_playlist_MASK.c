
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist {int is_id3_timestamped; void* id3_mpegts_timestamp; void* seek_timestamp; int url; int pkt; } ;
struct TYPE_3__ {int n_playlists; int playlists; } ;
typedef TYPE_1__ HLSContext ;


 void* VAR_0 ;
 struct playlist* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,struct playlist*) ;
 int FUNC_2 (int ,int,char const*,char const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct playlist *FUNC_4(HLSContext *VAR_1, const char *VAR_2,
                                     const char *VAR_3)
{
    struct playlist *VAR_4 = FUNC_0(sizeof(struct playlist));
    if (!VAR_4)
        return ((void*)0);
    FUNC_3(&VAR_4->pkt);
    FUNC_2(VAR_4->url, sizeof(VAR_4->url), VAR_3, VAR_2);
    VAR_4->seek_timestamp = VAR_0;

    VAR_4->is_id3_timestamped = -1;
    VAR_4->id3_mpegts_timestamp = VAR_0;

    FUNC_1(&VAR_1->playlists, &VAR_1->n_playlists, VAR_4);
    return VAR_4;
}
