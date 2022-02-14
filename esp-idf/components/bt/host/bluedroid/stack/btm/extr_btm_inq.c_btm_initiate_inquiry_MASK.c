
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tINQ_BDADDR ;
struct TYPE_7__ {int mode; scalar_t__ max_resps; int duration; } ;
typedef TYPE_2__ tBTM_INQ_PARMS ;
struct TYPE_8__ {int inq_active; scalar_t__ max_bd_entries; int * p_bd_db; int per_min_delay; int per_max_delay; TYPE_2__ inqparms; } ;
typedef TYPE_3__ tBTM_INQUIRY_VAR_ST ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {int inqfilt_active; int state; int inq_active; } ;
struct TYPE_9__ {TYPE_1__ btm_inq_vars; } ;
typedef int LAP ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 TYPE_5__ VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int const,int ,int ) ;
 int FUNC_5 (int ,int ,int const,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7 (tBTM_INQUIRY_VAR_ST *VAR_11)
{
    const LAP *VAR_12;
    tBTM_INQ_PARMS *VAR_13 = &VAR_11->inqparms;


    FUNC_0 ("btm_initiate_inquiry: inq_active:0x%x state:%d inqfilt_active:%d\n",
                     VAR_8.btm_inq_vars.inq_active, VAR_8.btm_inq_vars.state, VAR_8.btm_inq_vars.inqfilt_active);

    FUNC_1 (VAR_0);

    if (VAR_11->inq_active & VAR_6) {
        FUNC_3 (VAR_4, (UINT8)(VAR_13->mode & VAR_1));
        return;
    }


    VAR_13->max_resps = (UINT8)((VAR_13->max_resps <= VAR_2) ? VAR_13->max_resps : VAR_2);

    VAR_12 = (VAR_11->inq_active & VAR_3) ? &VAR_10 : &VAR_9;

    if (VAR_11->inq_active & VAR_5) {
        if (!FUNC_5 (VAR_11->per_max_delay,
                                      VAR_11->per_min_delay,
                                      *VAR_12, VAR_13->duration,
                                      VAR_13->max_resps)) {
            FUNC_3 (VAR_4, (UINT8)(VAR_13->mode & VAR_1));
        }
    } else {
        FUNC_2();


        if ((VAR_11->p_bd_db = (tINQ_BDADDR *)FUNC_6(VAR_7)) != ((void*)0)) {
            VAR_11->max_bd_entries = (UINT16)(VAR_7 / sizeof(tINQ_BDADDR));


        }

        if (!FUNC_4(*VAR_12, VAR_13->duration, 0)) {
            FUNC_3 (VAR_4, (UINT8)(VAR_13->mode & VAR_1));
        }
    }
}
