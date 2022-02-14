
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int weightconfig_t ;
struct TYPE_5__ {int numiteminfo; TYPE_1__* iteminfo; } ;
typedef TYPE_2__ itemconfig_t ;
struct TYPE_4__ {int classname; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;

int *FUNC_3(weightconfig_t *VAR_0, itemconfig_t *VAR_1)
{
 int *VAR_2, VAR_3;


 VAR_2 = (int *) FUNC_1(sizeof(int) * VAR_1->numiteminfo);

 for (VAR_3 = 0; VAR_3 < VAR_1->numiteminfo; VAR_3++)
 {
  VAR_2[VAR_3] = FUNC_0(VAR_0, VAR_1->iteminfo[VAR_3].classname);
  if (VAR_2[VAR_3] < 0)
  {
   FUNC_2("item info %d \"%s\" has no fuzzy weight\r\n", VAR_3, VAR_1->iteminfo[VAR_3].classname);
  }
 }
 return VAR_2;
}
