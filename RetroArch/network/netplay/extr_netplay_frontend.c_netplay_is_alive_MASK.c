
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ self_mode; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(netplay_t *VAR_1)
{
   if (!VAR_1)
      return 0;
   return (VAR_1->is_server) ||
          (!VAR_1->is_server && VAR_1->self_mode >= VAR_0);
}
