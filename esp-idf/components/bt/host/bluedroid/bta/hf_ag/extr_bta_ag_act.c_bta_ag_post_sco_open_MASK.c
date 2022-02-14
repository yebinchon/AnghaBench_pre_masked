
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int post_sco; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;

 void* VAR_1 ;

 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(tBTA_AG_SCB *VAR_2, tBTA_AG_DATA *VAR_3)
{
    switch (VAR_2->post_sco) {
        case 128:
            FUNC_1(VAR_2, VAR_3);
            VAR_2->post_sco = VAR_1;
            break;

        case 129:
            FUNC_0(VAR_2, VAR_0);
            VAR_2->post_sco = VAR_1;
            break;

        default:
            break;
    }
}
