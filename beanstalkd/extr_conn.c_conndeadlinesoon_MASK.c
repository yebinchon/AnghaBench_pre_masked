
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_4__ {scalar_t__ deadline_at; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;
typedef int Conn ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(Conn *VAR_1)
{
    int64 VAR_2 = FUNC_1();
    Job *VAR_3 = FUNC_0(VAR_1);

    return VAR_3 && VAR_2 >= VAR_3->r.deadline_at - VAR_0;
}
