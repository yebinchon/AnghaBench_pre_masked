
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 unsigned char* FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int*,unsigned char*,int) ;

bool FUNC_3(bool *VAR_0)
{
 unsigned char *VAR_1, *VAR_2;
 u8 VAR_3;
 unsigned char *VAR_4;

 u32 VAR_5 = 0x000C0000;
 u16 VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_5, 0x10000);

 FUNC_2(&VAR_6, VAR_4, 2);

 if (VAR_6 == 0xAA55) {


  VAR_1 = VAR_4 + 0x1B;
  VAR_2 = VAR_4 + *((u16 *) VAR_1);



  VAR_1 = VAR_2 + 18;
  VAR_1 = VAR_4 + *((u16 *) VAR_1);




  VAR_1 += 41;

  VAR_3 = *VAR_1++;

  if (VAR_3 & 0x8)
   *VAR_0 = 0;
  else
   *VAR_0 = 1;

  FUNC_1(VAR_4);

  return 1;
 } else {
  FUNC_1(VAR_4);
  return 0;
 }
}
