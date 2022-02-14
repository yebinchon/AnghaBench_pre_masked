
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned int) ;
 int VAR_0 ;

void FUNC_2(unsigned int VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 static unsigned char VAR_4;


 if (VAR_3 == VAR_4)
  return;

 FUNC_0("input event\n");
 VAR_4 = VAR_3;
 FUNC_1(&VAR_0,
        (VAR_1 << 4) ^ VAR_2 ^ (VAR_2 >> 4) ^ VAR_3);
}
