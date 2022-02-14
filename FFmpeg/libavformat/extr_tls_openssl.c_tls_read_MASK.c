
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int flags; TYPE_4__* priv_data; } ;
typedef TYPE_3__ URLContext ;
struct TYPE_8__ {TYPE_1__* tcp; } ;
struct TYPE_10__ {int ssl; TYPE_2__ tls_shared; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_4__ TLSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    TLSContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;

    VAR_5->tls_shared.tcp->flags &= ~VAR_1;
    VAR_5->tls_shared.tcp->flags |= VAR_2->flags & VAR_1;
    VAR_6 = FUNC_0(VAR_5->ssl, VAR_3, VAR_4);
    if (VAR_6 > 0)
        return VAR_6;
    if (VAR_6 == 0)
        return VAR_0;
    return FUNC_1(VAR_2, VAR_6);
}
