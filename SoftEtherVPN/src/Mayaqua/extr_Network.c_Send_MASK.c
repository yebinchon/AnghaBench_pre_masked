
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Type; int Connected; int ListenMode; scalar_t__ socket; int SecureMode; int WriteBlocked; scalar_t__ AsyncMode; int lock; int SendNum; int SendSize; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (scalar_t__,void*,scalar_t__,int ) ;

UINT FUNC_8(SOCK *VAR_9, void *VAR_10, UINT VAR_11, bool VAR_12)
{
 SOCKET VAR_13;
 int VAR_14;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == 0)
 {
  return 0;
 }
 if (VAR_9->Type == VAR_4)
 {
  return FUNC_4(VAR_9, VAR_10, VAR_11);
 }
 VAR_11 = FUNC_2(VAR_11, VAR_2);
 if (VAR_9->Type != VAR_6 || VAR_9->Connected == 0 || VAR_9->ListenMode != 0 ||
  VAR_9->socket == VAR_1)
 {
  return 0;
 }
 if (VAR_12 != 0 && VAR_9->SecureMode == 0)
 {
  return 0;
 }

 if (VAR_12)
 {
  return FUNC_3(VAR_9, VAR_10, VAR_11);
 }


 VAR_13 = VAR_9->socket;
 VAR_14 = FUNC_7(VAR_13, VAR_10, VAR_11, 0);
 if (VAR_14 > 0)
 {

  FUNC_1(VAR_9->lock);
  {
   VAR_9->SendSize += (UINT64)VAR_14;
   VAR_9->SendNum++;
  }
  FUNC_5(VAR_9->lock);
  VAR_9->WriteBlocked = 0;
  return (UINT)VAR_14;
 }


 if (VAR_9->AsyncMode)
 {

  if (VAR_14 == VAR_3)
  {
   if (VAR_8 == VAR_0)
   {

    VAR_9->WriteBlocked = 1;
    return VAR_5;
   }

  }
 }


 FUNC_0(VAR_9);
 return 0;
}
