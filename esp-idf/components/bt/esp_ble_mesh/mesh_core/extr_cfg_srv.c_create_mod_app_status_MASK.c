
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_model {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_buf_simple*,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct net_buf_simple*,int) ;
 int FUNC_3 (struct net_buf_simple*,int ) ;
 int FUNC_4 (struct net_buf_simple*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_buf_simple *VAR_1,
                                  struct bt_mesh_model *VAR_2, bool VAR_3,
                                  u16_t VAR_4, u16_t VAR_5,
                                  u8_t VAR_6, u8_t *VAR_7)
{
    FUNC_0(VAR_1, VAR_0);

    FUNC_4(VAR_1, VAR_6);
    FUNC_3(VAR_1, VAR_4);
    FUNC_3(VAR_1, VAR_5);

    if (VAR_3) {
        FUNC_1(FUNC_2(VAR_1, 4), VAR_7, 4);
    } else {
        FUNC_1(FUNC_2(VAR_1, 2), VAR_7, 2);
    }
}
