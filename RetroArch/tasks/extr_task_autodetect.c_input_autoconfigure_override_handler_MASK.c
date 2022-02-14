
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
struct TYPE_8__ {char* name; int index; } ;
typedef TYPE_1__ blissbox_pad_type_t ;
struct TYPE_9__ {scalar_t__ vid; scalar_t__ pid; int name; } ;
typedef TYPE_2__ autoconfig_params_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_5 ;
 TYPE_1__ const** VAR_6 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(autoconfig_params_t *VAR_7)
{
   if (VAR_7->vid == VAR_4)
   {
      if (VAR_7->pid == VAR_3)
         FUNC_1("[Autoconf]: Bliss-Box in update mode detected. Ignoring.\n");
      else if (VAR_7->pid == VAR_1)
         FUNC_1("[Autoconf]: Bliss-Box 1.0 firmware detected. Please update to 2.0 or later.\n");
      else if (VAR_7->pid >= VAR_2 && VAR_7->pid <= VAR_2 + VAR_0)
      {
         const blissbox_pad_type_t *VAR_8;
         char VAR_9[255] = {0};
         int VAR_10 = VAR_7->pid - VAR_2;

         FUNC_1("[Autoconf]: Bliss-Box detected. Getting pad type...\n");

         if (VAR_6[VAR_10])
            VAR_8 = VAR_6[VAR_10];
         else
            VAR_8 = FUNC_3(VAR_7->vid, VAR_7->pid);

         if (VAR_8 && !FUNC_5(VAR_8->name))
         {
            FUNC_1("[Autoconf]: Found Bliss-Box pad type: %s (%d) in port#%d\n", VAR_8->name, VAR_8->index, VAR_10);

            if (VAR_7->name)
               FUNC_2(VAR_7->name);


            FUNC_6(VAR_9, "Bliss-Box 4-Play ", sizeof(VAR_9));
            FUNC_6(VAR_9, VAR_8->name, sizeof(VAR_9));

            VAR_7->name = FUNC_4(VAR_9);

            VAR_6[VAR_10] = VAR_8;
         }

         else
            VAR_6[VAR_10] = &VAR_5[FUNC_0(VAR_5) - 1];
      }
   }
}
