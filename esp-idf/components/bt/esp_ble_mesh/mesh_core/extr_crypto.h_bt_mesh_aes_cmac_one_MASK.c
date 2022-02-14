
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_sg {void const* member_0; size_t member_1; } ;


 int FUNC_0 (int const*,struct bt_mesh_sg*,int,int *) ;

__attribute__((used)) static inline int FUNC_1(const u8_t VAR_0[16], const void *VAR_1,
                                       size_t VAR_2, u8_t VAR_3[16])
{
    struct bt_mesh_sg VAR_4 = { VAR_1, VAR_2 };

    return FUNC_0(VAR_0, &VAR_4, 1, VAR_3);
}
