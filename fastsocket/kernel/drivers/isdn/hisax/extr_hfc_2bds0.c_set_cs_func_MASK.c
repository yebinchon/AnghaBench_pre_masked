
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long data; void* function; } ;
struct IsdnCardState {int tqueue; TYPE_1__ dbusytimer; int * BC_Write_Reg; int * BC_Read_Reg; int * writeisacfifo; int * readisacfifo; int * writeisac; int * readisac; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_2(struct IsdnCardState *VAR_7)
{
 VAR_7->readisac = &VAR_5;
 VAR_7->writeisac = &VAR_6;
 VAR_7->readisacfifo = &VAR_2;
 VAR_7->writeisacfifo = &VAR_2;
 VAR_7->BC_Read_Reg = &VAR_0;
 VAR_7->BC_Write_Reg = &VAR_1;
 VAR_7->dbusytimer.function = (void *) VAR_3;
 VAR_7->dbusytimer.data = (long) VAR_7;
 FUNC_1(&VAR_7->dbusytimer);
 FUNC_0(&VAR_7->tqueue, VAR_4);
}
