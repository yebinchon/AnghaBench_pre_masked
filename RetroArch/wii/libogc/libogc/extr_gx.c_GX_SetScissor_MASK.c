
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sciTLcorner; int sciBRcorner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u32 VAR_1,u32 VAR_2,u32 VAR_3,u32 VAR_4)
{
 u32 VAR_5 = VAR_1+0x156;
 u32 VAR_6 = VAR_2+0x156;
 u32 VAR_7 = VAR_5+(VAR_3-1);
 u32 VAR_8 = VAR_6+(VAR_4-1);

 VAR_0->sciTLcorner = (VAR_0->sciTLcorner&~0x7ff)|(VAR_6&0x7ff);
 VAR_0->sciTLcorner = (VAR_0->sciTLcorner&~0x7FF000)|(FUNC_1(VAR_5,12,11));

 VAR_0->sciBRcorner = (VAR_0->sciBRcorner&~0x7ff)|(VAR_8&0xfff);
 VAR_0->sciBRcorner = (VAR_0->sciBRcorner&~0x7FF000)|(FUNC_1(VAR_7,12,11));

 FUNC_0(VAR_0->sciTLcorner);
 FUNC_0(VAR_0->sciBRcorner);
}
