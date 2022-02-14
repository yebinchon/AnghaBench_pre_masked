
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct bt_mesh_send_cb {int (* start ) (int ,int,void*) ;} ;


 int FUNC_0 (int ,int,void*) ;

__attribute__((used)) static inline void FUNC_1(u16_t VAR_0, int VAR_1,
                                  const struct bt_mesh_send_cb *VAR_2,
                                  void *VAR_3)
{
    if (VAR_2 && VAR_2->start) {
        VAR_2->start(VAR_0, VAR_1, VAR_3);
    }
}
