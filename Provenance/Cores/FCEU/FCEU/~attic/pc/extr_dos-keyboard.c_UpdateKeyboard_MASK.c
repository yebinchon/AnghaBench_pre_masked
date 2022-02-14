
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

int FUNC_1(void)
{
 int VAR_5=VAR_4;

 if(VAR_5)
 {
  asm volatile(
        "subl %%eax,_newk\n\t"
 :
 : "a" (VAR_5)
  );

  if(VAR_3[VAR_1] && VAR_3[VAR_0])
   FUNC_0(VAR_2);
  return(1);
 }
 return(0);
}
