
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int byte ;



unsigned FUNC_0 (unsigned VAR_0)
{
 byte VAR_1,VAR_2,VAR_3,VAR_4;

 VAR_1 = VAR_0&255;
 VAR_2 = (VAR_0>>8)&255;
 VAR_3 = (VAR_0>>16)&255;
 VAR_4 = (VAR_0>>24)&255;

 return ((unsigned)VAR_1<<24) + ((unsigned)VAR_2<<16) + ((unsigned)VAR_3<<8) + VAR_4;
}
