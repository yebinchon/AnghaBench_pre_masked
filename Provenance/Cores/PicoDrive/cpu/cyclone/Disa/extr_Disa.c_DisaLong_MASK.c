
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0)
{
  unsigned int VAR_1=0;
  if (&FUNC_0==((void*)0)) return VAR_1;

  VAR_1= FUNC_0(VAR_0)<<16;
  VAR_1|=FUNC_0(VAR_0+2)&0xffff;
  return VAR_1;
}
