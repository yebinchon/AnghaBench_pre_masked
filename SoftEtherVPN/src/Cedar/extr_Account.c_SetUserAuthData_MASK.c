
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ AuthType; int lock; void* AuthData; } ;
typedef TYPE_1__ USER ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int NtLmSecureHash; int HashedKey; } ;
typedef TYPE_2__ AUTHPASSWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,void*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

void FUNC_6(USER *VAR_4, UINT VAR_5, void *VAR_6)
{

 if (VAR_4 == ((void*)0))
 {
  return;
 }
 if (VAR_5 != VAR_0 && VAR_6 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_4->lock);
 {
  if (VAR_4->AuthType != VAR_0)
  {
   if (VAR_4->AuthType == VAR_1 && VAR_5 == VAR_1)
   {
    AUTHPASSWORD *VAR_7 = (AUTHPASSWORD *)VAR_4->AuthData;
    AUTHPASSWORD *VAR_8 = (AUTHPASSWORD *)VAR_6;




    if (FUNC_0(VAR_7->HashedKey, VAR_8->HashedKey, VAR_3) == 0)
    {
     if (FUNC_3(VAR_8->NtLmSecureHash, VAR_2))
     {
      FUNC_1(VAR_8->NtLmSecureHash, VAR_7->NtLmSecureHash, VAR_2);
     }
    }
   }


   FUNC_2(VAR_4->AuthType, VAR_4->AuthData);
  }

  VAR_4->AuthType = VAR_5;
  VAR_4->AuthData = VAR_6;
 }
 FUNC_5(VAR_4->lock);
}
