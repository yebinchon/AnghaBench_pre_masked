
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dictType ;
struct TYPE_3__ {int rehashidx; scalar_t__ iterators; void* privdata; int * type; int * ht; } ;
typedef TYPE_1__ dict ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(dict *VAR_1, dictType *VAR_2,
        void *VAR_3)
{
    FUNC_0(&VAR_1->ht[0]);
    FUNC_0(&VAR_1->ht[1]);
    VAR_1->type = VAR_2;
    VAR_1->privdata = VAR_3;
    VAR_1->rehashidx = -1;
    VAR_1->iterators = 0;
    return VAR_0;
}
