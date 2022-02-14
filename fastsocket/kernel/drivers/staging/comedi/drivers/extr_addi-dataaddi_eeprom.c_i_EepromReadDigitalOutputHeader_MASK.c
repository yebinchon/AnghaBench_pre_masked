
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_DigitalOutputHeader {int w_Nchannel; } ;


 int FUNC_0 (unsigned short,char*,int) ;

int FUNC_1(unsigned short VAR_0,
 char *VAR_1, unsigned short VAR_2,
 struct str_DigitalOutputHeader *VAR_3)
{

 VAR_3->w_Nchannel =
  FUNC_0(VAR_0, VAR_1,
  0x100 + VAR_2 + 6);
 return 0;
}
