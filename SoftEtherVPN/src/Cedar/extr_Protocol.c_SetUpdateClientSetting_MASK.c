
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UPDATE_CLIENT_SETTING ;
struct TYPE_3__ {int HaltEvent; int Setting; } ;
typedef TYPE_1__ UPDATE_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(UPDATE_CLIENT *VAR_0, UPDATE_CLIENT_SETTING *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(&VAR_0->Setting, VAR_1, sizeof(UPDATE_CLIENT_SETTING));

 FUNC_1(VAR_0->HaltEvent);
}
