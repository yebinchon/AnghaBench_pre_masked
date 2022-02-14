
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ConnectionInfo ;


 int FUNC_0 (int *,int const) ;
 int * FUNC_1 (int *,int *,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

ConnectionInfo *FUNC_2(ConnectionInfo *VAR_2,
  const int VAR_3, int *VAR_4)
{
 if (VAR_1)
 {
  return FUNC_1(&VAR_0,
   VAR_2, VAR_4);
 }
 else
 {
  *VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (*VAR_4 != 0)
  {
   return ((void*)0);
  }
  else
  {
   return VAR_2;
  }
 }
}
