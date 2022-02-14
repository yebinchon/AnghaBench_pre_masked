
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; scalar_t__ addr; } ;
typedef TYPE_1__ symtable_rec ;
typedef scalar_t__ UWORD ;
struct TYPE_6__ {scalar_t__ addr; char const* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static const char *FUNC_0(UWORD VAR_7, int VAR_8)
{
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (VAR_5[VAR_9].addr == VAR_7)
   return VAR_5[VAR_9].name;
 }
 if (VAR_4) {
  const symtable_rec *VAR_10;
  for (VAR_10 = (VAR_1 == VAR_0 ? VAR_3 : VAR_2); VAR_10->name != ((void*)0); VAR_10++) {
   if (VAR_10->addr == VAR_7) {
    if (VAR_8 && VAR_10[1].addr == VAR_7)
     VAR_10++;
    return VAR_10->name;
   }
  }
 }
 return ((void*)0);
}
