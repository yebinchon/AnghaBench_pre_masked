
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_driver ;
typedef int ident ;
typedef int config_file_t ;
struct TYPE_3__ {int vid; int pid; char* name; } ;
typedef TYPE_1__ autoconfig_params_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;
 scalar_t__ FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(config_file_t *VAR_2,
      autoconfig_params_t *VAR_3)
{
   char VAR_4[256];
   char VAR_5[32];
   int VAR_6 = 0;
   int VAR_7 = 0;
   int VAR_8 = 0;
   int VAR_9 = 0;

   VAR_4[0] = VAR_5[0] = '\0';

   FUNC_0(VAR_2, "input_device", VAR_4, sizeof(VAR_4));
   FUNC_0(VAR_2, "input_driver", VAR_5, sizeof(VAR_5));

   if (FUNC_1 (VAR_2, "input_vendor_id", &VAR_6))
      VAR_7 = VAR_6;

   if (FUNC_1 (VAR_2, "input_product_id", &VAR_6))
      VAR_8 = VAR_6;

   if (VAR_3->vid == VAR_1)
      VAR_8 = VAR_0;


   if ( (VAR_3->vid == VAR_7)
         && (VAR_3->pid == VAR_8)
         && (VAR_3->vid != 0)
         && (VAR_3->pid != 0)
         && (VAR_3->vid != VAR_1)
         && (VAR_3->pid != VAR_0))
      VAR_9 += 3;


   if (!FUNC_2(VAR_3->name)
         && !FUNC_2(VAR_4)
         && FUNC_3(VAR_4, VAR_3->name))
      VAR_9 += 2;

   return VAR_9;
}
