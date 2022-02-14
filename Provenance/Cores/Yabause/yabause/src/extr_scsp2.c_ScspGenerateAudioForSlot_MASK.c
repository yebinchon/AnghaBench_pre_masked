
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ env_counter; int (* audiogen ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ SlotState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(SlotState *VAR_1, u32 VAR_2)
{
   if (VAR_1->env_counter >= VAR_0)
      return;

   (*VAR_1->audiogen)(VAR_1, VAR_2);
}
