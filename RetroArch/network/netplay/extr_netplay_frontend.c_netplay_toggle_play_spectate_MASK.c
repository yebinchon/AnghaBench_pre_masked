
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ self_mode; } ;
typedef TYPE_1__ netplay_t ;
typedef enum rarch_netplay_connection_mode { ____Placeholder_rarch_netplay_connection_mode } rarch_netplay_connection_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(netplay_t *VAR_3)
{
   enum rarch_netplay_connection_mode VAR_4;

   if (VAR_3->self_mode == VAR_0 ||
       VAR_3->self_mode == VAR_1)
   {

      VAR_3->self_mode = VAR_2;
      VAR_4 = VAR_2;
   }
   else if (VAR_3->self_mode == VAR_2)
   {

      VAR_4 = VAR_0;
   }
   else
      return;

   FUNC_0(VAR_3, VAR_4);
}
