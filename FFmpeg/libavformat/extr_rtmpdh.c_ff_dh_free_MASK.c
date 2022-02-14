
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priv_key; int pub_key; int g; int p; } ;
typedef TYPE_1__ FF_DH ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(FF_DH *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_1(VAR_0->p);
    FUNC_1(VAR_0->g);
    FUNC_1(VAR_0->pub_key);
    FUNC_1(VAR_0->priv_key);
    FUNC_0(VAR_0);
}
