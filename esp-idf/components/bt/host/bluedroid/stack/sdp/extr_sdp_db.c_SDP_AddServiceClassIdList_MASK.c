
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

BOOLEAN FUNC_6 (UINT32 VAR_6, UINT16 VAR_7,
                                   UINT16 *VAR_8)
{

    UINT16 VAR_9;
    UINT8 *VAR_10;
    UINT8 *VAR_11;
    BOOLEAN VAR_12;

    if ((VAR_10 = (UINT8 *) FUNC_5(sizeof(UINT8) * VAR_3 * 2)) == ((void*)0)) {
        FUNC_1("SDP_AddServiceClassIdList cannot get a buffer!\n");
        return (VAR_2);
    }
    VAR_11 = VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_8++) {
        FUNC_3 (VAR_11, (VAR_5 << 3) | VAR_4);
        FUNC_2 (VAR_11, *VAR_8);
    }

    VAR_12 = FUNC_0 (VAR_6, VAR_0, VAR_1,
                               (UINT32) (VAR_11 - VAR_10), VAR_10);
    FUNC_4(VAR_10);
    return VAR_12;



}
