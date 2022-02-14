
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_0(int VAR_1)
{
 const char VAR_2[16] = "0123456789abcdef";
 static char VAR_3[2];

 VAR_3[1] = (char) (0x0);
 if (VAR_1 <= VAR_0)
  VAR_3[0] = VAR_2[VAR_1];
 else
  VAR_3[0] = '-';
 return (char *) &VAR_3;
}
