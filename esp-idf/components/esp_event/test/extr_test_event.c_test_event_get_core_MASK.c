
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BaseType_t FUNC_0(void)
{
    static int VAR_2 = 0;

    if (VAR_0 > 1) {
        return (VAR_1 + VAR_2++) % VAR_0;
    } else {
        return VAR_1;
    }
}
