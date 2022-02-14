
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int SRC_TYPE ;
typedef int INT32 ;
typedef int INT16 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,int) ;

INT32 FUNC_5 (UINT8 *VAR_5, void *VAR_6, UINT32 VAR_7,
                                UINT32 VAR_8, INT32 *VAR_9, UINT8 *VAR_10)
{
    INT32 VAR_11 = *VAR_9;
    SRC_TYPE *VAR_12, *VAR_13;
    SRC_TYPE *VAR_14, *VAR_15;
    INT16 *VAR_16 = (INT16 *)VAR_6;



    FUNC_4 (VAR_10 + (VAR_0 * 2), VAR_5, VAR_0 * 2);

    VAR_14 = (SRC_TYPE *)(VAR_10 + VAR_0);
    VAR_15 = (SRC_TYPE *)(VAR_10 + (VAR_0 * 3));

    VAR_12 = (SRC_TYPE *)(VAR_5 + VAR_0);
    VAR_13 = (SRC_TYPE *)(VAR_5 + (VAR_7 * VAR_4 * sizeof (SRC_TYPE)) - VAR_0);


    if (VAR_8 == VAR_3) {
        FUNC_3(VAR_14, VAR_15);
        FUNC_3(VAR_12, VAR_13);
    } else if (VAR_8 == VAR_2) {
        FUNC_2(VAR_14, VAR_15);
        FUNC_2(VAR_12, VAR_13);
    } else if (VAR_8 == VAR_1) {
        FUNC_1(VAR_14, VAR_15);
        FUNC_1(VAR_12, VAR_13);
    }

    FUNC_4 (VAR_10, VAR_5 + (VAR_7 * VAR_4 * sizeof (SRC_TYPE)) - (VAR_0 * 2), VAR_0 * 2);


    *VAR_9 = VAR_11;

    return (VAR_16 - (INT16 *)VAR_6);
}
