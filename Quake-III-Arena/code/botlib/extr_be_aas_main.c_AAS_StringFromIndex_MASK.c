
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int indexessetup; } ;
struct TYPE_3__ {int (* Print ) (int ,char*,char*,int) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*,char*,int) ;

char *FUNC_3(char *VAR_3, char *VAR_4[], int VAR_5, int VAR_6)
{
 if (!VAR_1.indexessetup)
 {
  VAR_2.Print(VAR_0, "%s: index %d not setup\n", VAR_3, VAR_6);
  return "";
 }
 if (VAR_6 < 0 || VAR_6 >= VAR_5)
 {
  VAR_2.Print(VAR_0, "%s: index %d out of range\n", VAR_3, VAR_6);
  return "";
 }
 if (!VAR_4[VAR_6])
 {
  if (VAR_6)
  {
   VAR_2.Print(VAR_0, "%s: reference to unused index %d\n", VAR_3, VAR_6);
  }
  return "";
 }
 return VAR_4[VAR_6];
}
