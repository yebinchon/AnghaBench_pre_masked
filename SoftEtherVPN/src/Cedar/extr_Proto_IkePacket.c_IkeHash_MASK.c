
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int HashId; } ;
typedef TYPE_1__ IKE_HASH ;







 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (void*,void*,scalar_t__) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int FUNC_4 (void*,void*,scalar_t__) ;
 int FUNC_5 (void*,scalar_t__) ;

void FUNC_6(IKE_HASH *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || (VAR_3 != 0 && VAR_2 == ((void*)0)))
 {
  FUNC_5(VAR_1, VAR_3);
  return;
 }

 switch (VAR_0->HashId)
 {
 case 132:

  FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 case 131:

  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_1, VAR_2, VAR_3);
  break;

 default:

  FUNC_5(VAR_1, VAR_3);
  break;
 }
}
