
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pub_key; int p; int * priv_key; int g; } ;
typedef TYPE_1__ FF_DH ;
typedef int * FFBigNum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static FFBigNum FUNC_5(FF_DH *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_3(VAR_1->p) - 1;
    if (VAR_2 <= 0 || VAR_2 > VAR_0)
        return ((void*)0);

    FUNC_2(VAR_1->priv_key);
    if (!VAR_1->priv_key)
        return ((void*)0);
    FUNC_4(VAR_1->priv_key, 8 * VAR_2);

    FUNC_2(VAR_1->pub_key);
    if (!VAR_1->pub_key) {
        FUNC_0(VAR_1->priv_key);
        return ((void*)0);
    }

    if (FUNC_1(VAR_1->pub_key, VAR_1->g, VAR_1->priv_key, VAR_1->p) < 0)
        return ((void*)0);

    return VAR_1->pub_key;
}
