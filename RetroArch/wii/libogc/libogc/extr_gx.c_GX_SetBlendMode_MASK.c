
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int peCMode0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_2(u8 VAR_4,u8 VAR_5,u8 VAR_6,u8 VAR_7)
{
 VAR_3->peCMode0 = (VAR_3->peCMode0&~0x1);
 if(VAR_4==VAR_0 || VAR_4==VAR_2) VAR_3->peCMode0 |= 0x1;

 VAR_3->peCMode0 = (VAR_3->peCMode0&~0x800);
 if(VAR_4==VAR_2) VAR_3->peCMode0 |= 0x800;

 VAR_3->peCMode0 = (VAR_3->peCMode0&~0x2);
 if(VAR_4==VAR_1) VAR_3->peCMode0 |= 0x2;

 VAR_3->peCMode0 = (VAR_3->peCMode0&~0xF000)|(FUNC_1(VAR_7,12,4));
 VAR_3->peCMode0 = (VAR_3->peCMode0&~0xE0)|(FUNC_1(VAR_6,5,3));
 VAR_3->peCMode0 = (VAR_3->peCMode0&~0x700)|(FUNC_1(VAR_5,8,3));

 FUNC_0(VAR_3->peCMode0);
}
