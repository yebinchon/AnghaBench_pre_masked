
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status_in; int fifo; } ;
typedef TYPE_1__ AVFilterLink ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, unsigned VAR_1)
{
    return FUNC_0(&VAR_0->fifo) &&
           (FUNC_1(&VAR_0->fifo) >= VAR_1 ||
            VAR_0->status_in);
}
