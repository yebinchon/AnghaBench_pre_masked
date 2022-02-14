
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* Opened; int * Event; int HardwareID; } ;
typedef int IRP ;
typedef int IO_STACK_LOCATION ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,char*,int ) ;

BOOL FUNC_3(IRP *VAR_5, IO_STACK_LOCATION *VAR_6)
{
 char VAR_7[VAR_1];

 if (VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_4->Opened)
 {

  return VAR_0;
 }
 VAR_4->Opened = VAR_3;


 FUNC_2(VAR_7, VAR_2, VAR_4->HardwareID);


 VAR_4->Event = FUNC_0(VAR_7);
 if (VAR_4->Event == ((void*)0))
 {
  VAR_4->Opened = VAR_0;
  return VAR_0;
 }


 FUNC_1(VAR_3);

 return VAR_3;
}
