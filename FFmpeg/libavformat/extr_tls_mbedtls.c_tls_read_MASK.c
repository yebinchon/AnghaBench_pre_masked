
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int ssl_context; } ;
typedef TYPE_2__ TLSContext ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    TLSContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    if ((VAR_4 = FUNC_1(&VAR_3->ssl_context, VAR_1, VAR_2)) > 0) {

        return VAR_4;
    }

    return FUNC_0(VAR_0, "mbedtls_ssl_read", VAR_4);
}
