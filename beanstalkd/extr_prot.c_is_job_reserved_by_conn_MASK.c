
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_5__ {TYPE_1__ r; int * reserver; } ;
typedef TYPE_2__ Job ;
typedef int Conn ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(Conn *VAR_1, Job *VAR_2)
{
    return VAR_2 && VAR_2->reserver == VAR_1 && VAR_2->r.state == VAR_0;
}
