
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_message; int parent_name; int context_name; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
    int VAR_4;

    if (VAR_3)
        FUNC_1(&VAR_2);
    for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
        FUNC_0(&VAR_0[VAR_4].context_name);
        FUNC_0(&VAR_0[VAR_4].parent_name);
        FUNC_0(&VAR_0[VAR_4].log_message);
    }
    VAR_1 = 0;
    if(VAR_3)
        FUNC_2(&VAR_2);
}
