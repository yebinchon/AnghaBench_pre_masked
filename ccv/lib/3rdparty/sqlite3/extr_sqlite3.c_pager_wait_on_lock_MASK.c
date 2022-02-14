
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eLock; int pBusyHandlerArg; scalar_t__ (* xBusyHandler ) (int ) ;} ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(Pager *VAR_5, int VAR_6){
  int VAR_7;






  FUNC_0( (VAR_5->eLock>=VAR_6)
       || (VAR_5->eLock==VAR_1 && VAR_6==VAR_3)
       || (VAR_5->eLock==VAR_2 && VAR_6==VAR_0)
  );

  do {
    VAR_7 = FUNC_1(VAR_5, VAR_6);
  }while( VAR_7==VAR_4 && VAR_5->xBusyHandler(VAR_5->pBusyHandlerArg) );
  return VAR_7;
}
