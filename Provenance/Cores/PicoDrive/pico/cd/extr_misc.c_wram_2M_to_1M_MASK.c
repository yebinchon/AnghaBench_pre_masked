
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0)
{
 unsigned short *VAR_1, *VAR_2;
 unsigned int VAR_3, VAR_4, *VAR_5;

 VAR_5 = (unsigned int *) (VAR_0 + 0x40000);
 VAR_1 = (unsigned short *) VAR_5;
 VAR_2 = (unsigned short *) (VAR_0 + 0x60000);

 for (VAR_3 = 0x40000/4; VAR_3; VAR_3--)
 {
  VAR_4 = *(--VAR_5);
  *(--VAR_1) = VAR_4;
  *(--VAR_2) = VAR_4 >> 16;
 }
}
