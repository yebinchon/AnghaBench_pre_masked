
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_4, unsigned short *VAR_5,
    unsigned char *VAR_6, unsigned char *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;

 VAR_9 = 63L;
 if (VAR_4 <= VAR_3)
  VAR_8 = 16;
 else if (VAR_4 <= VAR_0)
  VAR_8 = 32;
 else if (VAR_4 <= VAR_1)
  VAR_8 = 64;
 else if (VAR_4 <= VAR_2)
  VAR_8 = 128;
 else
  VAR_8 = 255;

 VAR_10 = (unsigned long)VAR_4 / (VAR_8 * VAR_9);

 *VAR_5 = (unsigned short)VAR_10;
 *VAR_7 = (unsigned char)VAR_9;
 *VAR_6 = (unsigned char)VAR_8;
}
