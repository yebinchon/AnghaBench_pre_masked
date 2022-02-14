
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8_t ;
typedef int (* bt_mesh_dh_key_cb_t ) (int const*,int const) ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

int FUNC_3(const u8_t VAR_2[64], bt_mesh_dh_key_cb_t VAR_3, const u8_t VAR_4)
{
    uint8_t VAR_5[32];

    FUNC_0("private key = %s", FUNC_2(VAR_1, VAR_0));

    FUNC_1((uint8_t *)&VAR_2[0], (uint8_t *)&VAR_2[32], VAR_1, VAR_5);

    if (VAR_3 != ((void*)0)) {
        VAR_3((const u8_t *)VAR_5, VAR_4);
    }
    return 0;
}
