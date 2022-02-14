
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char const* name; int flags; int end; scalar_t__ start; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct resource*) ;

int FUNC_1(resource_size_t VAR_1, resource_size_t VAR_2,
        const char *VAR_3)
{
 struct resource VAR_4 = {
  .start = VAR_1,
  .end = VAR_1 + VAR_2 - 1,
  .name = VAR_3,
  .flags = VAR_0,
 };

 return FUNC_0(&VAR_4);

}
