
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int key_bytes; int key; } ;
typedef TYPE_1__ esp_aes_context ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*,unsigned int) ;

int FUNC_1( esp_aes_context *VAR_1, const unsigned char *VAR_2,
                    unsigned int VAR_3 )
{
    if (VAR_3 != 128 && VAR_3 != 192 && VAR_3 != 256) {
        return VAR_0;
    }
    VAR_1->key_bytes = VAR_3 / 8;
    FUNC_0(VAR_1->key, VAR_2, VAR_1->key_bytes);
    return 0;
}
