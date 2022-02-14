
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tasks; int MemorySize; } ;
typedef TYPE_1__* PISDN_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (PISDN_ADAPTER VAR_3) {
 if (!VAR_3->tasks) {
  VAR_3->tasks = VAR_2;
 }
 VAR_3->MemorySize = (VAR_3->tasks == 1) ? VAR_0 : VAR_1;
 FUNC_1 (VAR_3) ;
 FUNC_0 (VAR_3) ;
}
