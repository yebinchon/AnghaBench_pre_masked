
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kxld_size_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t FUNC_0(kxld_size_t VAR_4)
{

    if ((VAR_4 != 0) &&
        ((VAR_4 & (VAR_4 - 1)) == 0)) {

        VAR_2 = VAR_1;
        VAR_3 = VAR_4;

        return VAR_1;
    } else {
        return VAR_0;
    }
}
