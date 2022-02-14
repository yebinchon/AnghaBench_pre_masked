
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SRTPContext {int * hmac; int aes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct SRTPContext *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0(&VAR_0->aes);
    if (VAR_0->hmac)
        FUNC_1(VAR_0->hmac);
    VAR_0->hmac = ((void*)0);
}
