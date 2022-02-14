
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int con_flags; scalar_t__ con_state; int gap_handle; int (* p_callback ) (int ,int ) ;int cfg; int psm; int rem_dev_address; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_7, UINT16 VAR_8)
{
    tGAP_CCB *VAR_9;


    if ((VAR_9 = FUNC_2 (VAR_7)) == ((void*)0)) {
        return;
    }


    if ( (VAR_9->con_flags & VAR_0) == 0) {
        FUNC_1 (VAR_9->rem_dev_address, VAR_9->psm, VAR_5,
                                   0, 0, &VAR_6, VAR_9);
    }



    if ((VAR_8 == VAR_4) && (VAR_9->con_state == VAR_2)) {
        VAR_9->con_state = VAR_1;


        FUNC_0 (VAR_7, &VAR_9->cfg);
    } else {

        if (VAR_9->p_callback) {
            (*VAR_9->p_callback) (VAR_9->gap_handle, VAR_3);
        }

        FUNC_3 (VAR_9);
    }
}
