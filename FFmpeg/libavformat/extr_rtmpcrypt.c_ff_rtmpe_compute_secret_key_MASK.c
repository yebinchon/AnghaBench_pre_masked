
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int secret_key ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int key_in; int key_out; int dh; } ;
typedef TYPE_2__ RTMPEContext ;


 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int ,int const*,int,int *,int) ;
 int FUNC_2 (int const*,int,int ,int *,int,int *) ;
 int FUNC_3 (int const*,int,int,int) ;

int FUNC_4(URLContext *VAR_0, const uint8_t *VAR_1,
                                const uint8_t *VAR_2, int VAR_3)
{
    RTMPEContext *VAR_4 = VAR_0->priv_data;
    uint8_t VAR_5[128], VAR_6[32];
    int VAR_7, VAR_8;
    int VAR_9;

    if (VAR_3) {
        if ((VAR_7 = FUNC_3(VAR_1, 1532, 632, 772)) < 0)
            return VAR_7;
    } else {
        if ((VAR_7 = FUNC_3(VAR_1, 768, 632, 8)) < 0)
            return VAR_7;
    }

    if ((VAR_8 = FUNC_3(VAR_2, 768, 632, 8)) < 0)
        return VAR_8;


    if ((VAR_9 = FUNC_1(VAR_4->dh, VAR_1 + VAR_7,
                                               128, VAR_5, sizeof(VAR_5))) < 0)
        return VAR_9;


    if ((VAR_9 = FUNC_2(VAR_1 + VAR_7, 128, 0, VAR_5,
                                   128, VAR_6)) < 0)
        return VAR_9;
    FUNC_0(&VAR_4->key_out, VAR_6, 16 * 8, 1);


    if ((VAR_9 = FUNC_2(VAR_2 + VAR_8, 128, 0, VAR_5,
                                   128, VAR_6)) < 0)
        return VAR_9;
    FUNC_0(&VAR_4->key_in, VAR_6, 16 * 8, 1);

    return 0;
}
