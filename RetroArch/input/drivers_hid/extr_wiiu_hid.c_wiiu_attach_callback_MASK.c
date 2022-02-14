
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ wiiu_attach_event ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef int HIDDevice ;
typedef int HIDClient ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_5(HIDClient *VAR_2,
      HIDDevice *VAR_3, uint32_t VAR_4)
{
   wiiu_attach_event *VAR_5 = ((void*)0);

   if (VAR_4)
   {
      FUNC_0("[hid]: Device attach event generated.\n");
      FUNC_2(VAR_3);
   }
   else
   {
      FUNC_0("[hid]: Device detach event generated.\n");
   }

   if (VAR_3)
      VAR_5 = FUNC_3(VAR_3);

   if (!VAR_5)
      goto error;

   VAR_5->type = VAR_4;
   FUNC_4(VAR_5);

   return VAR_1;

error:
   FUNC_1(VAR_5);
   return VAR_0;
}
