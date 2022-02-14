
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et131x_adapter {scalar_t__ duplex_mode; scalar_t__ FlowControl; scalar_t__ RegistryFlowControl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct et131x_adapter*,int ,int,int,char*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;

void FUNC_1(struct et131x_adapter *VAR_6)
{
 if (VAR_6->duplex_mode == 0) {
  VAR_6->FlowControl = VAR_1;
 } else {
  char VAR_7, VAR_8;

  FUNC_0(VAR_6,
          VAR_4, 5, 10, &VAR_7);
  FUNC_0(VAR_6,
          VAR_4, 5, 11,
          &VAR_8);

  if ((VAR_7 == VAR_5) &&
      (VAR_8 == VAR_5)) {
   VAR_6->FlowControl = VAR_6->RegistryFlowControl;
  } else if ((VAR_7 == VAR_5) &&
      (VAR_8 == VAR_3)) {
   if (VAR_6->RegistryFlowControl == VAR_0)
    VAR_6->FlowControl = VAR_0;
   else
    VAR_6->FlowControl = VAR_1;
  } else if ((VAR_7 == VAR_3) &&
      (VAR_8 == VAR_3)) {
   VAR_6->FlowControl = VAR_1;
  } else {

   if (VAR_6->RegistryFlowControl == VAR_0)
    VAR_6->FlowControl = VAR_2;
   else
    VAR_6->FlowControl = VAR_1;
  }
 }
}
