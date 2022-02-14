
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__* VAR_12 ;

BOOL FUNC_5 (DWORD_PTR VAR_13)
{
    int VAR_14;
    BOOL VAR_15;

    VAR_15 = VAR_11;


    FUNC_4(VAR_13 + VAR_4, 0);

    FUNC_3(VAR_13, VAR_4, (VAR_9 |
                                                     VAR_10));



    FUNC_2(VAR_13, VAR_4, VAR_8);





    FUNC_0(VAR_13, (0x07168700+(VAR_0<<3)+VAR_2));


    for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
        VAR_15 &= FUNC_0(VAR_13, VAR_12[VAR_14]);

FUNC_1(VAR_13, 30);


    FUNC_3(VAR_13, VAR_4, VAR_8);

    FUNC_1(VAR_13, 150);
    VAR_15 &= FUNC_0(VAR_13, (0x00d80f00+(VAR_0<<3)+VAR_2));
    FUNC_1(VAR_13, 30);
    VAR_15 &= FUNC_0(VAR_13, (0x00780f00+(VAR_0<<3)+VAR_2));
    FUNC_1(VAR_13, 30);
    VAR_15 &= FUNC_0(VAR_13, VAR_12[VAR_1-1]);

    FUNC_3(VAR_13, VAR_4, (VAR_8 |
                                                     VAR_7 |
                                                     VAR_9 |
                                                     VAR_10));


    FUNC_4(VAR_13 + VAR_3, (VAR_6 | VAR_5));

    return VAR_15;
}
