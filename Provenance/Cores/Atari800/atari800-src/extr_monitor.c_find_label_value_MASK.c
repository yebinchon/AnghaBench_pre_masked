
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; int * name; } ;
typedef TYPE_1__ symtable_rec ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(const char *VAR_5)
{
 const symtable_rec *VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != ((void*)0))
  return VAR_6->addr;
 if (VAR_4) {
  for (VAR_6 = (VAR_1 == VAR_0 ? VAR_3 : VAR_2); VAR_6->name != ((void*)0); VAR_6++) {
   if (FUNC_0(VAR_6->name, VAR_5) == 0)
    return VAR_6->addr;
  }
 }
 return -1;
}
