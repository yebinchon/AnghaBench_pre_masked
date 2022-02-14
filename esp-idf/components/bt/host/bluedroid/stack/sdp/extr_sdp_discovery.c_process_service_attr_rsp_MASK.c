
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t list_len; int* rsp_list; scalar_t__ cur_handle; scalar_t__ num_handles; scalar_t__ transaction_id; int timer_entry; int connection_id; TYPE_1__* p_db; int * handles; } ;
typedef TYPE_2__ tCONN_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_13__ {scalar_t__ max_attr_list_size; } ;
struct TYPE_12__ {int offset; scalar_t__ len; } ;
struct TYPE_10__ {int num_attr_filters; int * attr_filters; } ;
typedef TYPE_3__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (scalar_t__,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int*,scalar_t__) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int*,int*,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int*,int*) ;
 TYPE_6__ VAR_15 ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int* FUNC_13 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_14 (tCONN_CB *VAR_16, UINT8 *VAR_17)
{
    UINT8 *VAR_18, *VAR_19;
    UINT16 VAR_20, VAR_21;
    BOOLEAN VAR_22 = VAR_1;


    FUNC_3("process_service_attr_rsp raw inc:%d\n",
                      VAR_12);


    if (VAR_17) {

        FUNC_3("ID & len: 0x%02x-%02x-%02x-%02x\n",
                          VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);


        VAR_17 += 4;

        FUNC_0 (VAR_21, VAR_17);

        FUNC_3("list_byte_count:%d\n", VAR_21);



        if ((VAR_16->list_len + VAR_21) > VAR_9) {
            FUNC_12 (VAR_16, VAR_7);
            return;
        }


        FUNC_3("list_len: %d, list_byte_count: %d\n",
                          VAR_16->list_len, VAR_21);

        if (VAR_16->rsp_list == ((void*)0)) {
            VAR_16->rsp_list = (UINT8 *)FUNC_9 (VAR_9);
            if (VAR_16->rsp_list == ((void*)0)) {
                FUNC_2 ("SDP - no gki buf to save rsp\n");
                FUNC_12 (VAR_16, VAR_10);
                return;
            }
        }
        FUNC_8 (&VAR_16->rsp_list[VAR_16->list_len], VAR_17, VAR_21);
        VAR_16->list_len += VAR_21;
        VAR_17 += VAR_21;

        FUNC_3("list_len: %d(attr_rsp)\n", VAR_16->list_len);


        FUNC_3("*p_reply:%d(%d)\n", *VAR_17, VAR_8);

        if (*VAR_17) {
            if (*VAR_17 > VAR_8) {
                FUNC_12 (VAR_16, VAR_6);
                return;
            }
            VAR_22 = VAR_14;
        } else {


            FUNC_3("process_service_attr_rsp\n");
            FUNC_11 (VAR_16, VAR_1);



            if (!FUNC_10 (VAR_16, &VAR_16->rsp_list[0], &VAR_16->rsp_list[VAR_16->list_len])) {
                FUNC_12 (VAR_16, VAR_4);
                return;
            }
            VAR_16->list_len = 0;
            VAR_16->cur_handle++;
        }
    }


    if (VAR_16->cur_handle < VAR_16->num_handles) {
        BT_HDR *VAR_23 = (BT_HDR *) FUNC_9(VAR_3);
        UINT8 *VAR_24;

        if (!VAR_23) {
            FUNC_12 (VAR_16, VAR_10);
            return;
        }

        VAR_23->offset = VAR_2;
        VAR_24 = VAR_18 = (UINT8 *)(VAR_23 + 1) + VAR_2;


        FUNC_6 (VAR_24, VAR_11);
        FUNC_4 (VAR_24, VAR_16->transaction_id);
        VAR_16->transaction_id++;


        VAR_19 = VAR_24;
        VAR_24 += 2;

        FUNC_5 (VAR_24, VAR_16->handles[VAR_16->cur_handle]);


        FUNC_4 (VAR_24, VAR_15.max_attr_list_size);


        if (VAR_16->p_db->num_attr_filters) {
            VAR_24 = FUNC_13 (VAR_24, VAR_16->p_db->attr_filters, VAR_16->p_db->num_attr_filters);
        } else {
            VAR_24 = FUNC_13 (VAR_24, ((void*)0), 0);
        }


        if (VAR_22) {
            FUNC_8 (VAR_24, VAR_17, *VAR_17 + 1);
            VAR_24 += *VAR_17 + 1;
        } else {
            FUNC_6 (VAR_24, 0);
        }


        VAR_20 = (UINT16)(VAR_24 - VAR_19 - 2);
        FUNC_4 (VAR_19, VAR_20);


        VAR_23->len = (UINT16)(VAR_24 - VAR_18);


        FUNC_1 (VAR_16->connection_id, VAR_23);


        FUNC_7 (&VAR_16->timer_entry, VAR_0, VAR_5);
    } else {
        FUNC_12 (VAR_16, VAR_13);
        return;
    }
}
