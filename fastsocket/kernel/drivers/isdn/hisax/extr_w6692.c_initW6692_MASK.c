
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ph_state; } ;
struct TYPE_6__ {TYPE_1__ w6692; } ;
struct TYPE_7__ {long data; void* function; } ;
struct IsdnCardState {int (* writeW6692 ) (struct IsdnCardState*,int ,int) ;int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;TYPE_4__* bcs; TYPE_2__ dc; TYPE_3__ dbusytimer; int DC_Close; int setstack_d; } ;
struct TYPE_8__ {void* BC_Close; void* BC_SetStack; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct IsdnCardState *VAR_13, int VAR_14)
{
 if (VAR_14 & 1) {
  VAR_13->setstack_d = VAR_11;
  VAR_13->DC_Close = VAR_0;
  VAR_13->dbusytimer.function = (void *) VAR_10;
  VAR_13->dbusytimer.data = (long) VAR_13;
  FUNC_2(&VAR_13->dbusytimer);
  FUNC_4(VAR_13);
  FUNC_3(VAR_13, VAR_8);
  VAR_13->dc.w6692.ph_state = VAR_8;
  FUNC_1(VAR_13);
  FUNC_3(VAR_13, VAR_7);

  VAR_13->bcs[0].BC_SetStack = VAR_12;
  VAR_13->bcs[1].BC_SetStack = VAR_12;
  VAR_13->bcs[0].BC_Close = VAR_9;
  VAR_13->bcs[1].BC_Close = VAR_9;
  FUNC_0(VAR_13->bcs, 0, 0);
  FUNC_0(VAR_13->bcs + 1, 0, 0);
 }
 if (VAR_14 & 2) {

  VAR_13->writeW6692(VAR_13, VAR_6, 0x18);
  VAR_13->writeW6692(VAR_13, VAR_5, 0x00);
  VAR_13->BC_Write_Reg(VAR_13, 0, VAR_1, 0x00);
  VAR_13->BC_Write_Reg(VAR_13, 1, VAR_1, 0x00);

  VAR_13->writeW6692(VAR_13, VAR_2, VAR_3 | VAR_4);
 }
}
