
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct menu_bind_state {TYPE_1__* state; } ;
struct TYPE_8__ {int (* poll ) () ;} ;
typedef TYPE_2__ input_device_driver_t ;
struct TYPE_7__ {int * hats; int * axes; int * buttons; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (TYPE_2__ const*,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_2__ const*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,unsigned int,int ,unsigned int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(
      const input_device_driver_t *VAR_7,
      struct menu_bind_state *VAR_8,
      unsigned VAR_9,
      bool VAR_10)
{
   unsigned VAR_11, VAR_12, VAR_13;
    if (!VAR_7)
        return;

    if (VAR_7->poll)
        VAR_7->poll();


    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        VAR_8->state[VAR_9].buttons[VAR_11] =
           FUNC_1(VAR_7, VAR_9, VAR_11);

    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
        VAR_8->state[VAR_9].axes[VAR_12] =
           FUNC_0(VAR_7, VAR_9, VAR_12);

    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    {
        if (FUNC_2(VAR_7, VAR_9, VAR_3, VAR_13))
            VAR_8->state[VAR_9].hats[VAR_13] |= VAR_3;
        if (FUNC_2(VAR_7, VAR_9, VAR_0, VAR_13))
            VAR_8->state[VAR_9].hats[VAR_13] |= VAR_0;
        if (FUNC_2(VAR_7, VAR_9, VAR_1, VAR_13))
            VAR_8->state[VAR_9].hats[VAR_13] |= VAR_1;
        if (FUNC_2(VAR_7, VAR_9, VAR_2, VAR_13))
            VAR_8->state[VAR_9].hats[VAR_13] |= VAR_2;
    }
}
