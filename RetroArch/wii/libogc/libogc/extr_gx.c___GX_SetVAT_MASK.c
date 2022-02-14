
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int VATTable; int * VAT2reg; int * VAT1reg; int * VAT0reg; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1()
{
 u8 VAR_1 = 0;
 s32 VAR_2;

 for(VAR_2=0;VAR_2<8;VAR_2++) {
  VAR_1 = (1<<VAR_2);
  if(VAR_0->VATTable&VAR_1) {
   FUNC_0((0x70+(VAR_2&7)),VAR_0->VAT0reg[VAR_2]);
   FUNC_0((0x80+(VAR_2&7)),VAR_0->VAT1reg[VAR_2]);
   FUNC_0((0x90+(VAR_2&7)),VAR_0->VAT2reg[VAR_2]);
  }
 }
 VAR_0->VATTable = 0;
}
