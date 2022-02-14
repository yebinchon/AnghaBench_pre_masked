
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

char *FUNC_0(uint32_t VAR_3) {
    VAR_3 &= VAR_0;
    if (VAR_3 == VAR_0) {
        return "all";
    } else if (VAR_3 == VAR_1) {
        return "in";
    } else if (VAR_3 == VAR_2) {
        return "out";
    } else {
        return "none";
    }
}
