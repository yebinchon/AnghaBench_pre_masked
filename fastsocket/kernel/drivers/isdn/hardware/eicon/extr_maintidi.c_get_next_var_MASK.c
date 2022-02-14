
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int diva_man_var_header_t ;
typedef scalar_t__ byte ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static diva_man_var_header_t* FUNC_0 (diva_man_var_header_t* VAR_1) {
 byte* VAR_2 = (byte*)VAR_1;
 byte* VAR_3;
 int VAR_4;

 if (*VAR_2 != VAR_0) return ((void*)0);

 VAR_3 = VAR_2 + 2;
 VAR_4 = *(VAR_2+1);
 VAR_2 = (VAR_3+VAR_4);

 if (*VAR_2 != VAR_0) return ((void*)0);

 return ((diva_man_var_header_t*)VAR_2);
}
