
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*,int) ;

int
FUNC_1(void * VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_0, (uint32_t)0, VAR_1, VAR_2);

 if (VAR_3 == -1)
  return(-1);
 else
  return(VAR_3/sizeof(int));
}
