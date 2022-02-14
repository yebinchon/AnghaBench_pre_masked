
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {char** board_name; unsigned int num_names; int offset; } ;


 scalar_t__ FUNC_0 (char const* const,char const*) ;

void *FUNC_1(struct comedi_driver *VAR_0, const char *VAR_1)
{
 unsigned VAR_2;
 const char *const *VAR_3 = VAR_0->board_name;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_names; VAR_2++) {
  if (FUNC_0(*VAR_3, VAR_1) == 0)
   return (void *)VAR_3;
  VAR_3 =
      (const char *const *)((const char *)VAR_3 +
       VAR_0->offset);
 }

 return ((void*)0);
}
