
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _timing {int hcs; int hce; int hlw; int hbs640; int hbe640; int hsy; int equ; int psbOdd; int prbOdd; int acv; int psbEven; int prbEven; int be3; int bs3; int be1; int bs1; int be4; int bs4; int be2; int bs2; int nhlines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _timing* FUNC_0 (int) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1(u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6,VAR_7,VAR_8;
 const struct _timing *VAR_9 = ((void*)0);

 VAR_6 = ((VAR_4>>2)&0x07);
 VAR_7 = (VAR_4&0x01);
 VAR_8 = (VAR_4&0x02);

 VAR_9 = FUNC_0(VAR_4);


 VAR_5 = 0;
 VAR_3[1] = 0x02;
 while(VAR_5<1000) VAR_5++;
 VAR_3[1] = 0x00;


 VAR_3[2] = ((VAR_9->hcs<<8)|VAR_9->hce);
 VAR_3[3] = VAR_9->hlw;

 VAR_3[4] = (VAR_9->hbs640<<1);
 VAR_3[5] = ((VAR_9->hbe640<<7)|VAR_9->hsy);

 VAR_3[0] = VAR_9->equ;

 VAR_3[6] = (VAR_9->psbOdd+2);
 VAR_3[7] = (VAR_9->prbOdd+((VAR_9->acv<<1)-2));

 VAR_3[8] = (VAR_9->psbEven+2);
 VAR_3[9] = (VAR_9->prbEven+((VAR_9->acv<<1)-2));

 VAR_3[10] = ((VAR_9->be3<<5)|VAR_9->bs3);
 VAR_3[11] = ((VAR_9->be1<<5)|VAR_9->bs1);

 VAR_3[12] = ((VAR_9->be4<<5)|VAR_9->bs4);
 VAR_3[13] = ((VAR_9->be2<<5)|VAR_9->bs2);

 VAR_3[24] = (0x1000|((VAR_9->nhlines/2)+1));
 VAR_3[25] = (VAR_9->hlw+1);

 VAR_3[26] = 0x1001;
 VAR_3[27] = 0x0001;
 VAR_3[36] = 0x2828;

 if(VAR_6<VAR_2 && VAR_6>=VAR_0) VAR_6 = VAR_1;
 if(VAR_8){
  VAR_3[1] = ((VAR_6<<8)|0x0005);
  VAR_3[54] = 0x0001;
 } else {
  VAR_3[1] = ((VAR_6<<8)|(VAR_7<<2)|0x0001);
  VAR_3[54] = 0x0000;
 }
}
