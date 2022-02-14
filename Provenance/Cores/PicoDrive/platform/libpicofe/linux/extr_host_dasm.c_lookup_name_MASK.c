
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_5__ {scalar_t__ value; char const* name; TYPE_1__* section; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_4__ {scalar_t__ vma; } ;


 TYPE_2__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *FUNC_0(bfd_vma VAR_2)
{
  asymbol **VAR_3 = VAR_0;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    asymbol *VAR_5 = *VAR_3++;

    if (VAR_2 == VAR_5->value + VAR_5->section->vma)
      return VAR_5->name;
  }

  return ((void*)0);
}
