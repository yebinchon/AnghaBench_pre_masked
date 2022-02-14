
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ltk; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;
struct TYPE_6__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static BT_HDR *FUNC_5(UINT8 VAR_4, tSMP_CB *VAR_5)
{
    BT_HDR *VAR_6 = ((void*)0) ;
    UINT8 *VAR_7;
    FUNC_3(VAR_4);

    FUNC_1("smp_build_encrypt_info_cmd\n");
    if ((VAR_6 = (BT_HDR *)FUNC_4(sizeof(BT_HDR) + VAR_2 + VAR_1)) != ((void*)0)) {
        VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_1;

        FUNC_2 (VAR_7, VAR_3);
        FUNC_0 (VAR_7, VAR_5->ltk, VAR_0);

        VAR_6->offset = VAR_1;
        VAR_6->len = VAR_2;
    }

    return VAR_6;
}
