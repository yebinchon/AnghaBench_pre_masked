
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int indexessetup; } ;
struct TYPE_3__ {int (* Print ) (int ,char*,char*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*,char*,char*) ;

int FUNC_2(char *VAR_3, char *VAR_4[], int VAR_5, char *VAR_6)
{
 int VAR_7;
 if (!VAR_1.indexessetup)
 {
  VAR_2.Print(VAR_0, "%s: index not setup \"%s\"\n", VAR_3, VAR_6);
  return 0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  if (!VAR_4[VAR_7]) continue;
  if (!FUNC_0(VAR_4[VAR_7], VAR_6)) return VAR_7;
 }
 return 0;
}
