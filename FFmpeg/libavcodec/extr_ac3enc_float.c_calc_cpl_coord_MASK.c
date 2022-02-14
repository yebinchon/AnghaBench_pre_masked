
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CoefType ;
typedef int CoefSumType ;


 int VAR_0 ;
 int FUNC_0 (float,int ) ;
 float FUNC_1 (int) ;

__attribute__((used)) static CoefType FUNC_2(CoefSumType VAR_1, CoefSumType VAR_2)
{
    float VAR_3 = 0.125;
    if (VAR_2 > 0)
        VAR_3 *= FUNC_1(VAR_1 / VAR_2);
    return FUNC_0(VAR_3, VAR_0);
}
