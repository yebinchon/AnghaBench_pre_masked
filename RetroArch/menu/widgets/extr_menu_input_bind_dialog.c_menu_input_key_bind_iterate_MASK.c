
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct menu_bind_state {scalar_t__ begin; scalar_t__ last; int timer_timeout; int timer_hold; int * output; int buffer; scalar_t__ skip; } ;
struct TYPE_8__ {int input_bind_timeout; int input_bind_hold; } ;
struct TYPE_9__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_10__ {int len; int s; } ;
typedef TYPE_3__ menu_input_ctx_bind_t ;
struct TYPE_11__ {int keyboard_mapping_blocked; } ;
typedef TYPE_4__ input_driver_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 struct menu_bind_state VAR_4 ;
 int FUNC_5 (struct menu_bind_state*,int ,int) ;
 scalar_t__ FUNC_6 (struct menu_bind_state*,int *) ;
 scalar_t__ FUNC_7 (struct menu_bind_state*,struct menu_bind_state*,int *) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,char*,char*,...) ;

bool FUNC_14(menu_input_ctx_bind_t *VAR_5)
{
   bool VAR_6 = 0;
   settings_t * VAR_7 = FUNC_0();

   if (!VAR_5)
      return 0;

   FUNC_13( VAR_5->s, VAR_5->len,
             "[%s]\npress keyboard, mouse or joypad\n(timeout %d %s)",
             FUNC_1(
                VAR_4.begin - VAR_1 ),
             FUNC_10( &VAR_4.timer_timeout ),
             FUNC_8( VAR_0 ) );


   FUNC_12( &VAR_4.timer_timeout );
   FUNC_12( &VAR_4.timer_hold );

   if (FUNC_11(&VAR_4.timer_timeout))
   {
      input_driver_t *VAR_8 = FUNC_3();

      if (VAR_8)
         VAR_8->keyboard_mapping_blocked = 0;


      VAR_4.begin++;
      VAR_4.output++;
      FUNC_9(&VAR_4.timer_hold, VAR_7->uints.input_bind_hold);
      FUNC_9(&VAR_4.timer_timeout, VAR_7->uints.input_bind_timeout);
      VAR_6 = 1;
   }


   if (VAR_4.begin > VAR_4.last)
   {

      FUNC_2();


      if (VAR_6)
         FUNC_4(VAR_2, ((void*)0));

      return 1;
   }

   {
      bool VAR_9 = 0;
      struct menu_bind_state VAR_10 = VAR_4;
      input_driver_t *VAR_11 = FUNC_3();

      if (VAR_11)
         VAR_11->keyboard_mapping_blocked = 1;

      FUNC_5( &VAR_10, VAR_3, VAR_6 );
      if ( ( VAR_10.skip && !VAR_4.skip ) ||
         FUNC_7( &VAR_4, &VAR_10, &( VAR_10.buffer ) ) )
      {
         VAR_9 = 1;
      }



      if ( VAR_9 )
      {
         input_driver_t *VAR_12 = FUNC_3();


         *( VAR_10.output ) = VAR_10.buffer;

         if (VAR_12)
            VAR_12->keyboard_mapping_blocked = 0;


         FUNC_2();

         VAR_10.begin++;

         if ( VAR_10.begin > VAR_10.last )
         {
            FUNC_4( VAR_2, ((void*)0) );
            return 1;
         }


         VAR_10.output++;
         VAR_10.buffer = *( VAR_10.output );
         FUNC_9( &VAR_10.timer_hold, VAR_7->uints.input_bind_hold );
         FUNC_9( &VAR_10.timer_timeout, VAR_7->uints.input_bind_timeout );
      }

      VAR_4 = VAR_10;
   }

   return 0;
}
