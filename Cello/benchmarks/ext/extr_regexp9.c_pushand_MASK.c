
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * last; int * first; } ;
typedef int Reinst ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(Reinst *VAR_3, Reinst *VAR_4)
{
 if(VAR_1 >= &VAR_2[VAR_0])
  FUNC_0("operand stack overflow");
 VAR_1->first = VAR_3;
 VAR_1->last = VAR_4;
 VAR_1++;
}
