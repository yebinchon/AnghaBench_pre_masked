
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int ** replace; } ;
typedef TYPE_1__ replace_struct ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(replace_struct* VAR_1, char* VAR_2, char* VAR_3)
{
 if(VAR_1->length >= VAR_0)
  FUNC_0("overflow in replace structure");

 FUNC_1(VAR_1->replace[VAR_1->length][0], VAR_2);
 FUNC_1(VAR_1->replace[VAR_1->length++][1], VAR_3);
}
