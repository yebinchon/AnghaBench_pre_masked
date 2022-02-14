
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSDP_PROTOCOL_ELEM ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int *) ;

BOOLEAN FUNC_5 (UINT32 VAR_4, UINT16 VAR_5,
                             tSDP_PROTOCOL_ELEM *VAR_6)
{

    UINT8 *VAR_7;
    int VAR_8;
    BOOLEAN VAR_9;

    if ((VAR_7 = (UINT8 *) FUNC_3(sizeof(UINT8) * VAR_3 * 2)) == ((void*)0)) {
        FUNC_1("SDP_AddProtocolList cannot get a buffer!\n");
        return (VAR_2);
    }

    VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_6);
    VAR_9 = FUNC_0 (VAR_4, VAR_0, VAR_1, (UINT32) VAR_8, VAR_7);
    FUNC_2(VAR_7);
    return VAR_9;



}
