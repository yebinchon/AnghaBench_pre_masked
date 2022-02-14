
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1 = 0;

      if (VAR_0 >= 512000) VAR_1 = 8;
 else if (VAR_0 >= 256000) VAR_1 = 7;
 else if (VAR_0 >= 64000) VAR_1 = 6;
 else if (VAR_0 >= 38400) VAR_1 = 5;
 else if (VAR_0 >= 19200) VAR_1 = 4;
 else if (VAR_0 >= 9600) VAR_1 = 3;
 else if (VAR_0 >= 4800) VAR_1 = 2;
 else if (VAR_0 >= 2400) VAR_1 = 1;

 return VAR_1;
}
