
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct TYPE_5__ {int nb_symbols; int* simple_symbols; TYPE_1__ vlc; scalar_t__ simple; } ;
typedef TYPE_2__ HuffReader ;
typedef int GetBitContext ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(HuffReader *VAR_0, GetBitContext *VAR_1)
{
    if (VAR_0->simple) {
        if (VAR_0->nb_symbols == 1)
            return VAR_0->simple_symbols[0];
        else
            return VAR_0->simple_symbols[FUNC_0(VAR_1)];
    } else
        return FUNC_1(VAR_1, VAR_0->vlc.table);
}
