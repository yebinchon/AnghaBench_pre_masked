
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int is_streamed; } ;
struct TYPE_9__ {int flags; int encrypt_key; void* aes_encrypt; TYPE_4__* hd; int decrypt_key; void* aes_decrypt; int ivlen; int iv; int encrypt_ivlen; int encrypt_iv; int keylen; int key; int encrypt_keylen; int decrypt_ivlen; int decrypt_iv; int decrypt_keylen; } ;
typedef TYPE_2__ CryptoContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char const*) ;
 int FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (TYPE_4__**,char const*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_6, const char *VAR_7, int VAR_8, AVDictionary **VAR_9)
{
    const char *VAR_10;
    int VAR_11 = 0;
    CryptoContext *VAR_12 = VAR_6->priv_data;
    VAR_12->flags = VAR_8;

    if (!FUNC_4(VAR_7, "crypto+", &VAR_10) &&
        !FUNC_4(VAR_7, "crypto:", &VAR_10)) {
        FUNC_3(VAR_6, VAR_2, "Unsupported url %s\n", VAR_7);
        VAR_11 = FUNC_0(VAR_4);
        goto err;
    }

    if (VAR_8 & VAR_0) {
        if ((VAR_11 = FUNC_6(VAR_6, &VAR_12->decrypt_key, &VAR_12->decrypt_keylen,
                               VAR_12->key, VAR_12->keylen, "decryption key")) < 0)
            goto err;
        if ((VAR_11 = FUNC_6(VAR_6, &VAR_12->decrypt_iv, &VAR_12->decrypt_ivlen,
                               VAR_12->iv, VAR_12->ivlen, "decryption IV")) < 0)
            goto err;
    }

    if (VAR_8 & VAR_1) {
        if ((VAR_11 = FUNC_6(VAR_6, &VAR_12->encrypt_key, &VAR_12->encrypt_keylen,
                               VAR_12->key, VAR_12->keylen, "encryption key")) < 0)
        if (VAR_11 < 0)
            goto err;
        if ((VAR_11 = FUNC_6(VAR_6, &VAR_12->encrypt_iv, &VAR_12->encrypt_ivlen,
                               VAR_12->iv, VAR_12->ivlen, "encryption IV")) < 0)
            goto err;
    }

    if ((VAR_11 = FUNC_5(&VAR_12->hd, VAR_10, VAR_8,
                                    &VAR_6->interrupt_callback, VAR_9,
                                    VAR_6->protocol_whitelist, VAR_6->protocol_blacklist, VAR_6)) < 0) {
        FUNC_3(VAR_6, VAR_2, "Unable to open resource: %s\n", VAR_10);
        goto err;
    }

    if (VAR_8 & VAR_0) {
        VAR_12->aes_decrypt = FUNC_1();
        if (!VAR_12->aes_decrypt) {
            VAR_11 = FUNC_0(VAR_5);
            goto err;
        }
        VAR_11 = FUNC_2(VAR_12->aes_decrypt, VAR_12->decrypt_key, VAR_3 * 8, 1);
        if (VAR_11 < 0)
            goto err;


        if (VAR_12->hd->is_streamed)
            VAR_6->is_streamed = VAR_12->hd->is_streamed;
    }

    if (VAR_8 & VAR_1) {
        VAR_12->aes_encrypt = FUNC_1();
        if (!VAR_12->aes_encrypt) {
            VAR_11 = FUNC_0(VAR_5);
            goto err;
        }
        VAR_11 = FUNC_2(VAR_12->aes_encrypt, VAR_12->encrypt_key, VAR_3 * 8, 0);
        if (VAR_11 < 0)
            goto err;


        VAR_6->is_streamed = 1;
    }

err:
    return VAR_11;
}
