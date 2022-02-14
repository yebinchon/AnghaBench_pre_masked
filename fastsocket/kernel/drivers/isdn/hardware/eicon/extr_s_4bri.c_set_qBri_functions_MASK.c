
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MemorySize; scalar_t__ tasks; } ;
typedef TYPE_1__* PISDN_ADAPTER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (PISDN_ADAPTER VAR_2) {
 if (!VAR_2->tasks) {
  VAR_2->tasks = VAR_0;
 }
 VAR_2->MemorySize = VAR_1 ;
 FUNC_1 (VAR_2) ;
 FUNC_0 (VAR_2) ;
}
