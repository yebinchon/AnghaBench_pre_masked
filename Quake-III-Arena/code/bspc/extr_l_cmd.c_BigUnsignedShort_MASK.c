
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



unsigned short FUNC_0 (unsigned short VAR_0)
{
 byte VAR_1,VAR_2;

 VAR_1 = VAR_0&255;
 VAR_2 = (VAR_0>>8)&255;

 return (VAR_1<<8) + VAR_2;
}
