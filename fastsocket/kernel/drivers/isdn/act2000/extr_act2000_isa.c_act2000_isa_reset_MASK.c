
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(unsigned short VAR_5)
{
        unsigned char VAR_6;
        int VAR_7;
        int VAR_8;
        int VAR_9 = 0;

        VAR_8 = 0;
        if ((VAR_6 = FUNC_0(VAR_5 + VAR_0)) != 0xff) {
                FUNC_2(VAR_6 | VAR_1, VAR_5 + VAR_0);
                FUNC_1(10);
                FUNC_2(VAR_6, VAR_5 + VAR_0);
                FUNC_1(10);

                for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
                        if (FUNC_0(VAR_5 + VAR_2) & VAR_3)
                                VAR_9 |= 0x10000;
                        VAR_9 >>= 1;
                }
                if (VAR_9 == VAR_4)
                        VAR_8++;
        }
        return VAR_8;
}
