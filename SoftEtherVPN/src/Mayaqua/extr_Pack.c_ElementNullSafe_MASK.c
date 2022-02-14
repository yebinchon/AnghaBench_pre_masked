
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dummy ;
typedef int ELEMENT ;


 int FUNC_0 (int *,int) ;

ELEMENT *FUNC_1(ELEMENT *VAR_0)
{
 static ELEMENT VAR_1;
 if (VAR_0 == ((void*)0))
 {
  FUNC_0(&VAR_1, sizeof(VAR_1));
  return &VAR_1;
 }
 return VAR_0;
}
