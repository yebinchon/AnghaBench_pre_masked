
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSDP_UUID_SEQ ;
typedef int tSDP_RECORD ;
typedef int tSDP_ATTR_SEQ ;
typedef int UINT16 ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

UINT16 FUNC_2(tSDP_UUID_SEQ *VAR_0, tSDP_ATTR_SEQ *VAR_1)
{
    tSDP_RECORD *VAR_2;
    UINT16 VAR_3 = 0;
    UINT16 VAR_4;

    for (VAR_2 = FUNC_0 (((void*)0), VAR_0); VAR_2; VAR_2 = FUNC_0 (VAR_2, VAR_0)) {
        VAR_3 += 3;

        VAR_4 = FUNC_1(VAR_2, VAR_1 );

        if (VAR_4 != 0) {
            VAR_3 += VAR_4;
        } else {
            VAR_3 -= 3;
        }
    }
    return VAR_3;
}
