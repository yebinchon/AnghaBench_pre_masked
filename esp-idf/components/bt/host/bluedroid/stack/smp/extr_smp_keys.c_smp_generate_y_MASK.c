
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSMP_STATUS ;
typedef int tSMP_INT_DATA ;
typedef int tSMP_ENC ;
struct TYPE_5__ {int enc_rand; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int BT_OCTET16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void FUNC_7(tSMP_CB *VAR_4, tSMP_INT_DATA *VAR_5)
{
    FUNC_4(VAR_5);

    BT_OCTET16 VAR_6;
    tSMP_ENC VAR_7;
    tSMP_STATUS VAR_8 = VAR_3;


    FUNC_2 ("smp_generate_y \n");
    FUNC_0(VAR_6);

    if (!FUNC_1(VAR_6, VAR_0, VAR_4->enc_rand,
                     VAR_1, &VAR_7)) {
        FUNC_3("smp_generate_y failed");
        FUNC_6(VAR_4, VAR_2, &VAR_8);
    } else {
        FUNC_5(VAR_4, &VAR_7);
    }
}
