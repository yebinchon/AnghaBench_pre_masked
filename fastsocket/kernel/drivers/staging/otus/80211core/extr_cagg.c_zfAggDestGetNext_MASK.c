
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct dest {struct dest* next; } ;
struct TYPE_2__ {struct dest** dest; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct dest* FUNC_4(zdev_t* VAR_1, u16_t VAR_2)
{
    struct dest *VAR_3 = ((void*)0);
    FUNC_2(VAR_1);

    FUNC_0();

    FUNC_1(VAR_1);
    if (VAR_0.dest[VAR_2]) {
        VAR_3 = VAR_0.dest[VAR_2];
        VAR_0.dest[VAR_2] = VAR_0.dest[VAR_2]->next;
    }
    else {
        VAR_3 = ((void*)0);
    }
    FUNC_3(VAR_1);

    return VAR_3;
}
