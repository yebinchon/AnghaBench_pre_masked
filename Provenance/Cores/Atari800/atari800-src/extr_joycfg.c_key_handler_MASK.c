
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;

void FUNC_2(void)
{
 asm("cli; pusha");
 VAR_5 = FUNC_0(0x60);
        if (VAR_1==2) VAR_1=1;else
        if (VAR_1==1)
        {
            VAR_4=VAR_5&0x80;
            VAR_3=(VAR_5&0x7f)+128;
            VAR_0[VAR_2++]=VAR_3+(VAR_4<<8);
            if (VAR_2==100) VAR_2=0;
            VAR_1=0;
        } else
        {
          VAR_3=VAR_5&0x7f;
          VAR_4=VAR_5&0x80;
          switch(VAR_5)
          {
            case 0xe1:VAR_1=2;break;
            case 0xe0:VAR_1=1;break;
            default:
              VAR_0[VAR_2++]=VAR_3+(VAR_4<<8);
              if (VAR_2==100) VAR_2=0;
          }
        }
 FUNC_1(0x20, 0x20);
 asm("popa; sti");
}
