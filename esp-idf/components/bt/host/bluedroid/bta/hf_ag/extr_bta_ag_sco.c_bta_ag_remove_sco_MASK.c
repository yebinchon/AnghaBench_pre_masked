
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_6__ {scalar_t__ sco_idx; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_5__ {scalar_t__ cur_idx; TYPE_2__* p_curr_scb; } ;
struct TYPE_7__ {TYPE_1__ sco; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static BOOLEAN FUNC_2(tBTA_AG_SCB *VAR_7, BOOLEAN VAR_8)
{
    BOOLEAN VAR_9 = VAR_4;
    tBTM_STATUS VAR_10;

    if (VAR_7->sco_idx != VAR_1)
    {
        if (!VAR_8 || VAR_7->sco_idx == VAR_6.sco.cur_idx)
        {
            VAR_10 = FUNC_1(VAR_7->sco_idx);

            FUNC_0("ag remove sco: inx 0x%04x, status:0x%x", VAR_7->sco_idx, VAR_10);

            if (VAR_10 == VAR_0)
            {

                VAR_6.sco.p_curr_scb = VAR_7;

                VAR_9 = VAR_5;
            }

            else if ( (VAR_10 == VAR_2) || (VAR_10 == VAR_3) )
            {
                VAR_7->sco_idx = VAR_1;
            }
        }
    }
    return VAR_9;
}
