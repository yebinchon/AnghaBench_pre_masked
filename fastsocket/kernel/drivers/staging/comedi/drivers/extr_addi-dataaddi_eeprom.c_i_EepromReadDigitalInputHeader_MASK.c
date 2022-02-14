
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_DigitalInputHeader {unsigned char b_Interruptible; void* w_NinterruptLogic; void* w_Nchannel; } ;


 void* FUNC_0 (unsigned short,char*,int) ;

int FUNC_1(unsigned short VAR_0,
 char *VAR_1, unsigned short VAR_2,
 struct str_DigitalInputHeader *VAR_3)
{
 unsigned short VAR_4;


 VAR_3->w_Nchannel =
  FUNC_0(VAR_0, VAR_1,
  0x100 + VAR_2 + 6);


 VAR_4 = FUNC_0(VAR_0,
  VAR_1, 0x100 + VAR_2 + 8);
 VAR_3->b_Interruptible = (unsigned char) (VAR_4 >> 7) & 0x01;


 VAR_3->w_NinterruptLogic =
  FUNC_0(VAR_0, VAR_1,
  0x100 + VAR_2 + 10);

 return 0;
}
