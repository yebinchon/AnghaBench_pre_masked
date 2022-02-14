
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct playlist {int dummy; } ;
struct TYPE_4__ {int n_playlists; struct playlist** playlists; } ;
typedef TYPE_1__ HLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int *) ;

__attribute__((used)) static int FUNC_2(HLSContext *VAR_1, struct playlist **VAR_2, const char *VAR_3)
{
    if (*VAR_2)
        return 0;
    if (!FUNC_1(VAR_1, ((void*)0), VAR_3, ((void*)0)))
        return FUNC_0(VAR_0);
    *VAR_2 = VAR_1->playlists[VAR_1->n_playlists - 1];
    return 0;
}
