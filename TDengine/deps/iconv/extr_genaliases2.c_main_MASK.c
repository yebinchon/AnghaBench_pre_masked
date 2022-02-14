
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_0 ;

int FUNC_4 (int VAR_1, char* VAR_2[])
{
  const char * VAR_3 = (VAR_1 > 1 ? VAR_2[1] : "xxx");
  FILE * VAR_4 = FUNC_2(3, "w");
  if (VAR_4 == ((void*)0))
    FUNC_0(1);
  if (FUNC_3(VAR_0) || FUNC_1(VAR_0) || FUNC_3(VAR_4) || FUNC_1(VAR_4))
    FUNC_0(1);
  FUNC_0(0);
}
