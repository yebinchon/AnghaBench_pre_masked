
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_send_cb {int (* end ) (int,void*) ;} ;


 int FUNC_0 (int,void*) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, const struct bt_mesh_send_cb *VAR_1,
                                void *VAR_2)
{
    if (VAR_1 && VAR_1->end) {
        VAR_1->end(VAR_0, VAR_2);
    }
}
