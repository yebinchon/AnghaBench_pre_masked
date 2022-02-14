
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSMP_ENC ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ BT_OCTET16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ,TYPE_1__,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOLEAN FUNC_3(BT_OCTET16 VAR_3)
{
    BT_OCTET16 VAR_4 = {0};
    BOOLEAN VAR_5 = VAR_2;
    tSMP_ENC VAR_6;
    FUNC_1 (" cmac_generate_subkey");

    if (FUNC_0(VAR_3, VAR_0, VAR_4, VAR_0, &VAR_6)) {
        FUNC_2(&VAR_6);;
    } else {
        VAR_5 = VAR_1;
    }

    return VAR_5;
}
