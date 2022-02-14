
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int NoNeedToRead; scalar_t__ Type; int Connected; int ListenMode; scalar_t__ socket; int SecureMode; int AsyncMode; int lock; int SendNum; int RecvSize; scalar_t__ CallingThread; } ;
typedef int SOCKET_TIMEOUT_PARAM ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,void*,scalar_t__,int ) ;

UINT FUNC_10(SOCK *VAR_8, void *VAR_9, UINT VAR_10, bool VAR_11)
{
 SOCKET VAR_12;
 int VAR_13;






 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == 0)
 {
  return 0;
 }

 VAR_8->NoNeedToRead = 0;

 if (VAR_8->Type == VAR_3)
 {
  return FUNC_4(VAR_8, VAR_9, VAR_10);
 }
 if (VAR_8->Type != VAR_5 || VAR_8->Connected == 0 || VAR_8->ListenMode != 0 ||
  VAR_8->socket == VAR_1)
 {
  return 0;
 }
 if (VAR_11 != 0 && VAR_8->SecureMode == 0)
 {
  return 0;
 }

 if (VAR_11)
 {
  return FUNC_5(VAR_8, VAR_9, VAR_10);
 }


 VAR_12 = VAR_8->socket;
 VAR_13 = FUNC_9(VAR_12, VAR_9, VAR_10, 0);
 if (VAR_13 > 0)
 {

  FUNC_2(VAR_8->lock);
  {
   VAR_8->RecvSize += (UINT64)VAR_13;
   VAR_8->SendNum++;
  }
  FUNC_6(VAR_8->lock);
  return (UINT)VAR_13;
 }


 if (VAR_8->AsyncMode)
 {

  if (VAR_13 == VAR_2)
  {
   if (VAR_7 == VAR_0)
   {

    return VAR_4;
   }

  }
 }


 FUNC_0(VAR_8);
 return 0;
}
