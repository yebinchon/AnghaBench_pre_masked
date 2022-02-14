
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_sg {int member_1; int const* member_0; } ;


 int FUNC_0 (struct bt_mesh_sg*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,struct bt_mesh_sg*,int ,int *) ;

int FUNC_4(const u8_t VAR_0[16], const u8_t VAR_1[16],
                      const u8_t VAR_2[16], u8_t VAR_3[16])
{
    struct bt_mesh_sg VAR_4[] = { { VAR_1, 16 }, { VAR_2, 16 } };

    FUNC_1("ConfirmationKey %s", FUNC_2(VAR_0, 16));
    FUNC_1("RandomDevice %s", FUNC_2(VAR_1, 16));
    FUNC_1("AuthValue %s", FUNC_2(VAR_2, 16));

    return FUNC_3(VAR_0, VAR_4, FUNC_0(VAR_4), VAR_3);
}
