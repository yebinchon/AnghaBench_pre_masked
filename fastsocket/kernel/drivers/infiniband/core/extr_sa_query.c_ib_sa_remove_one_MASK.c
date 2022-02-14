
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_sa_device {int end_port; int start_port; TYPE_2__* port; int event_handler; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sm_ah; int agent; } ;
struct TYPE_3__ {int ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ib_sa_device* FUNC_1 (struct ib_device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct ib_sa_device*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct ib_device*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_4)
{
 struct ib_sa_device *VAR_5 = FUNC_1(VAR_4, &VAR_3);
 int VAR_6;

 if (!VAR_5)
  return;

 FUNC_2(&VAR_5->event_handler);

 FUNC_0(VAR_2);

 for (VAR_6 = 0; VAR_6 <= VAR_5->end_port - VAR_5->start_port; ++VAR_6) {
  if (FUNC_6(VAR_4, VAR_6 + 1) == VAR_0) {
   FUNC_3(VAR_5->port[VAR_6].agent);
   if (VAR_5->port[VAR_6].sm_ah)
    FUNC_5(&VAR_5->port[VAR_6].sm_ah->ref, VAR_1);
  }

 }

 FUNC_4(VAR_5);
}
