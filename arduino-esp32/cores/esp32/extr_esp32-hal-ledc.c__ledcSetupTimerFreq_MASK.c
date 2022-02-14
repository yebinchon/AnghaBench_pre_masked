
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static double FUNC_2(uint8_t VAR_1, double VAR_2, uint8_t VAR_3)
{
    uint64_t VAR_4 = FUNC_1();
    VAR_4 <<= 8;
    uint32_t VAR_5 = (VAR_4 >> VAR_3) / VAR_2;
    bool VAR_6 = 1;
    if(VAR_5 > VAR_0) {
        VAR_4 /= 80;
        VAR_5 = (VAR_4 >> VAR_3) / VAR_2;
        if(VAR_5 > VAR_0) {
            VAR_5 = VAR_0;
        }
        VAR_6 = 0;
    } else if(VAR_5 < 256) {
        VAR_5 = 256;
    }
    FUNC_0(VAR_1, VAR_5, VAR_3, VAR_6);


    return (VAR_4 >> VAR_3) / (double)VAR_5;
}
