
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 void* FUNC_0 (int) ;
 int** VAR_0 ;

void *FUNC_1(u32 VAR_1)
{


  int *VAR_2=VAR_0[((VAR_1>>16)^VAR_1)&0xFFFF];

  if(VAR_2[0]==VAR_1) return (void *)VAR_2[1];
  if(VAR_2[2]==VAR_1) return (void *)VAR_2[3];
  return FUNC_0(VAR_1);
}
