
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int integer_t ;
typedef int host_info64_t ;
struct TYPE_5__ {int count; scalar_t__ data; } ;
struct TYPE_4__ {int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, host_info64_t VAR_4)
{
    if (VAR_3 < 0 || VAR_3 >= VAR_0)
        return;

    task_t VAR_5 = FUNC_0();
    if (VAR_5->t_flags & VAR_1)
        return;

    FUNC_1((void *)VAR_2[VAR_3].data, VAR_4, VAR_2[VAR_3].count * sizeof(integer_t));
    return;
}
