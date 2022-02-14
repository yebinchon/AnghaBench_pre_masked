
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int,void*,int,unsigned long,int) ;

void FUNC_2(unsigned int VAR_2, void * VAR_3, unsigned long VAR_4)
{
 unsigned short *VAR_5 = VAR_3;
 unsigned short *VAR_6;

 if (VAR_2 >= VAR_1 && VAR_2 <= VAR_0)
  FUNC_1(0, VAR_2, VAR_3, sizeof(unsigned short), VAR_4,
   1);
 else {
  VAR_6 = FUNC_0(VAR_2);
  while (VAR_4--)
   *VAR_5++ = *(volatile unsigned short *)VAR_6;
 }
}
