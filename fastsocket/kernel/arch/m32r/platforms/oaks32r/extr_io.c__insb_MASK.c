
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,void*,unsigned long) ;

void FUNC_3(unsigned int VAR_0, void *VAR_1, unsigned long VAR_2)
{
 if (VAR_0 >= 0x300 && VAR_0 < 0x320)
  FUNC_2(FUNC_1(VAR_0), VAR_1, VAR_2);
 else {
  unsigned char *VAR_3 = VAR_1;
  unsigned char *VAR_4 = FUNC_0(VAR_0);
  while (VAR_2--)
   *VAR_3++ = *(volatile unsigned char *)VAR_4;
 }
}
