
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

void *FUNC_0(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = (VAR_1 + VAR_4 - 1) & ~(VAR_4 - 1);
 if ((VAR_5 + VAR_3) < VAR_2) {
  void *VAR_6 = (void *)((unsigned int)VAR_0 + VAR_5);
  VAR_1 = VAR_5 + VAR_3;
  return VAR_6;
 }
 return ((void*)0);
}
