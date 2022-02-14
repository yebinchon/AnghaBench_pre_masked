
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int range; int low; } ;
typedef TYPE_1__ CABACContext ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(CABACContext *VAR_2, uint8_t * const VAR_3, int VAR_4){
    int VAR_5= VAR_0[2*(VAR_2->range&0xC0) + *VAR_3];

    if(VAR_4 == ((*VAR_3)&1)){
        VAR_2->range -= VAR_5;
        *VAR_3 = VAR_1[128 + *VAR_3];
    }else{
        VAR_2->low += VAR_2->range - VAR_5;
        VAR_2->range = VAR_5;
        *VAR_3= VAR_1[127 - *VAR_3];
    }

    FUNC_0(VAR_2);
}
