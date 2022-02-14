
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSMP_CB ;
typedef int * UINT8 ;
struct TYPE_3__ {int offset; int len; } ;
typedef int BT_OCTET16 ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (int **,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static BT_HDR *FUNC_6(UINT8 VAR_4, tSMP_CB *VAR_5)
{
    BT_HDR *VAR_6 = ((void*)0) ;

    UINT8 *VAR_7;
    BT_OCTET16 VAR_8;
    FUNC_4(VAR_4);
    FUNC_4(VAR_5);

    FUNC_2("smp_build_identity_info_cmd\n");
    if ((VAR_6 = (BT_HDR *)FUNC_5(sizeof(BT_HDR) + VAR_2 + VAR_1)) != ((void*)0)) {
        VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_1;

        FUNC_1(VAR_8);

        FUNC_3 (VAR_7, VAR_3);
        FUNC_0 (VAR_7, VAR_8, VAR_0);

        VAR_6->offset = VAR_1;
        VAR_6->len = VAR_2;
    }


    return VAR_6;
}
