
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t btc_pid_t ;


 size_t VAR_0 ;
 void** VAR_1 ;

int FUNC_0(btc_pid_t VAR_2, void *VAR_3)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_0) {
        return -1;
    }

    VAR_1[VAR_2] = VAR_3;

    return 0;
}
