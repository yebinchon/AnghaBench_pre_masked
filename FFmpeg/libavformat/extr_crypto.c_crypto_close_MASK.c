
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {size_t pad_len; scalar_t__ write_buf; scalar_t__ aes_encrypt; scalar_t__ aes_decrypt; scalar_t__ hd; int encrypt_iv; int * pad; } ;
typedef TYPE_2__ CryptoContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int *,int,int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_1)
{
    CryptoContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 0;

    if (VAR_2->aes_encrypt) {
        uint8_t VAR_4[VAR_0];
        int VAR_5 = VAR_0 - VAR_2->pad_len;

        FUNC_4(&VAR_2->pad[VAR_2->pad_len], VAR_5, VAR_5);
        FUNC_0(VAR_2->aes_encrypt, VAR_4, VAR_2->pad, 1, VAR_2->encrypt_iv, 0);
        VAR_3 = FUNC_3(VAR_2->hd, VAR_4, VAR_0);
    }

    if (VAR_2->hd)
        FUNC_2(VAR_2->hd);
    FUNC_1(&VAR_2->aes_decrypt);
    FUNC_1(&VAR_2->aes_encrypt);
    FUNC_1(&VAR_2->write_buf);
    return VAR_3;
}
