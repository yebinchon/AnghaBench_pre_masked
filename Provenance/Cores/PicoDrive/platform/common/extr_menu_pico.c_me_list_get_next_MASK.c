
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * name; } ;
typedef TYPE_1__ menu_entry ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

menu_entry *FUNC_1(void)
{
 int VAR_3;

 VAR_1++;
 if (VAR_1->name != ((void*)0))
  return VAR_1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_2 == VAR_0[VAR_3])
   break;

 if (VAR_3 + 1 < FUNC_0(VAR_0))
  VAR_2 = VAR_1 = VAR_0[VAR_3 + 1];
 else
  VAR_2 = VAR_1 = ((void*)0);

 return VAR_1;
}
