
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ServerPort; int ClientPort; int ServerIP; int ClientIP; } ;
typedef TYPE_1__ IKE_CLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(void *VAR_0, void *VAR_1)
{
 IKE_CLIENT *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(IKE_CLIENT **)VAR_0;
 VAR_3 = *(IKE_CLIENT **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_1(&VAR_2->ClientIP, &VAR_3->ClientIP);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_1(&VAR_2->ServerIP, &VAR_3->ServerIP);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->ClientPort, VAR_3->ClientPort);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->ServerPort, VAR_3->ServerPort);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return 0;
}
