
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int NatTableForRecv; scalar_t__ IsRawIpMode; } ;
typedef int NATIVE_NAT_ENTRY ;
typedef TYPE_1__ NATIVE_NAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;

UINT FUNC_3(NATIVE_NAT *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6)
{
 UINT VAR_7;
 UINT VAR_8;
 UINT VAR_9 = 1025;
 UINT VAR_10 = 65500;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->IsRawIpMode)
 {
  VAR_9 = VAR_1;
  VAR_10 = VAR_0;
 }

 VAR_8 = FUNC_1() % (VAR_10 - VAR_9) + VAR_9;

 for (VAR_7 = 0;VAR_7 < (VAR_10 - VAR_9);VAR_7++)
 {
  UINT VAR_11;
  NATIVE_NAT_ENTRY VAR_12;
  NATIVE_NAT *VAR_13;

  VAR_11 = VAR_8 + VAR_7;
  if (VAR_11 > VAR_10)
  {
   VAR_11 = VAR_11 - VAR_10 + VAR_9;
  }


  FUNC_0(&VAR_12, VAR_3, 0, 0, VAR_4, VAR_5, VAR_6, VAR_11);

  VAR_13 = FUNC_2(VAR_2->NatTableForRecv, &VAR_12);

  if (VAR_13 == ((void*)0))
  {

   return VAR_11;
  }
 }

 return 0;
}
