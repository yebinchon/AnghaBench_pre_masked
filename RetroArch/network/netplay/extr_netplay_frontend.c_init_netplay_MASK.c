
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct retro_callbacks {int member_0; } ;
struct TYPE_11__ {int netplay_start_as_spectator; int netplay_use_mitm_server; scalar_t__ netplay_nat_traversal; int netplay_stateless_mode; scalar_t__ netplay_public_announce; } ;
struct TYPE_10__ {scalar_t__ username; } ;
struct TYPE_9__ {int netplay_check_frames; } ;
struct TYPE_12__ {TYPE_3__ bools; TYPE_2__ paths; TYPE_1__ ints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {scalar_t__ is_server; } ;
typedef TYPE_5__ netplay_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct retro_callbacks*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_17 ;
 TYPE_5__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_9 (void*,char const*,unsigned int,int ,int ,struct retro_callbacks*,int,scalar_t__,int) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int ,int ,int,int,int *,int ,int ) ;
 char const* VAR_21 ;
 unsigned int VAR_22 ;

bool FUNC_12(void *VAR_23, const char *VAR_24, unsigned VAR_25)
{
   struct retro_callbacks VAR_26 = {0};
   settings_t *VAR_27 = FUNC_2();
   uint64_t VAR_28 = 0;
   uint64_t VAR_29 = 0;
   bool VAR_30 = VAR_20;
   bool VAR_31 = VAR_19;

   if (!VAR_31)
      return 0;

   FUNC_4(&VAR_26);
   if (!FUNC_5())
      return 0;


   VAR_28 = FUNC_3();
   if (VAR_28 & ~((uint64_t) VAR_12))
   {

      VAR_29 |= VAR_13;
   }
   if (VAR_28 & VAR_9)
      VAR_29 |= VAR_13;
   if (VAR_28 & VAR_10)
      VAR_29 |= VAR_14;
   if (VAR_28 & VAR_8)
      VAR_29 |= VAR_6;
   if (VAR_28 & VAR_7)
      VAR_29 |= VAR_5;
   if (VAR_28 & VAR_11)
      VAR_29 |= VAR_15;

   if (VAR_30)
   {
      FUNC_0("[netplay] %s\n", FUNC_7(VAR_2));
   }
   else
   {
      FUNC_0("[netplay] %s\n", FUNC_7(VAR_4));
      FUNC_11(
         FUNC_7(VAR_4),
         0, 180, 0,
         ((void*)0), VAR_1, VAR_0);

      if (VAR_27->bools.netplay_public_announce)
         FUNC_8();
   }

   VAR_18 = (netplay_t*)FUNC_9(
         VAR_30 ? VAR_23 : ((void*)0),
         VAR_30 ? (!VAR_17 ? VAR_24
            : VAR_21) : ((void*)0),
         VAR_30 ? (!VAR_17 ? VAR_25
            : VAR_22 ) : (VAR_25 != 0 ? VAR_25 : VAR_16),
         VAR_27->bools.netplay_stateless_mode,
         VAR_27->ints.netplay_check_frames,
         &VAR_26,
         VAR_27->bools.netplay_nat_traversal && !VAR_27->bools.netplay_use_mitm_server,



         VAR_27->paths.username,
         VAR_29);

   if (VAR_18)
   {
      if (VAR_18->is_server && !VAR_27->bools.netplay_start_as_spectator)
         FUNC_10(VAR_18);
      return 1;
   }

   FUNC_1("%s\n", FUNC_7(VAR_3));

   FUNC_11(
         FUNC_7(VAR_3),
         0, 180, 0,
         ((void*)0), VAR_1, VAR_0);
   return 0;
}
