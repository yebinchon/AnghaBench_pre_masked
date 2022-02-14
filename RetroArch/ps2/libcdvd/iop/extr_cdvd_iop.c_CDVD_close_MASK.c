
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int iop_file_t ;
struct TYPE_2__ {int * fd; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(iop_file_t *VAR_3)
{
    int VAR_4;






    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        if (VAR_0[VAR_4].fd == VAR_3)
            break;
    }

    if (VAR_4 >= 16) {




        return -1;
    }





    VAR_1[VAR_4] = 0;
    VAR_2--;

    return 0;
}
