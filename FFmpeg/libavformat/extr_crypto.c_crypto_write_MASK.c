
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int pad_len; unsigned char const* pad; int * write_buf; int hd; int encrypt_iv; int aes_encrypt; int write_buf_size; } ;
typedef TYPE_2__ CryptoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,unsigned char const*,int,int ,int ) ;
 int FUNC_2 (int **,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    CryptoContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10 = 0;

    VAR_6 = VAR_4 + VAR_5->pad_len;
    VAR_8 = VAR_6 % VAR_0;
    VAR_9 = VAR_6 - VAR_8;
    VAR_7 = VAR_9 / VAR_0;

    if (VAR_9) {
        FUNC_2(&VAR_5->write_buf, &VAR_5->write_buf_size, VAR_9);

        if (!VAR_5->write_buf)
            return FUNC_0(VAR_1);

        if (VAR_5->pad_len) {
            FUNC_4(&VAR_5->pad[VAR_5->pad_len], VAR_3, VAR_0 - VAR_5->pad_len);
            FUNC_1(VAR_5->aes_encrypt, VAR_5->write_buf, VAR_5->pad, 1, VAR_5->encrypt_iv, 0);
            VAR_7--;
        }

        FUNC_1(VAR_5->aes_encrypt,
                     &VAR_5->write_buf[VAR_5->pad_len ? VAR_0 : 0],
                     &VAR_3[VAR_5->pad_len ? VAR_0 - VAR_5->pad_len : 0],
                     VAR_7, VAR_5->encrypt_iv, 0);

        VAR_10 = FUNC_3(VAR_5->hd, VAR_5->write_buf, VAR_9);
        if (VAR_10 < 0)
            return VAR_10;

        FUNC_4(VAR_5->pad, &VAR_3[VAR_4 - VAR_8], VAR_8);
    } else
        FUNC_4(&VAR_5->pad[VAR_5->pad_len], VAR_3, VAR_4);

    VAR_5->pad_len = VAR_8;

    return VAR_4;
}
