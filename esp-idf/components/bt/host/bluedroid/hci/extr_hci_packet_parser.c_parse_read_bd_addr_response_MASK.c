
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int address; } ;
typedef TYPE_1__ bt_bdaddr_t ;
typedef int BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(
    BT_HDR *VAR_1,
    bt_bdaddr_t *VAR_2)
{

    uint8_t *VAR_3 = FUNC_3(VAR_1, VAR_0, sizeof(bt_bdaddr_t) );
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0(VAR_2->address, VAR_3);

    FUNC_2(VAR_1);
}
