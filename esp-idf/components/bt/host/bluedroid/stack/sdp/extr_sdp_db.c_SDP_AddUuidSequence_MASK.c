
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int INT32 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

BOOLEAN FUNC_7 (UINT32 VAR_5, UINT16 VAR_6, UINT16 VAR_7,
                             UINT16 *VAR_8)
{

    UINT16 VAR_9;
    UINT8 *VAR_10;
    UINT8 *VAR_11;
    INT32 VAR_12 = VAR_2 - 3;
    BOOLEAN VAR_13;

    if ((VAR_10 = (UINT8 *) FUNC_6(sizeof(UINT8) * VAR_2 * 2)) == ((void*)0)) {
        FUNC_1("SDP_AddUuidSequence cannot get a buffer!\n");
        return (VAR_1);
    }
    VAR_11 = VAR_10;


    for (VAR_9 = 0; VAR_9 < VAR_7 ; VAR_9++, VAR_8++) {
        FUNC_4 (VAR_11, (VAR_4 << 3) | VAR_3);
        FUNC_3 (VAR_11, *VAR_8);

        if ((VAR_11 - VAR_10) > VAR_12) {
            FUNC_2 ("SDP_AddUuidSequence - too long, add %d uuids of %d\n", VAR_9, VAR_7);
            break;
        }
    }

    VAR_13 = FUNC_0 (VAR_5, VAR_6, VAR_0, (UINT32) (VAR_11 - VAR_10), VAR_10);
    FUNC_5(VAR_10);
    return VAR_13;



}
