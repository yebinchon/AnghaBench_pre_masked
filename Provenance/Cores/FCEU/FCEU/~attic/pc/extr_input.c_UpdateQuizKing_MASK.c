
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 VAR_1=0;

 for(VAR_2=0;VAR_2<6;VAR_2++)
 {
  if(FUNC_0(&VAR_0[VAR_2]))
   VAR_1|=1<<VAR_2;
 }

}
