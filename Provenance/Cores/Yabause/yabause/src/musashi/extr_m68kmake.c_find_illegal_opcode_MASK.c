
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ opcode_struct ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;

opcode_struct* FUNC_1(void)
{
 opcode_struct* VAR_1;

 for(VAR_1 = VAR_0;VAR_1->name != ((void*)0);VAR_1++)
 {
  if(FUNC_0(VAR_1->name, "illegal") == 0)
   return VAR_1;
 }
 return ((void*)0);
}
