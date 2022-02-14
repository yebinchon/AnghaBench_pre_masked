
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned char* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,void*,unsigned long) ;
 int FUNC_4 (int ,unsigned int,void*,int,unsigned long,int) ;

void FUNC_5(unsigned int VAR_4, void *VAR_5, unsigned long VAR_6)
{
 if (VAR_4 >= VAR_1 && VAR_4 < VAR_0)
  FUNC_3(FUNC_1(VAR_4), VAR_5, VAR_6);
 else {
  unsigned char *VAR_7 = VAR_5;
  unsigned char *VAR_8 = FUNC_0(VAR_4);
  while (VAR_6--)
   *VAR_7++ = *(volatile unsigned char *)VAR_8;
 }
}
