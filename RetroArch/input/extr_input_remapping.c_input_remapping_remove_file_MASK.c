
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int directory_input_remapping; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char const*,size_t) ;
 int FUNC_3 (char*,char*,char*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(const char *VAR_1)
{
   bool VAR_2 = 0;
   size_t VAR_3 = VAR_0 * sizeof(char);
   char *VAR_4 = (char*)FUNC_5(VAR_0 * sizeof(char));
   char *VAR_5 = (char*)FUNC_5(VAR_0 * sizeof(char));
   settings_t *VAR_6 = FUNC_0();

   VAR_4[0] = VAR_5[0] = '\0';

   FUNC_2(VAR_4, VAR_6->paths.directory_input_remapping,
         VAR_1, VAR_3);

   FUNC_3(VAR_5, VAR_4, ".rmp", VAR_3);

   VAR_2 = FUNC_1(VAR_5) == 0 ? 1 : 0;
   FUNC_4(VAR_4);
   FUNC_4(VAR_5);
   return VAR_2;
}
