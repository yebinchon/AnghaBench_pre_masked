
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ path_length; } ;
typedef TYPE_1__ diva_man_var_header_t ;


 int FUNC_0 (char*,char*,char) ;

__attribute__((used)) static int FUNC_1 (diva_man_var_header_t* VAR_0, char* VAR_1) {
 char* VAR_2 = (char*)&VAR_0->path_length;

 VAR_2 += (VAR_0->path_length + 1);
 FUNC_0 (VAR_1, VAR_2+1, *VAR_2);
 VAR_1[(int)*VAR_2] = 0;

 return (0);
}
