
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct blufi_security {int dummy; } ;
struct TYPE_4__ {int aes; int dhm; struct TYPE_4__* dh_param; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

void FUNC_4(void)
{
    if (VAR_0 == ((void*)0)) {
        return;
    }
    if (VAR_0->dh_param){
        FUNC_0(VAR_0->dh_param);
        VAR_0->dh_param = ((void*)0);
    }
    FUNC_2(&VAR_0->dhm);
    FUNC_1(&VAR_0->aes);

    FUNC_3(VAR_0, 0x0, sizeof(struct blufi_security));

    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);
}
