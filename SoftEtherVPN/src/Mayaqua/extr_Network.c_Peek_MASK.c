
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ Type; int Connected; int ListenMode; scalar_t__ socket; scalar_t__ AsyncMode; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ SOCK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,void*,int,int ) ;

UINT FUNC_1(SOCK *VAR_4, void *VAR_5, UINT VAR_6)
{
 SOCKET VAR_7;
 int VAR_8;


 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0)
 {
  return 0;
 }
 if (VAR_4->Type == VAR_2)
 {
  return 0;
 }
 if (VAR_4->Type != VAR_3 || VAR_4->Connected == 0 || VAR_4->ListenMode != 0 ||
  VAR_4->socket == VAR_0)
 {
  return 0;
 }
 if (VAR_4->AsyncMode)
 {
  return 0;
 }


 VAR_7 = VAR_4->socket;

 VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_6, VAR_1);



 if (VAR_8 > 0)
 {
  return VAR_8;
 }

 return 0;
}
