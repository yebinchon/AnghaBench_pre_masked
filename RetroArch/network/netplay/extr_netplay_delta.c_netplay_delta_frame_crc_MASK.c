
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct delta_frame {scalar_t__ state; } ;
struct TYPE_3__ {int state_size; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 (long,unsigned char const*,int ) ;

uint32_t FUNC_1(netplay_t *VAR_0, struct delta_frame *VAR_1)
{
   if (!VAR_0->state_size)
      return 0;
   return FUNC_0(0L, (const unsigned char*)VAR_1->state, VAR_0->state_size);
}
