
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int post_sco; int features; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(tBTA_AG_SCB *VAR_7, tBTA_AG_DATA *VAR_8)
{
    switch (VAR_7->post_sco) {
        case 128:
            FUNC_1(VAR_7, VAR_8);
            VAR_7->post_sco = VAR_5;
            break;

        case 132:
            FUNC_3(VAR_7, VAR_2);
            VAR_7->post_sco = VAR_5;
            break;

        case 129:
            FUNC_3(VAR_7, VAR_4);
            VAR_7->post_sco = VAR_5;
            break;

        case 131:
            FUNC_3(VAR_7, VAR_0);
            VAR_7->post_sco = VAR_5;
            break;

        case 130:
        {
            FUNC_3(VAR_7, VAR_0);

            FUNC_3(VAR_7, VAR_3);

            if (FUNC_0(VAR_7) && !(VAR_7->features & VAR_1)) {
                VAR_7->post_sco = VAR_6;
                FUNC_2(VAR_7, VAR_8);
            } else {
                VAR_7->post_sco = VAR_5;
                FUNC_4(VAR_7, VAR_8);
            }
            break;
        }

        default:
            break;
    }
}
