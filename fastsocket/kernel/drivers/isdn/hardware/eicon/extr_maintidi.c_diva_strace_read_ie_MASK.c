
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char length; int * data; } ;
typedef TYPE_1__ diva_trace_ie_t ;
struct TYPE_6__ {scalar_t__ path_length; } ;
typedef TYPE_2__ diva_man_var_header_t ;


 int FUNC_0 (int *,char*,char) ;

__attribute__((used)) static int FUNC_1 (diva_man_var_header_t* VAR_0,
                 diva_trace_ie_t* VAR_1) {
 char* VAR_2 = (char*)&VAR_0->path_length;

 VAR_2 += (VAR_0->path_length + 1);

 VAR_1->length = *VAR_2;
 FUNC_0 (&VAR_1->data[0], VAR_2+1, *VAR_2);

 return (0);
}
