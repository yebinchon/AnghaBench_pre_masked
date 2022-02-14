
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ symtable_rec ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static symtable_rec *FUNC_1(const char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(VAR_0[VAR_3].name, VAR_2) == 0)
   return &VAR_0[VAR_3];
 }
 return ((void*)0);
}
