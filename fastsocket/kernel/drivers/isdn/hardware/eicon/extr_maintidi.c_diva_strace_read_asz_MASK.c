
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_length; scalar_t__ path_length; } ;
typedef TYPE_1__ diva_man_var_header_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (diva_man_var_header_t* VAR_0, char* VAR_1) {
 char* VAR_2 = (char*)&VAR_0->path_length;
 int VAR_3;

 VAR_2 += (VAR_0->path_length + 1);

 if (!(VAR_3 = VAR_0->value_length)) {
  VAR_3 = FUNC_1 (VAR_2);
 }
 FUNC_0 (VAR_1, VAR_2, VAR_3);
 VAR_1[VAR_3] = 0;

 return (0);
}
