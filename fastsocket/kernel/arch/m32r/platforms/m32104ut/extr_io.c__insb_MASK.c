
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,void*,unsigned long) ;

void FUNC_3(unsigned int VAR_2, void *VAR_3, unsigned long VAR_4)
{
 if (VAR_2 >= VAR_1 && VAR_2 < VAR_0)
  FUNC_2(FUNC_1(VAR_2), VAR_3, VAR_4);
 else {
  unsigned char *VAR_5 = VAR_3;
  unsigned char *VAR_6 = FUNC_0(VAR_2);
  while (VAR_4--)
   *VAR_5++ = *(volatile unsigned char *)VAR_6;
 }
}
