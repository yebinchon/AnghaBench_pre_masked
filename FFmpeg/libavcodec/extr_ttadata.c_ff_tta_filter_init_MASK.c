
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int shift; int round; } ;
typedef TYPE_1__ TTAFilter ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(TTAFilter *VAR_1, int32_t VAR_2) {
    FUNC_0(VAR_1, 0, sizeof(TTAFilter));
    VAR_1->shift = VAR_2;
    VAR_1->round = VAR_0[VAR_2-1];
}
