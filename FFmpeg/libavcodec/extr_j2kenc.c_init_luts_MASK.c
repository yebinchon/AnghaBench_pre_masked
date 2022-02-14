
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 void** VAR_4 ;
 void** VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
    int VAR_6, VAR_7,
        VAR_8 = ~((1<<VAR_1)-1);

    for (VAR_6 = 0; VAR_6 < (1 << VAR_0); VAR_6++){
        VAR_4[VAR_6] = FUNC_0((6*VAR_6 - (9<<(VAR_1-1))) << (12-VAR_1), 0);
        VAR_5[VAR_6] = FUNC_0((VAR_6*VAR_6 + (1<<(VAR_1-1)) & VAR_8) << 1, 0);

        VAR_7 = (VAR_6 >> (VAR_0-2)&2) + 1;
        VAR_2[VAR_6] = FUNC_0((-2*VAR_6 + (1<<VAR_1) + VAR_7*VAR_6 - (VAR_7*VAR_7<<(VAR_1-2)))
                                    << (13-VAR_1), 0);
        VAR_3[VAR_6] = FUNC_0(((VAR_6*VAR_6 + ((1-4*VAR_6) << (VAR_1-1)) + (1<<2*VAR_1)) & VAR_8)
                                    << 1, 0);
    }
}
