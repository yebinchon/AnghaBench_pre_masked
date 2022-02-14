
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct net_buf_simple {int len; } ;
struct bt_mesh_model {int dummy; } ;
struct bt_mesh_elem {int addr; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 struct bt_mesh_model* FUNC_1 (struct bt_mesh_elem*,int ) ;
 struct bt_mesh_model* FUNC_2 (struct bt_mesh_elem*,int ,int ) ;
 int FUNC_3 (struct net_buf_simple*) ;

__attribute__((used)) static struct bt_mesh_model *FUNC_4(struct bt_mesh_elem *VAR_0,
                                       struct net_buf_simple *VAR_1, bool *VAR_2)
{
    if (VAR_1->len < 4) {
        u16_t VAR_3;

        VAR_3 = FUNC_3(VAR_1);

        FUNC_0("ID 0x%04x addr 0x%04x", VAR_3, VAR_0->addr);

        *VAR_2 = 0;

        return FUNC_1(VAR_0, VAR_3);
    } else {
        u16_t VAR_4, VAR_5;

        VAR_4 = FUNC_3(VAR_1);
        VAR_5 = FUNC_3(VAR_1);

        FUNC_0("Company 0x%04x ID 0x%04x addr 0x%04x", VAR_4, VAR_5,
               VAR_0->addr);

        *VAR_2 = 1;

        return FUNC_2(VAR_0, VAR_4, VAR_5);
    }
}
