
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int aes_decrypt; int file_key; int file_iv; } ;
typedef TYPE_1__ MOVContext ;


 int FUNC_0 (int ,int *,int *,int,unsigned char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_0, int VAR_1, MOVContext *VAR_2)
{
    int VAR_3 = 0;
    unsigned char VAR_4[16];

    FUNC_2(VAR_4, VAR_2->file_iv, 16);
    VAR_3 = VAR_1 >> 4;
    FUNC_1(VAR_2->aes_decrypt, VAR_2->file_key, 128, 1);
    FUNC_0(VAR_2->aes_decrypt, VAR_0, VAR_0, VAR_3, VAR_4, 1);

    return 0;
}
