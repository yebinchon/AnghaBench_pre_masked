
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_2__ {void (* init ) (int *) ;scalar_t__ ppri; int exist; int getNext; int delete; int insert; int ** Head; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_5)
{
    u16_t VAR_6;
    FUNC_0(VAR_5);



    for (VAR_6=0; VAR_6<4; VAR_6++) {



        VAR_0.Head[VAR_6] = ((void*)0);
    }
    VAR_0.insert = VAR_4;
    VAR_0.delete = VAR_1;
    VAR_0.init = FUNC_1;
    VAR_0.getNext = VAR_3;
    VAR_0.exist = VAR_2;
    VAR_0.ppri = 0;
    return;
}
