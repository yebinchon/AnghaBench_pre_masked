
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int const id; char const* name; } ;
typedef TYPE_1__ name_map ;



const char *FUNC_0(const name_map* VAR_0, int VAR_1, const unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].id == VAR_2) {
   return VAR_0[VAR_3].name;
  }
 }


 return ((void*)0);
}
