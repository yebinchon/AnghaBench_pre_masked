
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int proxy_auth_state; int auth_state; } ;
typedef TYPE_2__ HTTPContext ;
typedef int HTTPAuthState ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(URLContext *VAR_0, const URLContext *VAR_1)
{
    FUNC_0(&((HTTPContext *)VAR_0->priv_data)->auth_state,
           &((HTTPContext *)VAR_1->priv_data)->auth_state,
           sizeof(HTTPAuthState));
    FUNC_0(&((HTTPContext *)VAR_0->priv_data)->proxy_auth_state,
           &((HTTPContext *)VAR_1->priv_data)->proxy_auth_state,
           sizeof(HTTPAuthState));
}
