
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * CipherList; } ;
typedef TYPE_1__ CEDAR ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(CEDAR *VAR_0, char *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->CipherList != ((void*)0))
 {
  FUNC_1(VAR_0->CipherList);
 }
 if (VAR_1 != ((void*)0))
 {
  VAR_0->CipherList = FUNC_0(VAR_1);
 }
 else
 {
  VAR_0->CipherList = ((void*)0);
 }
}
