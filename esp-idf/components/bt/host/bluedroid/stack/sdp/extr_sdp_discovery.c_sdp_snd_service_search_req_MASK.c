
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t cur_uuid_idx; int timer_entry; int connection_id; int disc_state; TYPE_1__* p_db; scalar_t__ transaction_id; } ;
typedef TYPE_2__ tCONN_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {scalar_t__ max_recs_per_search; } ;
struct TYPE_10__ {int offset; scalar_t__ len; } ;
struct TYPE_8__ {int num_uuid_filters; int * uuid_filters; } ;
typedef TYPE_3__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_6__ VAR_7 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int * FUNC_8 (int *,int,int *) ;

__attribute__((used)) static void FUNC_9(tCONN_CB *VAR_8, UINT8 VAR_9, UINT8 *VAR_10)
{
    UINT8 *VAR_11, *VAR_12, *VAR_13;
    BT_HDR *VAR_14;
    UINT16 VAR_15;


    if ((VAR_14 = (BT_HDR *) FUNC_6(VAR_2)) == ((void*)0)) {
        FUNC_7 (VAR_8, VAR_5);
        return;
    }

    VAR_14->offset = VAR_1;
    VAR_11 = VAR_12 = (UINT8 *)(VAR_14 + 1) + VAR_1;


    FUNC_3 (VAR_11, VAR_6);
    FUNC_2 (VAR_11, VAR_8->transaction_id);
    VAR_8->transaction_id++;


    VAR_13 = VAR_11;
    VAR_11 += 2;





    VAR_11 = FUNC_8 (VAR_11, VAR_8->p_db->num_uuid_filters, VAR_8->p_db->uuid_filters);



    FUNC_2 (VAR_11, VAR_7.max_recs_per_search);


    FUNC_3 (VAR_11, VAR_9);


    if (VAR_9 && VAR_10) {
        FUNC_5(VAR_11, VAR_10, VAR_9);
        VAR_11 += VAR_9;
    }


    VAR_15 = (UINT16)(VAR_11 - VAR_13 - 2);
    FUNC_2 (VAR_13, VAR_15);

    VAR_8->disc_state = VAR_3;


    VAR_14->len = (UINT16)(VAR_11 - VAR_12);


    FUNC_1("sdp_snd_service_search_req cont_len :%d disc_state:%d\n", VAR_9, VAR_8->disc_state);



    FUNC_0 (VAR_8->connection_id, VAR_14);


    FUNC_4 (&VAR_8->timer_entry, VAR_0, VAR_4);

}
