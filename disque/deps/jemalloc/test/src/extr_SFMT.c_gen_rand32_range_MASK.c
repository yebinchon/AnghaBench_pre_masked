
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sfmt_t ;


 int FUNC_0 (int *) ;

uint32_t FUNC_1(sfmt_t *VAR_0, uint32_t VAR_1) {
    uint32_t VAR_2, VAR_3;

    VAR_3 = 0xffffffffU - (0xffffffffU % VAR_1);
    while (1) {
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < VAR_3) {
     VAR_2 %= VAR_1;
     break;
 }
    }
    return VAR_2;
}
