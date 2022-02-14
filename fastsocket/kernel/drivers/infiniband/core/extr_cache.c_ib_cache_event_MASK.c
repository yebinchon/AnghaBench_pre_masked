
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_update_work {int work; int port_num; int device; } ;
struct ib_event_handler {int dummy; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {scalar_t__ event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct ib_update_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ib_event_handler *VAR_10,
      struct ib_event *VAR_11)
{
 struct ib_update_work *VAR_12;

 if (VAR_11->event == VAR_6 ||
     VAR_11->event == VAR_5 ||
     VAR_11->event == VAR_3 ||
     VAR_11->event == VAR_4 ||
     VAR_11->event == VAR_7 ||
     VAR_11->event == VAR_1 ||
     VAR_11->event == VAR_2) {
  VAR_12 = FUNC_1(sizeof *VAR_12, VAR_0);
  if (VAR_12) {
   FUNC_0(&VAR_12->work, VAR_8);
   VAR_12->device = VAR_11->device;
   VAR_12->port_num = VAR_11->element.port_num;
   FUNC_2(VAR_9, &VAR_12->work);
  }
 }
}
