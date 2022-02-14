
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Opened; int * Event; } ;
typedef int NEO_EVENT ;
typedef int IRP ;
typedef int IO_STACK_LOCATION ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

BOOL FUNC_5(IRP *VAR_3, IO_STACK_LOCATION *VAR_4)
{
 NEO_EVENT *VAR_5 = ((void*)0);
 if (VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_2->Opened == VAR_0)
 {

  return VAR_0;
 }
 VAR_2->Opened = VAR_0;

 FUNC_2();
 {

  VAR_5 = VAR_2->Event;
  VAR_2->Event = ((void*)0);


  FUNC_0(1);
 }
 FUNC_4();

 if (VAR_5 != ((void*)0))
 {
  FUNC_1(VAR_5);
 }

 FUNC_3(VAR_0);

 return VAR_1;
}
