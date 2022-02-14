
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 int VAR_2 = (int) FUNC_0(VAR_0, &VAR_1, 16);
 if (VAR_1 != VAR_0)



  return ((VAR_2>>8)&0xf800) | ((VAR_2>>5)&0x07e0) | ((VAR_2>>3)&0x1f);

 return -1;
}
