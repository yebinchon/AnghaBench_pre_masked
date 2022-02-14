
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dropStatus; } ;
typedef TYPE_1__ SDbObj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,void*,void**) ;

void FUNC_2(void *VAR_2, void *VAR_3) {
  void * VAR_4 = ((void*)0);
  SDbObj *VAR_5 = ((void*)0);

  while (1) {
    VAR_4 = FUNC_1(VAR_1, VAR_4, (void **)&VAR_5);
    if (VAR_5 == ((void*)0)) break;
    if (VAR_5->dropStatus != VAR_0) continue;
    FUNC_0(VAR_5);
    break;
  }
}
