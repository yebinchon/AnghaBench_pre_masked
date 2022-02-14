
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
struct TYPE_7__ {TYPE_1__ tls_shared; scalar_t__ ctx; } ;
typedef TYPE_3__ TLSContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    TLSContext *VAR_1 = VAR_0->priv_data;
    if (VAR_1->ctx) {
        FUNC_1(VAR_1->ctx);
        FUNC_2(VAR_1->ctx);
    }
    if (VAR_1->tls_shared.tcp)
        FUNC_0(VAR_1->tls_shared.tcp);
    return 0;
}
