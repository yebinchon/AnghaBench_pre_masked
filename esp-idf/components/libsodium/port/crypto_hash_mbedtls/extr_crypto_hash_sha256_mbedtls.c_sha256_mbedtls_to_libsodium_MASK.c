
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buffer; int state; int total; } ;
typedef TYPE_1__ mbedtls_sha256_context ;
struct TYPE_6__ {int * buf; int * state; int count; } ;
typedef TYPE_2__ crypto_hash_sha256_state ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(crypto_hash_sha256_state *VAR_0, const mbedtls_sha256_context *VAR_1)
{
    FUNC_0(&VAR_0->count, VAR_1->total, sizeof(VAR_0->count));
    FUNC_0(VAR_0->state, VAR_1->state, sizeof(VAR_0->state));
    FUNC_0(VAR_0->buf, VAR_1->buffer, sizeof(VAR_0->buf));
}
