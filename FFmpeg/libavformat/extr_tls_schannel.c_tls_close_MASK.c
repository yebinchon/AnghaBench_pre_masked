
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_6__ {scalar_t__ tcp; } ;
struct TYPE_8__ {TYPE_1__ tls_shared; scalar_t__ dec_buf_offset; scalar_t__ dec_buf_size; int dec_buf; scalar_t__ enc_buf_offset; scalar_t__ enc_buf_size; int enc_buf; int cred_handle; int ctxt_handle; } ;
typedef TYPE_3__ TLSContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_0)
{
    TLSContext *VAR_1 = VAR_0->priv_data;

    FUNC_4(VAR_0);

    FUNC_0(&VAR_1->ctxt_handle);
    FUNC_1(&VAR_1->cred_handle);

    FUNC_2(&VAR_1->enc_buf);
    VAR_1->enc_buf_size = VAR_1->enc_buf_offset = 0;

    FUNC_2(&VAR_1->dec_buf);
    VAR_1->dec_buf_size = VAR_1->dec_buf_offset = 0;

    if (VAR_1->tls_shared.tcp)
        FUNC_3(VAR_1->tls_shared.tcp);
    return 0;
}
