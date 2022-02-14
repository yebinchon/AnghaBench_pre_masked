
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int MPT_RESETHANDLER ;


 size_t VAR_0 ;
 int * VAR_1 ;

int
FUNC_0(u8 VAR_2, MPT_RESETHANDLER VAR_3)
{
 if (!VAR_2 || VAR_2 >= VAR_0)
  return -1;

 VAR_1[VAR_2] = VAR_3;
 return 0;
}
