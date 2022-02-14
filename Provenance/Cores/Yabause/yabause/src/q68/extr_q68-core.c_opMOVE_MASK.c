
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int Q68State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_3 (int *,int,int const,int ,int*) ;
 int FUNC_4 (int *,int const,int const,int ) ;
 int FUNC_5 (int *,int const,int const,int const) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(Q68State *VAR_5, uint32_t VAR_6)
{
    const int VAR_7 = (VAR_6>>12==1 ? VAR_2 : VAR_6>>12==2 ? VAR_3 : VAR_4);

    int VAR_8;
    const uint32_t VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, 0, &VAR_8);
    if (VAR_8 < 0) {
        return 0;
    }



    const uint32_t VAR_10 = (VAR_6>>9 & 7) | (VAR_6>>3 & 0x38);
    int VAR_11;
    if (FUNC_0(VAR_10) <= VAR_1) {
        VAR_11 = 0;
    } else {
        VAR_11 = FUNC_4(VAR_5, VAR_10, VAR_7, VAR_0);
        if (VAR_11 < 0) {
            return FUNC_6(VAR_5, VAR_6);
        }
    }


    if (FUNC_0(VAR_10) != VAR_1) {
        FUNC_1();
        FUNC_2(VAR_7==VAR_2 ? (int8_t)VAR_9 :
                   VAR_7==VAR_4 ? (int16_t)VAR_9 : (int32_t)VAR_9);
    }


    FUNC_5(VAR_5, VAR_10, VAR_7, VAR_9);
    return 4 + VAR_8 + VAR_11;
}
