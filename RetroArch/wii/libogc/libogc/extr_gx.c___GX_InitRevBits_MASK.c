
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int* VAT0reg; int* VAT1reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3()
{
 s32 VAR_1;

 VAR_1=0;
 while(VAR_1<8) {
  VAR_0->VAT0reg[VAR_1] = 0x40000000;
  VAR_0->VAT1reg[VAR_1] = 0x80000000;
  FUNC_1((0x0080|VAR_1),VAR_0->VAT1reg[VAR_1]);
  VAR_1++;
 }

 FUNC_2(0x1000,0x3f);
 FUNC_2(0x1012,0x01);

 FUNC_0(0x5800000f);

}
