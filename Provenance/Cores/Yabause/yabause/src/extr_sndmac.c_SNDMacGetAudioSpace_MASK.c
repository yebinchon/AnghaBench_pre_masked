
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(void) {
    u32 VAR_3 = 0;

    if(VAR_2 > VAR_1) {
        VAR_3 = VAR_0 - VAR_2 + VAR_1;
    }
    else {
        VAR_3 = VAR_1 - VAR_2;
    }

    return (VAR_3 >> 2);
}
