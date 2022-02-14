
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _go32_dpmi_registers ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (int) ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(_go32_dpmi_registers *VAR_5)
{
 unsigned char VAR_6=FUNC_0(0x60);


 if(VAR_6!=0xE0)
 {
  int VAR_7=0;




  if(VAR_3==0xE0)
   if((VAR_6&0x7F)==VAR_0 || (VAR_6&0x7F)==VAR_1)
    VAR_7=0x80;


  VAR_2[(VAR_6&0x7f)|VAR_7]=((VAR_6&0x80)^0x80);
  VAR_4++;
 }
 VAR_3=VAR_6;

 FUNC_1(0x20,0x20);
}
