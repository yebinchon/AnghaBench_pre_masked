
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_send_cb {int (* end ) (int ,void*) ;int (* start ) (int ,int ,void*) ;} ;


 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static inline void FUNC_2(const struct bt_mesh_send_cb *VAR_0,
                                    void *VAR_1)
{
    if (!VAR_0) {
        return;
    }

    if (VAR_0->start) {
        VAR_0->start(0, 0, VAR_1);
    }

    if (VAR_0->end) {
        VAR_0->end(0, VAR_1);
    }
}
