
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int lmp_subversion; int manufacturer; int lmp_version; int hci_revision; int hci_version; } ;
typedef TYPE_1__ bt_version_t ;
typedef int BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(
    BT_HDR *VAR_1,
    bt_version_t *VAR_2)
{

    uint8_t *VAR_3 = FUNC_4(VAR_1, VAR_0, 8 );
    FUNC_2(VAR_3 != ((void*)0));
    FUNC_1(VAR_2->hci_version, VAR_3);
    FUNC_0(VAR_2->hci_revision, VAR_3);
    FUNC_1(VAR_2->lmp_version, VAR_3);
    FUNC_0(VAR_2->manufacturer, VAR_3);
    FUNC_0(VAR_2->lmp_subversion, VAR_3);

    FUNC_3(VAR_1);
}
