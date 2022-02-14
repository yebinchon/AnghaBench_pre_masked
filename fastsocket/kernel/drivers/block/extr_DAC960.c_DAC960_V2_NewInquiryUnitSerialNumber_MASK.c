
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CommandStatus; int CommandMailbox; } ;
struct TYPE_8__ {TYPE_1__ V2; int CommandType; } ;
typedef scalar_t__ DAC960_V2_CommandStatus_T ;
typedef int DAC960_V2_CommandMailbox_T ;
typedef int DAC960_Controller_T ;
typedef TYPE_2__ DAC960_Command_T ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *,int,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_5(DAC960_Controller_T *VAR_2,
   int VAR_3, int VAR_4, int VAR_5)
{
      DAC960_Command_T *VAR_6;
      DAC960_V2_CommandMailbox_T *VAR_7;
      DAC960_V2_CommandStatus_T VAR_8;

      VAR_6 = FUNC_0(VAR_2);
      VAR_7 = &VAR_6->V2.CommandMailbox;
      FUNC_3(VAR_6);
      VAR_6->CommandType = VAR_0;

      FUNC_4(VAR_2, VAR_7,
   VAR_3, VAR_4, VAR_5);

      FUNC_2(VAR_6);
      VAR_8 = VAR_6->V2.CommandStatus;
      FUNC_1(VAR_6);
      return (VAR_8 == VAR_1);
}
