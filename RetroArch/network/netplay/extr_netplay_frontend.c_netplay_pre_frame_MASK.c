
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct timeval {int member_0; } ;
struct TYPE_17__ {int netplay_use_mitm_server; scalar_t__ netplay_public_announce; } ;
struct TYPE_19__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_16__ {scalar_t__ have_inet4; scalar_t__ request_outstanding; int nfds; int fds; } ;
struct TYPE_20__ {int quirks; int connected_players; scalar_t__ remote_paused; scalar_t__ stall; scalar_t__ is_server; TYPE_2__* connections; TYPE_14__ nat_traversal_state; int nat_traversal_task_oustanding; scalar_t__ nat_traversal; scalar_t__ local_paused; } ;
typedef TYPE_4__ netplay_t ;
typedef int fd_set ;
struct TYPE_18__ {int active; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ,int *,int *,int *,struct timeval*) ;

bool FUNC_12(netplay_t *VAR_3)
{
   bool VAR_4;
   settings_t *VAR_5 = FUNC_0();

   FUNC_10(VAR_3);

   if (VAR_5->bools.netplay_public_announce)
   {
      VAR_2++;
      if ((VAR_3->is_server || VAR_1) && (VAR_2 % 600 == 0))
         FUNC_2();
   }

   else
      VAR_2 = -1;


   if (VAR_3->local_paused)
      FUNC_5(VAR_3, 0);


   if (VAR_3->quirks & VAR_0)
      FUNC_9(VAR_3);

   if (VAR_3->is_server && !VAR_5->bools.netplay_use_mitm_server)
   {

      FUNC_6(VAR_3);


      if (VAR_3->nat_traversal &&
          !VAR_3->nat_traversal_task_oustanding &&
          VAR_3->nat_traversal_state.request_outstanding &&
          !VAR_3->nat_traversal_state.have_inet4)
      {
         struct timeval VAR_6 = {0};
         fd_set VAR_7 = VAR_3->nat_traversal_state.fds;
         if (FUNC_11(VAR_3->nat_traversal_state.nfds, &VAR_7, ((void*)0), ((void*)0), &VAR_6) > 0)
            FUNC_1(&VAR_3->nat_traversal_state);


         if (!VAR_3->nat_traversal_state.request_outstanding ||
             VAR_3->nat_traversal_state.have_inet4)
            FUNC_3(VAR_3);

      }
   }

   VAR_4 = !FUNC_8(VAR_3);


   if (!VAR_3->is_server && !VAR_3->connections[0].active)
   {
      FUNC_4(VAR_3);
      return 1;
   }

   if (VAR_4 ||
       ((!VAR_3->is_server || (VAR_3->connected_players>1)) &&
        (VAR_3->stall || VAR_3->remote_paused)))
   {


      FUNC_7(VAR_3, 1);
      return 0;
   }
   return 1;
}
