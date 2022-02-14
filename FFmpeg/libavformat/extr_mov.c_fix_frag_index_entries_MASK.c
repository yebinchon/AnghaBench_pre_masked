
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nb_items; } ;
struct TYPE_6__ {scalar_t__ index_entry; } ;
typedef TYPE_1__ MOVFragmentStreamInfo ;
typedef TYPE_2__ MOVFragmentIndex ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_1(MOVFragmentIndex *VAR_0, int VAR_1,
                                   int VAR_2, int VAR_3)
{
    int VAR_4;
    MOVFragmentStreamInfo * VAR_5;

    if (VAR_1 < 0)
        return;
    for (VAR_4 = VAR_1; VAR_4 < VAR_0->nb_items; VAR_4++) {
        VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2);
        if (VAR_5 && VAR_5->index_entry >= 0)
            VAR_5->index_entry += VAR_3;
    }
}
