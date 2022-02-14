
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tGATT_REG ;
typedef int tGATT_IF ;
struct TYPE_4__ {size_t clcb_idx; int * p_tcb; int * p_reg; int conn_id; int in_use; } ;
typedef TYPE_1__ tGATT_CLCB ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {TYPE_1__* clcb; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (size_t) ;

tGATT_CLCB *FUNC_4 (UINT16 VAR_3)
{
    UINT8 VAR_4 = 0;
    tGATT_CLCB *VAR_5 = ((void*)0);
    tGATT_IF VAR_6 = FUNC_0(VAR_3);
    UINT8 VAR_7 = FUNC_1(VAR_3);
    tGATT_TCB *VAR_8 = FUNC_3(VAR_7);
    tGATT_REG *VAR_9 = FUNC_2(VAR_6);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (!VAR_2.clcb[VAR_4].in_use) {
            VAR_5 = &VAR_2.clcb[VAR_4];

            VAR_5->in_use = VAR_1;
            VAR_5->conn_id = VAR_3;
            VAR_5->clcb_idx = VAR_4;
            VAR_5->p_reg = VAR_9;
            VAR_5->p_tcb = VAR_8;
            break;
        }
    }
    return VAR_5;
}
