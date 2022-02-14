
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_2, uint64_t VAR_3)
{
    VAR_3 ^= VAR_2;
    VAR_2=VAR_1[0][VAR_3 >> 56]^VAR_1[1][(VAR_3 >> 48) & VAR_0]^VAR_1[2][(VAR_3 >> 40) & VAR_0]^VAR_1[3][(VAR_3 >> 32) & VAR_0]^VAR_1[4][(VAR_3 >> 24) & VAR_0]^VAR_1[5][(VAR_3 >> 16) & VAR_0]^VAR_1[6][(VAR_3 >> 8) & VAR_0]^VAR_1[7][VAR_3 & VAR_0];
    return VAR_2;
}
