
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {int a; int c; } ;
typedef TYPE_1__ MqcState ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(MqcState *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    int VAR_6;

    VAR_6 = VAR_2[*VAR_4];
    VAR_3->a -= VAR_6;
    if ((*VAR_4 & 1) == VAR_5){
        if (!(VAR_3->a & 0x8000)){
            if (VAR_3->a < VAR_6)
                VAR_3->a = VAR_6;
            else
                VAR_3->c += VAR_6;
            *VAR_4 = VAR_1[*VAR_4];
            FUNC_0(VAR_3);
        } else
            VAR_3->c += VAR_6;
    } else{
        if (VAR_3->a < VAR_6)
            VAR_3->c += VAR_6;
        else
            VAR_3->a = VAR_6;
        *VAR_4 = VAR_0[*VAR_4];
        FUNC_0(VAR_3);
    }
}
