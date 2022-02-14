
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int exist; int active; scalar_t__ bandwidth; scalar_t__ new; } ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__ state; } ;
typedef TYPE_3__ pvc_device ;
typedef int hdlc_device ;
struct TYPE_6__ {scalar_t__ lmi; int dce; } ;
struct TYPE_9__ {int reliable; int dce_changed; TYPE_1__ settings; scalar_t__ n391cnt; TYPE_3__* first_pvc; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,TYPE_3__*) ;
 TYPE_4__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(int VAR_1, struct net_device *VAR_2)
{
 hdlc_device *VAR_3 = FUNC_0(VAR_2);
 pvc_device *VAR_4 = FUNC_4(VAR_3)->first_pvc;

 FUNC_4(VAR_3)->reliable = VAR_1;
 if (VAR_1) {
  FUNC_1(VAR_2);
  FUNC_4(VAR_3)->n391cnt = 0;
  FUNC_4(VAR_3)->dce_changed = 1;

  if (FUNC_4(VAR_3)->settings.lmi == VAR_0) {
   while (VAR_4) {
    FUNC_3(1, VAR_4);
    VAR_4->state.exist = VAR_4->state.active = 1;
    VAR_4->state.new = 0;
    VAR_4 = VAR_4->next;
   }
  }
 } else {
  FUNC_2(VAR_2);
  while (VAR_4) {
   FUNC_3(0, VAR_4);
   VAR_4->state.exist = VAR_4->state.active = 0;
   VAR_4->state.new = 0;
   if (!FUNC_4(VAR_3)->settings.dce)
    VAR_4->state.bandwidth = 0;
   VAR_4 = VAR_4->next;
  }
 }
}
