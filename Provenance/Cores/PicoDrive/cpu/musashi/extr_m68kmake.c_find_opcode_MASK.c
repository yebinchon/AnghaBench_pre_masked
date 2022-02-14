
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * spec_ea; int * spec_proc; int * name; } ;
typedef TYPE_1__ opcode_struct ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

opcode_struct* FUNC_1(char* VAR_1, int VAR_2, char* VAR_3, char* VAR_4)
{
 opcode_struct* VAR_5;


 for(VAR_5 = VAR_0;VAR_5->name != ((void*)0);VAR_5++)
 {
  if( FUNC_0(VAR_1, VAR_5->name) == 0 &&
   (VAR_2 == VAR_5->size) &&
   FUNC_0(VAR_3, VAR_5->spec_proc) == 0 &&
   FUNC_0(VAR_4, VAR_5->spec_ea) == 0)
    return VAR_5;
 }
 return ((void*)0);
}
