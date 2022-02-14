
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int SessionCreated; int LoginFlag; int SessionId; TYPE_1__* Api; int Error; scalar_t__ IsReadOnly; } ;
struct TYPE_4__ {scalar_t__ (* C_SetPIN ) (int ,char*,int ,char*,int ) ;} ;
typedef TYPE_2__ SECURE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int ,char*,int ) ;

bool FUNC_2(SECURE *VAR_4, char *VAR_5, char *VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }
 if (VAR_4->SessionCreated == 0)
 {
  VAR_4->Error = VAR_2;
  return 0;
 }
 if (VAR_4->LoginFlag == 0)
 {
  VAR_4->Error = VAR_1;
  return 0;
 }
 if (VAR_4->IsReadOnly)
 {
  VAR_4->Error = VAR_3;
  return 0;
 }


 if (VAR_4->Api->C_SetPIN(VAR_4->SessionId, VAR_5, FUNC_0(VAR_5),
  VAR_6, FUNC_0(VAR_6)) != VAR_0)
 {
  return 0;
 }

 return 1;
}
