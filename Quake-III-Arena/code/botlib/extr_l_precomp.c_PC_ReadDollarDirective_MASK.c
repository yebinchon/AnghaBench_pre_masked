
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ linescrossed; scalar_t__ type; int string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;
struct TYPE_6__ {int (* func ) (int *) ;scalar_t__ name; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(source_t *VAR_3)
{
 token_t VAR_4;
 int VAR_5;


 if (!FUNC_0(VAR_3, &VAR_4))
 {
  FUNC_2(VAR_3, "found $ without name");
  return VAR_2;
 }

 if (VAR_4.linescrossed > 0)
 {
  FUNC_1(VAR_3, &VAR_4);
  FUNC_2(VAR_3, "found $ at end of line");
  return VAR_2;
 }

 if (VAR_4.type == VAR_0)
 {

  for (VAR_5 = 0; VAR_1[VAR_5].name; VAR_5++)
  {
   if (!FUNC_3(VAR_1[VAR_5].name, VAR_4.string))
   {
    return VAR_1[VAR_5].func(VAR_3);
   }
  }
 }
 FUNC_1(VAR_3, &VAR_4);
 FUNC_2(VAR_3, "unknown precompiler directive %s", VAR_4.string);
 return VAR_2;
}
