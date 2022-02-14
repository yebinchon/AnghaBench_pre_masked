
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_sg {int member_1; int const* member_0; } ;


 int FUNC_0 (struct bt_mesh_sg*) ;
 int FUNC_1 (int const*,struct bt_mesh_sg*,int ,int *) ;

__attribute__((used)) static inline int FUNC_2(const u8_t VAR_0[16],
                                    const u8_t VAR_1[16],
                                    const u8_t VAR_2[16],
                                    u8_t VAR_3[16])
{
    const u8_t VAR_4[16] = { 0 };
    struct bt_mesh_sg VAR_5[] = {
        { VAR_0, 16 },
        { VAR_1, 16 },
        { VAR_2, 16 },
    };

    return FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_5), VAR_3);
}
