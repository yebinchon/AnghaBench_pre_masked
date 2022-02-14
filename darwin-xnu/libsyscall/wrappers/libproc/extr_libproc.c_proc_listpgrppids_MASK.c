
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*,int) ;

int
FUNC_1(pid_t VAR_1, void * VAR_2, int VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_0, (uint32_t)VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -1)
  return(-1);
 else
  return(VAR_4/sizeof(int));
}
