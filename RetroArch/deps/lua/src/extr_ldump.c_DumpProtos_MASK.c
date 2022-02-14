
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizep; int source; int * p; } ;
typedef TYPE_1__ Proto ;
typedef int DumpState ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2 (const Proto *VAR_0, DumpState *VAR_1) {
  int VAR_2;
  int VAR_3 = VAR_0->sizep;
  FUNC_1(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    FUNC_0(VAR_0->p[VAR_2], VAR_0->source, VAR_1);
}
