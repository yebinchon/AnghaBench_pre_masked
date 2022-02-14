
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8_t ;
typedef int u32_t ;
struct bt_mesh_subnet_keys {int const* net_id; int beacon; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int ,int const,int const*,int ,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*,int) ;

__attribute__((used)) static bool FUNC_4(struct bt_mesh_subnet_keys *VAR_0,
                       const u8_t VAR_1[8], u8_t VAR_2,
                       u32_t VAR_3, const u8_t VAR_4[8])
{
    u8_t VAR_5[8];

    if (FUNC_3(VAR_1, VAR_0->net_id, 8)) {
        return 0;
    }

    FUNC_2(VAR_0->beacon, VAR_2, VAR_0->net_id, VAR_3,
                        VAR_5);

    if (FUNC_3(VAR_4, VAR_5, 8)) {
        FUNC_0("Authentication Value %s != %s",
                FUNC_1(VAR_4, 8), FUNC_1(VAR_5, 8));
        return 0;
    }

    return 1;
}
