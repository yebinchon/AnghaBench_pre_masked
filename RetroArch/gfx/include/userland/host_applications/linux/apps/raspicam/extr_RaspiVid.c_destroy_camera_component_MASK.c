
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * camera_component; } ;
typedef TYPE_1__ RASPIVID_STATE ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(RASPIVID_STATE *VAR_0)
{
   if (VAR_0->camera_component)
   {
      FUNC_0(VAR_0->camera_component);
      VAR_0->camera_component = ((void*)0);
   }
}
