
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int SessionCreated; int Error; } ;
struct TYPE_9__ {scalar_t__ Type; int Name; } ;
typedef TYPE_1__ SEC_OBJ ;
typedef TYPE_2__ SECURE ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,char*) ;

SEC_OBJ *FUNC_6(SECURE *VAR_4, char *VAR_5, UINT VAR_6)
{
 LIST *VAR_7;
 UINT VAR_8;
 SEC_OBJ *VAR_9 = ((void*)0);

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_5 == ((void*)0))
 {
  VAR_4->Error = VAR_1;
  return ((void*)0);
 }
 if (VAR_4->SessionCreated == 0)
 {
  VAR_4->Error = VAR_2;
  return 0;
 }


 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }
 for (VAR_8 = 0;VAR_8 < FUNC_4(VAR_7);VAR_8++)
 {
  SEC_OBJ *VAR_10 = FUNC_3(VAR_7, VAR_8);

  if (VAR_10->Type == VAR_6 || VAR_6 == VAR_0)
  {
   if (FUNC_5(VAR_10->Name, VAR_5) == 0)
   {
    VAR_9 = FUNC_0(VAR_10);
    break;
   }
  }
 }
 FUNC_2(VAR_7);

 if (VAR_9 == ((void*)0))
 {
  VAR_4->Error = VAR_3;
 }

 return VAR_9;
}
