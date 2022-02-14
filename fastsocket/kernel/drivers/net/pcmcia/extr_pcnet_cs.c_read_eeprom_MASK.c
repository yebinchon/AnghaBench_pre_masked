
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (short,unsigned int) ;
 int FUNC_2 (short,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10 = 0;
    unsigned int VAR_11 = VAR_7 + VAR_0;
    int VAR_12 = VAR_8 | (VAR_6 << 8);

    FUNC_1(0, VAR_11);
    FUNC_1(VAR_5|VAR_2, VAR_11);


    for (VAR_9 = 10; VAR_9 >= 0; VAR_9--) {
 short VAR_13 = (VAR_12 & (1 << VAR_9)) ? VAR_4 : 0;
 FUNC_2(VAR_5|VAR_2|VAR_13, VAR_11);
 FUNC_2(VAR_5|VAR_2|VAR_13|VAR_1, VAR_11);
    }
    FUNC_1(VAR_5|VAR_2, VAR_11);

    for (VAR_9 = 16; VAR_9 > 0; VAR_9--) {
 FUNC_2(VAR_5|VAR_2 | VAR_1, VAR_11);
 VAR_10 = (VAR_10 << 1) | ((FUNC_0(VAR_11) & VAR_3) ? 1 : 0);
 FUNC_2(VAR_5|VAR_2, VAR_11);
    }


    FUNC_1(0, VAR_11);
    return VAR_10;
}
