
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* descr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, const char **VAR_2)
{
   int VAR_3 = 0;
   (void)VAR_1; (void)VAR_2;
   while (VAR_0[VAR_3].name)
   {
      FUNC_0("%-20s %s\n", VAR_0[VAR_3].name, VAR_0[VAR_3].descr);
      VAR_3++;
   }
   return 0;
}
