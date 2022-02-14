
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct IsdnCardState {TYPE_3__* bcs; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;
struct TYPE_4__ {int hscx; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct TYPE_6__ {TYPE_2__ hw; void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct IsdnCardState*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 void* VAR_11 ;
 int FUNC_2 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int,int ,int) ;

void
FUNC_9(struct IsdnCardState *VAR_12)
{
 VAR_12->bcs[0].BC_SetStack = VAR_11;
 VAR_12->bcs[1].BC_SetStack = VAR_11;
 VAR_12->bcs[0].BC_Close = VAR_0;
 VAR_12->bcs[1].BC_Close = VAR_0;
 VAR_12->bcs[0].hw.hscx.hscx = 0;
 VAR_12->bcs[1].hw.hscx.hscx = 1;


 FUNC_0(VAR_12, 0x11, 0x0f);
 FUNC_0(VAR_12, 0x17, 0x2f);


 VAR_12->BC_Write_Reg(VAR_12, 0, VAR_9, VAR_5);
 VAR_12->BC_Write_Reg(VAR_12, 1, VAR_9, VAR_5);

 VAR_12->BC_Write_Reg(VAR_12, 0, VAR_7, 0x00);
 VAR_12->BC_Write_Reg(VAR_12, 1, VAR_7, 0x00);

 VAR_12->BC_Write_Reg(VAR_12, 0, VAR_8, 0x00);
 VAR_12->BC_Write_Reg(VAR_12, 1, VAR_8, 0x00);

 FUNC_0(VAR_12, VAR_6, (VAR_1|VAR_2));

 VAR_12->BC_Write_Reg(VAR_12, -1,VAR_10, (VAR_3|VAR_4));


 FUNC_1(VAR_12->bcs, 0, 0);
 FUNC_1(VAR_12->bcs + 1, 0, 0);
}
