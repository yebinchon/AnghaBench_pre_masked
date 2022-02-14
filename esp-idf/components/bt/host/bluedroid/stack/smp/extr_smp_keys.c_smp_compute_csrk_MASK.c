
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSMP_STATUS ;
typedef int tSMP_INT_DATA ;
struct TYPE_8__ {int param_buf; } ;
typedef TYPE_1__ tSMP_ENC ;
struct TYPE_9__ {int div; scalar_t__ csrk; scalar_t__ smp_over_br; } ;
typedef TYPE_2__ tSMP_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_OCTET16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;

void FUNC_10(tSMP_CB *VAR_4, tSMP_INT_DATA *VAR_5)
{
    FUNC_5(VAR_5);

    BT_OCTET16 VAR_6;
    UINT8 VAR_7[4];
    UINT16 VAR_8 = 1;
    UINT8 *VAR_9 = VAR_7;
    tSMP_ENC VAR_10;
    tSMP_STATUS VAR_11 = VAR_3;

    FUNC_2 ("smp_compute_csrk div=%x\n", VAR_4->div);
    FUNC_0(VAR_6);

    FUNC_4(VAR_9, VAR_4->div);
    FUNC_4(VAR_9, VAR_8);

    if (!FUNC_1(VAR_6, VAR_0, VAR_7, 4, &VAR_10)) {
        FUNC_3("smp_generate_csrk failed\n");
        if (VAR_4->smp_over_br) {

            FUNC_7(VAR_4, VAR_2, &VAR_11);

        } else {
            FUNC_9(VAR_4, VAR_1, &VAR_11);
        }
    } else {
        FUNC_6((void *)VAR_4->csrk, VAR_10.param_buf, VAR_0);
        FUNC_8(VAR_4, ((void*)0));
    }
}
