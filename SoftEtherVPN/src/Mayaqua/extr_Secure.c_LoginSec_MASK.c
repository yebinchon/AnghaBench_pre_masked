
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int SessionCreated; int LoginFlag; int Error; int SessionId; TYPE_1__* Api; } ;
struct TYPE_5__ {scalar_t__ (* C_Login ) (int ,int ,char*,int ) ;} ;
typedef TYPE_2__ SECURE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int ) ;

bool FUNC_3(SECURE *VAR_6, char *VAR_7)
{

 if (VAR_6 == ((void*)0))
 {
  return 0;
 }
 if (VAR_6->SessionCreated == 0)
 {
  VAR_6->Error = VAR_5;
  return 0;

 }
 if (VAR_6->LoginFlag)
 {
  VAR_6->Error = VAR_2;
  return 0;
 }
 if (VAR_7 == ((void*)0))
 {
  VAR_6->Error = VAR_4;
  return 0;
 }


 if (VAR_6->Api->C_Login(VAR_6->SessionId, VAR_1, VAR_7, FUNC_1(VAR_7)) != VAR_0)
 {

  VAR_6->Error = VAR_3;
  return 0;
 }


 FUNC_0(VAR_6);

 VAR_6->LoginFlag = 1;

 return 1;
}
