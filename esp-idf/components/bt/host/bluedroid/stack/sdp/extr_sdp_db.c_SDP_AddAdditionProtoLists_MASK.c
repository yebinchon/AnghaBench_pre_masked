
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list_elem; int num_elems; } ;
typedef TYPE_1__ tSDP_PROTO_LIST_ELEM ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,int ,int ) ;

BOOLEAN FUNC_6 (UINT32 VAR_5, UINT16 VAR_6,
                                   tSDP_PROTO_LIST_ELEM *VAR_7)
{

    UINT16 VAR_8;
    UINT8 *VAR_9;
    UINT8 *VAR_10;
    UINT8 *VAR_11;
    int VAR_12;
    BOOLEAN VAR_13;

    if ((VAR_9 = (UINT8 *) FUNC_4(sizeof(UINT8) * VAR_3 * 2)) == ((void*)0)) {
        FUNC_1("SDP_AddAdditionProtoLists cannot get a buffer!\n");
        return (VAR_2);
    }
    VAR_10 = VAR_9;


    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_7++) {
        FUNC_2 (VAR_10, (VAR_1 << 3) | VAR_4);
        VAR_11 = VAR_10++;

        VAR_12 = FUNC_5(VAR_10, VAR_7->num_elems,
                                        VAR_7->list_elem);
        VAR_10 += VAR_12;

        *VAR_11 = (UINT8)(VAR_10 - VAR_11 - 1);
    }
    VAR_13 = FUNC_0 (VAR_5, VAR_0, VAR_1,
                               (UINT32) (VAR_10 - VAR_9), VAR_9);
    FUNC_3(VAR_9);
    return VAR_13;




}
