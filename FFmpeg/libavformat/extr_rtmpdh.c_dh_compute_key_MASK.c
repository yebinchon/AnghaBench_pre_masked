
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int p; int priv_key; } ;
typedef TYPE_1__ FF_DH ;
typedef int FFBigNum ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(FF_DH *VAR_0, FFBigNum VAR_1,
                          uint32_t VAR_2, uint8_t *VAR_3)
{
    FFBigNum VAR_4;
    int VAR_5;

    FUNC_3(VAR_4);
    if (!VAR_4)
        return -1;

    if ((VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_0->priv_key, VAR_0->p)) < 0) {
        FUNC_1(VAR_4);
        return VAR_5;
    }
    FUNC_0(VAR_4, VAR_3, VAR_2);
    FUNC_1(VAR_4);


    return VAR_2;
}
