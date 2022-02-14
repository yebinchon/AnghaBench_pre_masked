
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path_length; } ;
typedef TYPE_1__ diva_man_var_header_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,char const*,int ) ;

__attribute__((used)) static diva_man_var_header_t* FUNC_2 (diva_man_var_header_t* VAR_0,
                    const char* VAR_1) {
 const char* VAR_2;

 do {
  VAR_2 = (char*)&VAR_0->path_length+1;

  if (!FUNC_1 (VAR_1, VAR_2, VAR_0->path_length)) {
   break;
  }
 } while ((VAR_0 = FUNC_0 (VAR_0)));

 return (VAR_0);
}
