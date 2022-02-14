
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {int tcp; } ;
struct TYPE_7__ {TYPE_1__ tls_shared; } ;
typedef TYPE_3__ TLSContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0)
{
    TLSContext *VAR_1 = VAR_0->priv_data;
    return FUNC_0(VAR_1->tls_shared.tcp);
}
