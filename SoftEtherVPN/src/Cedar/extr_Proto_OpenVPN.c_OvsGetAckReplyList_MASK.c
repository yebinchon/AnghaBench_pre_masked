
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int * AckReplyList; } ;
typedef TYPE_1__ OPENVPN_CHANNEL ;
typedef int LIST ;


 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int * FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;

UINT FUNC_8(OPENVPN_CHANNEL *VAR_1, UINT *VAR_2)
{
 UINT VAR_3;
 LIST *VAR_4 = ((void*)0);
 UINT VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_5(FUNC_4(VAR_1->AckReplyList), VAR_0);

 for (VAR_3 = 0;VAR_3 < VAR_5;VAR_3++)
 {
  UINT *VAR_6 = FUNC_3(VAR_1->AckReplyList, VAR_3);

  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_6(((void*)0));
  }

  FUNC_0(VAR_4, VAR_6);

  VAR_2[VAR_3] = *VAR_6;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_4);VAR_3++)
 {
  UINT *VAR_7 = FUNC_3(VAR_4, VAR_3);

  FUNC_1(VAR_1->AckReplyList, VAR_7);

  FUNC_2(VAR_7);
 }

 FUNC_7(VAR_4);

 return VAR_5;
}
