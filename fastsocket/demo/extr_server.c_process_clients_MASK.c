
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct worker_data {int cpu_id; } ;
struct TYPE_4__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct context_pool {int dummy; } ;
struct conn_context {int fd; int cpu_id; int ep_fd; int events; int flags; int end_fd; int (* handler ) (struct conn_context*) ;} ;
struct TYPE_6__ {int listen_fd; } ;
struct TYPE_5__ {int polls_min; int polls_max; int polls_sum; int polls_cnt; int polls_avg; int polls_lst; int polls_mpt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct conn_context* FUNC_0 (struct context_pool*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int,struct epoll_event*) ;
 int FUNC_4 (int,struct epoll_event*,int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct context_pool* FUNC_6 (int ) ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int) ;
 int FUNC_9 (struct conn_context*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct conn_context*) ;
 TYPE_2__* VAR_16 ;

void *FUNC_12(void *VAR_17)
{
 int VAR_18;
 struct worker_data *VAR_19 = (struct worker_data *)VAR_17;
 struct context_pool *VAR_20;

 struct epoll_event VAR_21;
 struct epoll_event VAR_22[VAR_5];

 int VAR_23;
 int VAR_24;
 int VAR_25;

 struct conn_context *VAR_26;

 if (VAR_8)
  VAR_12 = VAR_11;
 else
  VAR_12 = VAR_10;

 VAR_13 = FUNC_10(VAR_12);

 VAR_18 = FUNC_1(VAR_19->cpu_id);
 if (VAR_18 < 0) {
  FUNC_7("Unable to Bind worker on CPU");
  FUNC_5();
 }

 VAR_20 = FUNC_6(VAR_6);

 if ((VAR_24 = FUNC_2(VAR_6)) < 0) {
  FUNC_7("Unable to create epoll FD");
  FUNC_5();
 }

 for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++) {
  VAR_26 = FUNC_0(VAR_20);

  VAR_26->fd = VAR_14[VAR_25].listen_fd;
  VAR_26->handler = FUNC_9;
  VAR_23 = VAR_19->cpu_id;
  VAR_26->cpu_id = VAR_23;
  VAR_26->ep_fd = VAR_24;

  VAR_21.events = VAR_3 | VAR_2 | VAR_1;
  VAR_21.data.ptr = VAR_26;

  if (FUNC_3(VAR_26->ep_fd, VAR_4, VAR_26->fd, &VAR_21) < 0) {
   FUNC_7("Unable to add Listen Socket to epoll");
   FUNC_5();
  }
 }

 VAR_16[VAR_23].polls_min = VAR_5;

 while (1) {
  int VAR_27;
  int VAR_28;
  int VAR_29;

  VAR_27 = FUNC_4(VAR_24, VAR_22, VAR_5, -1);
  if (VAR_27 < 0) {
   if (VAR_9 == VAR_0)
    continue;
   FUNC_7("epoll_wait() error");
  }
  if (!VAR_27)
   VAR_16[VAR_23].polls_mpt++;
  else if (VAR_27 < VAR_16[VAR_23].polls_min)
   VAR_16[VAR_23].polls_min = VAR_27;
  if (VAR_27 > VAR_16[VAR_23].polls_max)
   VAR_16[VAR_23].polls_max = VAR_27;

  VAR_16[VAR_23].polls_sum += VAR_27;
  VAR_16[VAR_23].polls_cnt++;
  VAR_16[VAR_23].polls_avg = VAR_16[VAR_23].polls_sum / VAR_16[VAR_23].polls_cnt;
  VAR_16[VAR_23].polls_lst = VAR_27;

  for (VAR_28 = 0 ; VAR_28 < VAR_27; VAR_28++) {
   int VAR_30;

   VAR_29 = VAR_22[VAR_28].events;
   VAR_26 = VAR_22[VAR_28].data.ptr;
   VAR_26->events = VAR_29;

   if (VAR_26->flags & VAR_7)
    VAR_30 = VAR_26->end_fd;
   else
    VAR_30 = VAR_26->fd;

   FUNC_8("%dth event[0x%x] at fd %d\n", VAR_28, VAR_29, VAR_30);

   VAR_26->handler(VAR_26);
  }
 }
 return ((void*)0);
}
