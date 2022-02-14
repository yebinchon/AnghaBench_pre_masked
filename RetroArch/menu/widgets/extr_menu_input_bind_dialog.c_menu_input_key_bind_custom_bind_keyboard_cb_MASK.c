
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int input_bind_timeout; int input_bind_hold; } ;
struct TYPE_8__ {TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_7__ {int key; } ;
struct TYPE_9__ {scalar_t__ begin; scalar_t__ last; int timer_timeout; int timer_hold; TYPE_2__* output; TYPE_2__ buffer; } ;


 TYPE_3__* FUNC_0 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(
      void *VAR_1, unsigned VAR_2)
{
   settings_t *VAR_3 = FUNC_0();


   VAR_0.buffer.key = (enum retro_key)VAR_2;


   *(VAR_0.output)=VAR_0.buffer;


   VAR_0.begin++;
   VAR_0.output++;
   VAR_0.buffer=*(VAR_0.output);
   FUNC_1(&VAR_0.timer_hold, VAR_3->uints.input_bind_hold);
   FUNC_1(&VAR_0.timer_timeout, VAR_3->uints.input_bind_timeout);

   return (VAR_0.begin <= VAR_0.last);
}
