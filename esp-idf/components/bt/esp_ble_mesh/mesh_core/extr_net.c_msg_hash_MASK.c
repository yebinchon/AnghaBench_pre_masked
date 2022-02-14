
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64_t ;
typedef int u32_t ;
struct net_buf_simple {int* data; } ;
struct bt_mesh_net_rx {int dummy; } ;


 int FUNC_0 (struct bt_mesh_net_rx*) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static u64_t FUNC_2(struct bt_mesh_net_rx *VAR_0, struct net_buf_simple *VAR_1)
{
    u32_t VAR_2, VAR_3;


    VAR_2 = (FUNC_0(VAR_0) << 8) | VAR_1->data[2];


    FUNC_1(&VAR_3, &VAR_1->data[3], 4);

    return (u64_t)VAR_2 << 32 | (u64_t)VAR_3;
}
