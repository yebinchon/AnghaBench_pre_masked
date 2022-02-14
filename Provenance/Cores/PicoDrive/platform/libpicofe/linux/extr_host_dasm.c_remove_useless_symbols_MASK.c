
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int flags; scalar_t__ value; TYPE_3__* section; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_6__ {scalar_t__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static long
FUNC_2 (asymbol **VAR_2, long VAR_3)
{
  asymbol **VAR_4 = VAR_2, **VAR_5 = VAR_2;

  while (--VAR_3 >= 0)
    {
      asymbol *VAR_6 = *VAR_4++;

      if (VAR_6->name == ((void*)0) || VAR_6->name[0] == '\0' || VAR_6->name[0] == '$')
        continue;
      if (VAR_6->flags & (VAR_0 | VAR_1))
        continue;
      if (FUNC_1 (VAR_6->section)
          || FUNC_0 (VAR_6->section))
        continue;
      if (VAR_6->value + VAR_6->section->vma == 0)
        continue;





      *VAR_5++ = VAR_6;
    }

  return VAR_5 - VAR_2;
}
