
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short FUNC_0(unsigned long VAR_0,
    unsigned long VAR_1)
{
 unsigned long VAR_2 ;
 unsigned short VAR_3;

 VAR_2 = VAR_0 * (VAR_1/1000/1000) / 1000;
 VAR_3 = (unsigned short)VAR_2;
 if ((VAR_2*1000*1000) < (VAR_0*(VAR_1/1000))) {
  VAR_3++;
 }

 return VAR_3;
}
