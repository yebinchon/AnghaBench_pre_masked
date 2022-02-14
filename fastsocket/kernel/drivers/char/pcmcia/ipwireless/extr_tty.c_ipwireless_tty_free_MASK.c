
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_tty {size_t index; int closing; int ipw_tty_mutex; int channel_idx; scalar_t__ open_count; int * linux_tty; struct ipw_network* network; } ;
struct ipw_network {int dummy; } ;
struct TYPE_3__ {scalar_t__ minor_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ipw_tty*) ;
 int FUNC_1 () ;
 struct ipw_tty* FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct ipw_network*,int ) ;
 int FUNC_4 (struct ipw_tty*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ipw_tty*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 struct ipw_tty** VAR_3 ;

void FUNC_10(struct ipw_tty *VAR_4)
{
 int VAR_5;
 struct ipw_network *VAR_6 = VAR_3[VAR_4->index]->network;

 for (VAR_5 = VAR_4->index; VAR_5 < VAR_0;
   VAR_5 += VAR_1) {
  struct ipw_tty *VAR_7 = VAR_3[VAR_5];

  if (VAR_7) {
   FUNC_5(&VAR_7->ipw_tty_mutex);
   if (FUNC_2(VAR_5 + VAR_2->minor_start) == VAR_7)
    FUNC_7(VAR_7);
   VAR_7->closing = 1;
   if (VAR_7->linux_tty != ((void*)0)) {
    FUNC_6(&VAR_7->ipw_tty_mutex);
    FUNC_8(VAR_7->linux_tty);

    FUNC_1();


    FUNC_5(&VAR_7->ipw_tty_mutex);
   }
   while (VAR_7->open_count)
    FUNC_0(VAR_7);
   FUNC_3(VAR_6,
            VAR_7->channel_idx);
   FUNC_9(VAR_2, VAR_5);
   VAR_3[VAR_5] = ((void*)0);
   FUNC_6(&VAR_7->ipw_tty_mutex);
   FUNC_4(VAR_7);
  }
 }
}
