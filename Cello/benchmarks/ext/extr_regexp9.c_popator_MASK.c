
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(void)
{
 if(VAR_0 <= &VAR_1[0])
  FUNC_0("operator stack underflow");
 --VAR_2;
 return *--VAR_0;
}
