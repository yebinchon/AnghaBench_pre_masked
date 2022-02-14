
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int CoefType ;
typedef int CoefSumType ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static CoefType FUNC_2(CoefSumType VAR_1, CoefSumType VAR_2)
{
    if (VAR_2 <= VAR_0) {
        return 1048576;
    } else {
        uint64_t VAR_3 = VAR_1 / (VAR_2 >> 24);
        uint32_t VAR_4 = FUNC_0(VAR_3, 1073741824);
        VAR_4 = FUNC_1(VAR_4) << 9;
        return FUNC_0(VAR_4, VAR_0);
    }
}
