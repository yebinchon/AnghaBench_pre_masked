
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSDP_DISC_REC ;
struct TYPE_3__ {int p_db; int device_address; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int* FUNC_2 (int*,int ,int *,int ,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 int* FUNC_4 (int*,int,int*) ;

__attribute__((used)) static UINT8 *FUNC_5 (tCONN_CB *VAR_2, UINT8 *VAR_3, UINT8 *VAR_4)
{
    UINT32 VAR_5, VAR_6;
    UINT16 VAR_7;
    UINT8 VAR_8, *VAR_9;
    tSDP_DISC_REC *VAR_10;

    VAR_8 = *VAR_3++;

    if ((VAR_8 >> 3) != VAR_0) {
        FUNC_1 ("SDP - Wrong type: 0x%02x in attr_rsp\n", VAR_8);
        return (((void*)0));
    }

    VAR_3 = FUNC_4 (VAR_3, VAR_8, &VAR_5);
    if ((VAR_3 + VAR_5) > VAR_4) {
        FUNC_1 ("SDP - Bad len in attr_rsp %d\n", VAR_5);
        return (((void*)0));
    }


    VAR_10 = FUNC_3 (VAR_2->p_db, VAR_2->device_address);
    if (!VAR_10) {
        FUNC_1 ("SDP - DB full add_record\n");
        return (((void*)0));
    }

    VAR_9 = VAR_3 + VAR_5;

    while (VAR_3 < VAR_9) {

        VAR_8 = *VAR_3++;
        VAR_3 = FUNC_4 (VAR_3, VAR_8, &VAR_6);
        if (((VAR_8 >> 3) != VAR_1) || (VAR_6 != 2)) {
            FUNC_1 ("SDP - Bad type: 0x%02x or len: %d in attr_rsp\n", VAR_8, VAR_6);
            return (((void*)0));
        }
        FUNC_0 (VAR_7, VAR_3);


        VAR_3 = FUNC_2 (VAR_3, VAR_2->p_db, VAR_10, VAR_7, ((void*)0), 0);

        if (!VAR_3) {
            FUNC_1 ("SDP - DB full add_attr\n");
            return (((void*)0));
        }
    }

    return (VAR_3);
}
