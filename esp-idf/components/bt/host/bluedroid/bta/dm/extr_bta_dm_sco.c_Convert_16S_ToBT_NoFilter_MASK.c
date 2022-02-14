
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int INT32 ;
typedef int INT16 ;



INT32 FUNC_0 (void *VAR_0, void *VAR_1, UINT32 VAR_2, UINT32 VAR_3)
{
    INT32 VAR_4;
    INT16 *VAR_5 = (INT16 *)VAR_0;
    INT16 *VAR_6 = (INT16 *)VAR_1;
    INT16 VAR_7;



    VAR_4 = (VAR_3 >> 1);

    while (VAR_2--) {
        VAR_4 -= 8000;

        if (VAR_4 >= 0) {
            VAR_5 += 2;
        } else {

            VAR_7 = ((*VAR_5) >> 1 );
            VAR_5++;
            VAR_7 += ((*VAR_5) >> 1 );
            VAR_5++;

            *VAR_6++ = VAR_7;

            VAR_4 += VAR_3;
        }
    }

    return (VAR_6 - (INT16 *)VAR_1);
}
