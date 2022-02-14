
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* classname; int neverFree; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {TYPE_1__** bodyQue; scalar_t__ bodyQueIndex; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void FUNC_1 (void) {
 int VAR_3;
 gentity_t *VAR_4;

 VAR_1.bodyQueIndex = 0;
 for (VAR_3=0; VAR_3<VAR_0 ; VAR_3++) {
  VAR_4 = FUNC_0();
  VAR_4->classname = "bodyque";
  VAR_4->neverFree = VAR_2;
  VAR_1.bodyQue[VAR_3] = VAR_4;
 }
}
