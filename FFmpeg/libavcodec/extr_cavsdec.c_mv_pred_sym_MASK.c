
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum cavs_block { ____Placeholder_cavs_block } cavs_block ;
struct TYPE_6__ {int x; int y; int dist; scalar_t__ ref; } ;
typedef TYPE_1__ cavs_vector ;
struct TYPE_7__ {int sym_factor; int * dist; } ;
typedef TYPE_2__ AVSContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(AVSContext *VAR_1, cavs_vector *VAR_2,
                               enum cavs_block VAR_3)
{
    cavs_vector *VAR_4 = VAR_2 + VAR_0;


    VAR_4->x = -((VAR_2->x * VAR_1->sym_factor + 256) >> 9);
    VAR_4->y = -((VAR_2->y * VAR_1->sym_factor + 256) >> 9);
    VAR_4->ref = 0;
    VAR_4->dist = VAR_1->dist[0];
    FUNC_0(VAR_4, VAR_3);
}
