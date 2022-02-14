
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ifaddr_t ;


 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void
FUNC_2(ifaddr_t *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); VAR_2++)
  FUNC_1(VAR_1[VAR_2]);

 FUNC_0(VAR_1, VAR_0);
}
