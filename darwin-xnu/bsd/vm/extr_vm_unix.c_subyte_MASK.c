
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;


 scalar_t__ FUNC_0 (void*,int ,int) ;

int
FUNC_1(
 user_addr_t VAR_0,
 int VAR_1)
{
 char VAR_2;

 VAR_2 = (char)VAR_1;
 return (FUNC_0((void *)&(VAR_2), VAR_0, sizeof(char)) == 0 ? 0 : -1);
}
