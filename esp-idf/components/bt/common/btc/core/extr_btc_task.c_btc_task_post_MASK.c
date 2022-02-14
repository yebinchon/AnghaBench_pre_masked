
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int btc_msg_t ;
typedef int bt_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;

__attribute__((used)) static bt_status_t FUNC_3(btc_msg_t *VAR_5, uint32_t VAR_6)
{
    btc_msg_t *VAR_7;

    VAR_7 = (btc_msg_t *)FUNC_1(sizeof(btc_msg_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_7, VAR_5, sizeof(btc_msg_t));

    if (FUNC_2(VAR_3, VAR_4, VAR_7, 0, VAR_6) == 0) {
        return VAR_0;
    }

    return VAR_2;
}
