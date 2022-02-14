
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int peCntrl; int dirtyState; int genMode; int peCMode1; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int,int) ;
 TYPE_1__* VAR_2 ;

void FUNC_2(u8 VAR_3,u8 VAR_4)
{
 u8 VAR_5 = 0;
 u32 VAR_6[8] = {0,1,2,3,4,4,4,5};

 VAR_2->peCntrl = (VAR_2->peCntrl&~0x7)|(VAR_6[VAR_3]&0x7);
 VAR_2->peCntrl = (VAR_2->peCntrl&~0x38)|(FUNC_1(VAR_4,3,3));
 FUNC_0(VAR_2->peCntrl);
 VAR_2->dirtyState |= 0x0004;

 if(VAR_3==VAR_0) VAR_5 = 1;
 VAR_2->genMode = (VAR_2->genMode&~0x200)|(FUNC_1(VAR_5,9,1));

 if(VAR_6[VAR_3]==VAR_1) {
  VAR_3 -= VAR_1;
  VAR_2->peCMode1 = (VAR_2->peCMode1&~0xC00)|(FUNC_1(VAR_3,10,2));
  FUNC_0(VAR_2->peCMode1);
 }
}
