
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mainver; int minor; } ;
typedef scalar_t__ Result ;
typedef TYPE_1__ OS_VersionBin ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(char* VAR_0, size_t VAR_1, int* VAR_2, int* VAR_3)
{
   OS_VersionBin VAR_4;
   OS_VersionBin VAR_5;

   FUNC_1(VAR_0, "3DS OS", VAR_1);
   Result VAR_6 = FUNC_0(&VAR_5, &VAR_4);
   if (VAR_6 == 0)
   {
      *VAR_2 = VAR_4.mainver;
      *VAR_3 = VAR_4.minor;
   }
   else
   {
      *VAR_2 = 0;
      *VAR_3 = 0;
   }

}
