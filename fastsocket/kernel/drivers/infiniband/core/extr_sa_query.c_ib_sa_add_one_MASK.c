
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_port {int dummy; } ;
struct ib_sa_device {int start_port; int end_port; TYPE_1__* port; int event_handler; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;
struct TYPE_2__ {int port_num; int agent; int update_task; int * sm_ah; int ah_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int FUNC_1 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ib_device*,int,int ,int *,int ,int ,int ,struct ib_sa_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct ib_device*,int *,struct ib_sa_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_sa_device*) ;
 struct ib_sa_device* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct ib_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ib_device *VAR_9)
{
 struct ib_sa_device *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (FUNC_9(VAR_9->node_type) != VAR_4)
  return;

 if (VAR_9->node_type == VAR_3)
  VAR_11 = VAR_12 = 0;
 else {
  VAR_11 = 1;
  VAR_12 = VAR_9->phys_port_cnt;
 }

 VAR_10 = FUNC_8(sizeof *VAR_10 +
    (VAR_12 - VAR_11 + 1) * sizeof (struct ib_sa_port),
    VAR_0);
 if (!VAR_10)
  return;

 VAR_10->start_port = VAR_11;
 VAR_10->end_port = VAR_12;

 for (VAR_13 = 0; VAR_13 <= VAR_12 - VAR_11; ++VAR_13) {
  FUNC_11(&VAR_10->port[VAR_13].ah_lock);
  if (FUNC_10(VAR_9, VAR_13 + 1) != VAR_1)
   continue;

  VAR_10->port[VAR_13].sm_ah = ((void*)0);
  VAR_10->port[VAR_13].port_num = VAR_13 + VAR_11;

  VAR_10->port[VAR_13].agent =
   FUNC_4(VAR_9, VAR_13 + VAR_11, VAR_2,
           ((void*)0), 0, VAR_8,
           VAR_6, VAR_10);
  if (FUNC_2(VAR_10->port[VAR_13].agent))
   goto err;

  FUNC_1(&VAR_10->port[VAR_13].update_task, FUNC_12);
 }

 FUNC_5(VAR_9, &VAR_7, VAR_10);
 FUNC_0(&VAR_10->event_handler, VAR_9, VAR_5);
 if (FUNC_3(&VAR_10->event_handler))
  goto err;

 for (VAR_13 = 0; VAR_13 <= VAR_12 - VAR_11; ++VAR_13)
  if (FUNC_10(VAR_9, VAR_13 + 1) == VAR_1)
   FUNC_12(&VAR_10->port[VAR_13].update_task);

 return;

err:
 while (--VAR_13 >= 0)
  if (FUNC_10(VAR_9, VAR_13 + 1) == VAR_1)
   FUNC_6(VAR_10->port[VAR_13].agent);

 FUNC_7(VAR_10);

 return;
}
