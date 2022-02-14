
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_data; int key_type; } ;
typedef TYPE_1__ tSMP_KEY ;
typedef int tSMP_INT_DATA ;
typedef int tSMP_EVT_DATA ;
struct TYPE_6__ {scalar_t__ selected_association_model; int pairing_bda; int (* p_callback ) (int ,int ,int *) ;int * tk; int static_passkey; } ;
typedef TYPE_2__ tSMP_CB ;
typedef int UINT8 ;
typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;

void FUNC_4(void)
{
    tSMP_CB *VAR_6 = &VAR_5;
    UINT8 *VAR_7 = VAR_6->tk;
    tSMP_KEY VAR_8;
    UINT32 VAR_9 = VAR_6->static_passkey;

    FUNC_1(VAR_6->tk, 0, VAR_0);
    FUNC_0(VAR_7, VAR_9);

    VAR_8.key_type = VAR_2;
    VAR_8.p_data = VAR_6->tk;

    if (VAR_6->p_callback) {
        (*VAR_6->p_callback)(VAR_4, VAR_6->pairing_bda, (tSMP_EVT_DATA *)&VAR_9);
    }

    if (VAR_6->selected_association_model == VAR_3) {
        FUNC_2(&VAR_5, VAR_1, &VAR_9);
    } else {
        FUNC_2(VAR_6, VAR_1, (tSMP_INT_DATA *)&VAR_8);
    }
}
