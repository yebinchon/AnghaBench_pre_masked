
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_0 != ((void*)0)) {
  while (VAR_1 > 0)
   FUNC_0(VAR_0[--VAR_1].name);
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
 }
}
