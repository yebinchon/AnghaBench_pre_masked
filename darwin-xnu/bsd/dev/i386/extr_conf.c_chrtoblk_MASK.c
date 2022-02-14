
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 size_t VAR_2 ;

dev_t
FUNC_3(dev_t VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3) >= VAR_2)
  return(VAR_0);
 VAR_4 = VAR_1[FUNC_0(VAR_3)];
 if (VAR_4 == VAR_0)
  return(VAR_0);
 return(FUNC_1(VAR_4, FUNC_2(VAR_3)));
}
