
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int AVRational ;


 int * VAR_0 ;

__attribute__((used)) static AVRational FUNC_0(int32_t VAR_1) {
    if (VAR_1 < 1 || VAR_1 > 9) VAR_1 = 9;
    return VAR_0[VAR_1 - 1];
}
