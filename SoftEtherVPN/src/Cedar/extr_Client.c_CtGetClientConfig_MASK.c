
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int Config; } ;
typedef int CLIENT_CONFIG ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(CLIENT *VAR_0, CLIENT_CONFIG *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0->lock);
 {
  FUNC_0(VAR_1, &VAR_0->Config, sizeof(CLIENT_CONFIG));
 }
 FUNC_2(VAR_0->lock);

 return 1;
}
