
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int HashId; } ;
typedef int MD ;
typedef TYPE_1__ IKE_HASH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;





 scalar_t__ FUNC_2 (int *,void*,void*,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,void*,int ) ;

void FUNC_5(IKE_HASH *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5)
{
 MD *VAR_6 = ((void*)0);

 switch (VAR_0->HashId)
 {
 case 132:
  VAR_6 = FUNC_3("MD5");
  break;
 case 131:
  VAR_6 = FUNC_3("SHA1");
  break;
 case 130:
  VAR_6 = FUNC_3("SHA256");
  break;
 case 129:
  VAR_6 = FUNC_3("SHA384");
  break;
 case 128:
  VAR_6 = FUNC_3("SHA512");
  break;
 }

 if (VAR_6 == ((void*)0))
 {
  FUNC_0("IkeHMac(): The MD object is NULL! Either NewMd() failed or the current algorithm is not handled by the switch-case block.\n");
  return;
 }

 if (FUNC_4(VAR_6, VAR_2, VAR_3) == 0)
 {
  FUNC_0("IkeHMac(): SetMdKey() failed!\n");
  goto cleanup;
 }

 if (FUNC_2(VAR_6, VAR_1, VAR_4, VAR_5) == 0)
 {
  FUNC_0("IkeHMac(): MdProcess() returned 0!\n");
 }

cleanup:
 FUNC_1(VAR_6);
}
