
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct Tracks {int nb_tracks; struct Track** tracks; } ;
struct Track {scalar_t__ sidx_start; int sidx_length; } ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_7__ {int eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,char const*,int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct Tracks *VAR_2, int VAR_3,
                     const char *VAR_4)
{
    int VAR_5 = 0;
    AVIOContext *VAR_6 = ((void*)0);
    int VAR_7;

    if ((VAR_5 = FUNC_2(&VAR_6, VAR_4, VAR_0, ((void*)0), ((void*)0))) < 0)
        goto fail;

    while (!VAR_6->eof_reached) {
        int64_t VAR_8 = FUNC_5(VAR_6);
        int32_t VAR_9, VAR_10;

        VAR_9 = FUNC_3(VAR_6);
        VAR_10 = FUNC_3(VAR_6);
        if (VAR_9 < 8)
            break;
        if (VAR_10 == FUNC_0('s', 'i', 'd', 'x')) {
            for (VAR_7 = VAR_3; VAR_7 < VAR_2->nb_tracks; VAR_7++) {
                struct Track *VAR_11 = VAR_2->tracks[VAR_7];
                if (!VAR_11->sidx_start) {
                    VAR_11->sidx_start = VAR_8;
                    VAR_11->sidx_length = VAR_9;
                } else if (VAR_8 == VAR_11->sidx_start + VAR_11->sidx_length) {
                    VAR_11->sidx_length = VAR_8 + VAR_9 - VAR_11->sidx_start;
                }
            }
        }
        if (FUNC_4(VAR_6, VAR_8 + VAR_9, VAR_1) != VAR_8 + VAR_9)
            break;
    }

fail:
    if (VAR_6)
        FUNC_1(VAR_6);
    return VAR_5;
}
