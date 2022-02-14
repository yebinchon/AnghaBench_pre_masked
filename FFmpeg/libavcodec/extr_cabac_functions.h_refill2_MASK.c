
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int* bytestream; int* bytestream_end; } ;
typedef TYPE_1__ CABACContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(CABACContext *VAR_3){
    int VAR_4;
    unsigned VAR_5;

    VAR_5= VAR_3->low ^ (VAR_3->low-1);
    VAR_4= 7 - VAR_2[VAR_5>>(VAR_0-1)];




    VAR_5= -VAR_1;




        VAR_5+= VAR_3->bytestream[0]<<1;


    VAR_3->low += VAR_5<<VAR_4;

    if (VAR_3->bytestream < VAR_3->bytestream_end)

        VAR_3->bytestream += VAR_0/8;
}
