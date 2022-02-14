
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int elements; } ;
typedef TYPE_1__ PACK ;
typedef int ELEMENT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;

void FUNC_3(PACK *VAR_1, char *VAR_2)
{
 ELEMENT *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 if (VAR_3 != ((void*)0))
 {
  FUNC_0(VAR_1->elements, VAR_3);

  FUNC_1(VAR_3);
 }
}
