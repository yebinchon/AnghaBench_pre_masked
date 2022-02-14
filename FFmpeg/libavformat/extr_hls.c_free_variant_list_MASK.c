
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct variant {struct variant** playlists; } ;
struct TYPE_3__ {int n_variants; struct variant** variants; } ;
typedef TYPE_1__ HLSContext ;


 int FUNC_0 (struct variant*) ;
 int FUNC_1 (struct variant***) ;

__attribute__((used)) static void FUNC_2(HLSContext *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->n_variants; VAR_1++) {
        struct variant *VAR_2 = VAR_0->variants[VAR_1];
        FUNC_1(&VAR_2->playlists);
        FUNC_0(VAR_2);
    }
    FUNC_1(&VAR_0->variants);
    VAR_0->n_variants = 0;
}
