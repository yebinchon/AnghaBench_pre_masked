
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inq_count; int bd_addr; } ;
typedef TYPE_1__ tINQ_BDADDR ;
struct TYPE_5__ {int inq_active; scalar_t__ num_bd_entries; scalar_t__ inq_counter; scalar_t__ max_bd_entries; TYPE_1__* p_bd_db; } ;
typedef TYPE_2__ tBTM_INQUIRY_VAR_ST ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_2__ btm_inq_vars; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_5)
{
    tBTM_INQUIRY_VAR_ST *VAR_6 = &VAR_4.btm_inq_vars;
    tINQ_BDADDR *VAR_7 = &VAR_6->p_bd_db[0];
    UINT16 VAR_8;


    if ((VAR_6->inq_active & VAR_1) || !VAR_7) {
        return (VAR_2);
    }

    for (VAR_8 = 0; VAR_8 < VAR_6->num_bd_entries; VAR_8++, VAR_7++) {
        if (!FUNC_0(VAR_7->bd_addr, VAR_5, VAR_0)
                && VAR_7->inq_count == VAR_6->inq_counter) {
            return (VAR_3);
        }
    }

    if (VAR_8 < VAR_6->max_bd_entries) {
        VAR_7->inq_count = VAR_6->inq_counter;
        FUNC_1(VAR_7->bd_addr, VAR_5, VAR_0);
        VAR_6->num_bd_entries++;
    }


    return (VAR_2);
}
