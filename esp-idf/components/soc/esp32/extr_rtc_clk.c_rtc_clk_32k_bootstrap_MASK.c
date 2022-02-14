
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int const,int const,int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(uint32_t VAR_9)
{
    if (VAR_9){
        const uint32_t VAR_10 = 32;
        const uint32_t VAR_11 = 33;
        const uint32_t VAR_12 = (1 << (VAR_10 - 32));
        const uint32_t VAR_13 = (1 << (VAR_11 - 32));

        FUNC_4(VAR_10);
        FUNC_4(VAR_11);
        FUNC_3(VAR_12, VAR_13, VAR_12 | VAR_13, 0);

        const uint32_t VAR_14 = (1000000 / VAR_4 / 2);
        while(VAR_9){
            FUNC_3(VAR_12, VAR_13, VAR_12 | VAR_13, 0);
            FUNC_2(VAR_14);
            FUNC_3(VAR_13, VAR_12, VAR_12 | VAR_13, 0);
            FUNC_2(VAR_14);
            VAR_9--;
        }
        FUNC_3(0, 0, 0, VAR_12 | VAR_13);
    }

    FUNC_0(VAR_3, VAR_2);
    FUNC_1(VAR_3, VAR_1 | VAR_0);
    FUNC_2(VAR_8);

    FUNC_5(VAR_5,
            VAR_7, VAR_6);
}
