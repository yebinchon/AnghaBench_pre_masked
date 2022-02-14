
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 unsigned long* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4, int VAR_5, int VAR_6)
{
 float VAR_7, VAR_8;
 int VAR_9 = (VAR_3[0x28DA>>1]>>9)&0x3;
 unsigned short VAR_10;


 VAR_1[0] = VAR_0[0] + VAR_4 * 320 * VAR_9;
 VAR_1[1] = VAR_0[1] + VAR_4 * 320 * VAR_9;
 VAR_1[2] = VAR_0[2] + VAR_4 * 320 * VAR_9;
 VAR_1[3] = VAR_0[3] + VAR_4 * 320 * VAR_9;

 VAR_7 = 1024.0;
 VAR_8 = 320.0;

 if (VAR_3[0x2800>>1]&0x100)
 {
  VAR_7=489.0;
  if (VAR_3[0x2818>>1] == 287)
   VAR_8=274.0;
  else if (VAR_3[0x2818>>1] == 239)
   VAR_8=331.0;
 }


 VAR_10 = (unsigned short)((float)VAR_7 *(VAR_5/320.0));


 if (VAR_6 != 240 && VAR_5 == 320) VAR_10--;
 VAR_3[0x2906>>1]=VAR_10;

 VAR_2[0x2908>>2]=(unsigned long)((float)VAR_8 *VAR_9 *(VAR_6/240.0));
}
