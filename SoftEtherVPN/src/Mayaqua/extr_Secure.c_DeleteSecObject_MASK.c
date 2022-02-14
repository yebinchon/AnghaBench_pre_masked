
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int SessionCreated; int LoginFlag; int Error; int SessionId; TYPE_1__* Api; } ;
struct TYPE_8__ {int Type; int Name; int Object; scalar_t__ Private; } ;
struct TYPE_7__ {scalar_t__ (* C_DestroyObject ) (int ,int ) ;} ;
typedef TYPE_2__ SEC_OBJ ;
typedef TYPE_3__ SECURE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(SECURE *VAR_5, SEC_OBJ *VAR_6)
{

 if (VAR_5 == ((void*)0))
 {
  return 0;
 }
 if (VAR_6 == ((void*)0))
 {
  VAR_5->Error = VAR_1;
  return 0;
 }
 if (VAR_5->SessionCreated == 0)
 {
  VAR_5->Error = VAR_4;
  return 0;
 }
 if (VAR_5->LoginFlag == 0 && VAR_6->Private)
 {
  VAR_5->Error = VAR_3;
  return 0;
 }


 if (VAR_5->Api->C_DestroyObject(VAR_5->SessionId, VAR_6->Object) != VAR_0)
 {
  VAR_5->Error = VAR_2;
  return 0;
 }


 FUNC_0(VAR_5, VAR_6->Name, VAR_6->Type);

 return 1;
}
