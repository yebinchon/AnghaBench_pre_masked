
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(int16_t *VAR_0, int VAR_1,
                                    uint64_t VAR_2, uint64_t VAR_3)
{
    uint64_t VAR_4 = VAR_2 << 1;
    uint64_t VAR_5 = FUNC_0(VAR_4 * 255 >> 8);
    int VAR_6;

    VAR_3 = FUNC_0(VAR_3);

    for(VAR_6 = 0; VAR_6 <= VAR_1; VAR_0 += 4, VAR_6 += 4) {
        uint64_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

        VAR_7 = FUNC_2(VAR_0);
        if (VAR_7 == 0)
            continue;







        VAR_8 = FUNC_1(FUNC_0(0x7fff), VAR_7);
        VAR_8 &= (VAR_8 >> 1) | (1 << 7);
        VAR_8 = FUNC_6(-1, VAR_8);


        VAR_9 = FUNC_1(0, VAR_7);
        VAR_9 &= VAR_9 >> 1;



        VAR_7 *= VAR_4;
        VAR_7 -= VAR_5 & (VAR_8 << 16);

        VAR_10 = VAR_3 & ~VAR_8;
        VAR_11 = VAR_3 & VAR_8;

        VAR_10 = FUNC_6(VAR_10, VAR_9);
        VAR_7 += VAR_10;
        VAR_7 -= VAR_11;

        FUNC_5(VAR_7, VAR_0);
    }
}
