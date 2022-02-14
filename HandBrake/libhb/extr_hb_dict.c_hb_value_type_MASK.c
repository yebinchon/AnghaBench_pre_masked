
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hb_value_type_t ;
typedef int hb_value_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;

hb_value_type_t FUNC_1(const hb_value_t *VAR_4)
{
   if (VAR_4 == ((void*)0))
        return VAR_1;
    hb_value_type_t VAR_5 = FUNC_0(VAR_4);
    if (VAR_5 == VAR_3 || VAR_5 == VAR_2)
        return VAR_0;
    return VAR_5;
}
