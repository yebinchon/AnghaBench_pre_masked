
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_3__ {scalar_t__ status_in; int fifo; } ;
typedef TYPE_1__ AVFilterLink ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *) ;

int FUNC_2(AVFilterLink *VAR_0, unsigned VAR_1)
{
    uint64_t VAR_2 = FUNC_1(&VAR_0->fifo);
    FUNC_0(VAR_1);
    return VAR_2 >= VAR_1 || (VAR_0->status_in && VAR_2);
}
