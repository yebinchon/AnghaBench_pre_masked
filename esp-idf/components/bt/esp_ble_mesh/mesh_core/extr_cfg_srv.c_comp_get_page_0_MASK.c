
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_comp {unsigned int cid; unsigned int pid; unsigned int vid; int elem_count; int * elem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 struct bt_mesh_comp* FUNC_1 () ;
 int FUNC_2 (struct net_buf_simple*,int *,int) ;
 int FUNC_3 (struct net_buf_simple*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct net_buf_simple *VAR_9)
{
    u16_t VAR_10 = 0U;
    const struct bt_mesh_comp *VAR_11;
    int VAR_12;

    VAR_11 = FUNC_1();

    if (FUNC_0(VAR_8)) {
        VAR_10 |= VAR_3;
    }

    if (FUNC_0(VAR_6)) {
        VAR_10 |= VAR_2;
    }

    if (FUNC_0(VAR_5)) {
        VAR_10 |= VAR_0;
    }

    if (FUNC_0(VAR_7)) {
        VAR_10 |= VAR_1;
    }

    FUNC_3(VAR_9, VAR_11->cid);
    FUNC_3(VAR_9, VAR_11->pid);
    FUNC_3(VAR_9, VAR_11->vid);
    FUNC_3(VAR_9, VAR_4);
    FUNC_3(VAR_9, VAR_10);

    for (VAR_12 = 0; VAR_12 < VAR_11->elem_count; VAR_12++) {
        int VAR_13;

        VAR_13 = FUNC_2(VAR_9, &VAR_11->elem[VAR_12], VAR_12 == 0);
        if (VAR_13) {
            return VAR_13;
        }
    }

    return 0;
}
