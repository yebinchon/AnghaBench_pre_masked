
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_dict; TYPE_1__* dict; } ;
typedef TYPE_2__ ccd_struct ;
struct TYPE_4__ {int value; int name; int section; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(ccd_struct *VAR_0, char *VAR_1, char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_dict; VAR_3++)
 {
  if (FUNC_0(VAR_0->dict[VAR_3].section, VAR_1) == 0 &&
    FUNC_0(VAR_0->dict[VAR_3].name, VAR_2) == 0)
   return FUNC_1(VAR_0->dict[VAR_3].value, ((void*)0), 0);
 }

 return -1;
}
