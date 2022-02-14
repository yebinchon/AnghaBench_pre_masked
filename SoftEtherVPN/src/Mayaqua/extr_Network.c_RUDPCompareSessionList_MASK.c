
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int MyPort; int MyIp; int YourPort; int YourIp; } ;
typedef TYPE_1__ RUDP_SESSION ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

int FUNC_2(void *VAR_0, void *VAR_1)
{
 RUDP_SESSION *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *((RUDP_SESSION **)VAR_0);
 VAR_3 = *((RUDP_SESSION **)VAR_1);
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_1(&VAR_2->YourIp, &VAR_3->YourIp);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->YourPort, VAR_3->YourPort);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_1(&VAR_2->MyIp, &VAR_3->MyIp);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->MyPort, VAR_3->MyPort);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return 0;
}
