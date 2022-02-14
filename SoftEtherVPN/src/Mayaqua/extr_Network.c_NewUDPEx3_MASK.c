
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SOCK ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int *) ;

SOCK *FUNC_2(UINT VAR_0, IP *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return FUNC_1(VAR_0, 0, ((void*)0));
 }

 if (FUNC_0(VAR_1))
 {
  return FUNC_1(VAR_0, 0, VAR_1);
 }
 else
 {
  return FUNC_1(VAR_0, 1, VAR_1);
 }
}
