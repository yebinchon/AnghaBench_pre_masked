
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {scalar_t__ tcp; } ;
struct TYPE_7__ {TYPE_1__ tls_shared; scalar_t__ cred; scalar_t__ session; scalar_t__ need_shutdown; } ;
typedef TYPE_3__ TLSContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_1)
{
    TLSContext *VAR_2 = VAR_1->priv_data;
    if (VAR_2->need_shutdown)
        FUNC_2(VAR_2->session, VAR_0);
    if (VAR_2->session)
        FUNC_4(VAR_2->session);
    if (VAR_2->cred)
        FUNC_3(VAR_2->cred);
    if (VAR_2->tls_shared.tcp)
        FUNC_1(VAR_2->tls_shared.tcp);
    FUNC_0();
    return 0;
}
