
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_4__ {scalar_t__ used; } ;
typedef TYPE_1__ aofrwblock ;
struct TYPE_5__ {int aof_rewrite_buf_blocks; } ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__ VAR_0 ;

unsigned long FUNC_3(void) {
    listNode *VAR_1;
    listIter VAR_2;
    unsigned long VAR_3 = 0;

    FUNC_2(VAR_0.aof_rewrite_buf_blocks,&VAR_2);
    while((VAR_1 = FUNC_0(&VAR_2))) {
        aofrwblock *VAR_4 = FUNC_1(VAR_1);
        VAR_3 += VAR_4->used;
    }
    return VAR_3;
}
