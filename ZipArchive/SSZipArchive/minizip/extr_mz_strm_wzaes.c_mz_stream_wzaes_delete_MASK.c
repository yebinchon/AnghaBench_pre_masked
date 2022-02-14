
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hmac; int aes; } ;
typedef TYPE_1__ mz_stream_wzaes ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void **VAR_0)
{
    mz_stream_wzaes *VAR_1 = ((void*)0);
    if (VAR_0 == ((void*)0))
        return;
    VAR_1 = (mz_stream_wzaes *)*VAR_0;
    if (VAR_1 != ((void*)0))
    {
        FUNC_1(&VAR_1->aes);
        FUNC_2(&VAR_1->hmac);
        FUNC_0(VAR_1);
    }
    *VAR_0 = ((void*)0);
}
