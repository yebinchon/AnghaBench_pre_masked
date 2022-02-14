
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; int max_depth; TYPE_1__* vlc; } ;
struct TYPE_4__ {int bits; int table; } ;
typedef int GetBitContext ;
typedef TYPE_2__ DCAVLC ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(GetBitContext *VAR_0, DCAVLC *VAR_1, int VAR_2)
{
    return FUNC_0(VAR_0, VAR_1->vlc[VAR_2].table, VAR_1->vlc[VAR_2].bits, VAR_1->max_depth) + VAR_1->offset;
}
