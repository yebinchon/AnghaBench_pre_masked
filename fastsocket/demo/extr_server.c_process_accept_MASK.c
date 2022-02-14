
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct context_pool {int dummy; } ;
struct conn_context {int events; int cpu_id; int fd; int fd_added; int ep_fd; int handler; struct context_pool* pool; } ;
struct TYPE_4__ {int accept_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int *) ;
 struct conn_context* FUNC_1 (struct context_pool*) ;
 int FUNC_2 (struct conn_context*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ,int,struct epoll_event*) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct conn_context*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (struct conn_context*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_9(struct conn_context * VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15 = VAR_12->events;
 struct epoll_event VAR_16;

 struct context_pool *VAR_17;
 struct conn_context *VAR_18;

 int VAR_19 = VAR_12->cpu_id;
 int VAR_20 = 0;
 int VAR_21;

 VAR_14 = VAR_12->fd;


 if (VAR_15 & (VAR_2 | VAR_1))
  return;

 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
  int VAR_22;

  VAR_13 = FUNC_0(VAR_14, ((void*)0), ((void*)0));
  if (VAR_13 < 0) {
   VAR_11[VAR_19].accept_cnt++;
   goto back;
  }

  VAR_22 = FUNC_4(VAR_13, VAR_5, 0);
  VAR_22 |= VAR_7;
  FUNC_4(VAR_13, VAR_6, VAR_22);

  FUNC_7("Accept socket %d from %d\n", VAR_13, VAR_14);
 }

 VAR_17 = VAR_12->pool;
 VAR_18 = FUNC_1(VAR_17);
 FUNC_2(VAR_18);

 VAR_18->fd = VAR_13;

 if (VAR_8)
  VAR_18->handler = VAR_10;
 else
  VAR_18->handler = VAR_9;

 VAR_18->cpu_id = VAR_12->cpu_id;
 VAR_18->ep_fd = VAR_12->ep_fd;

 VAR_16.events = VAR_3 | VAR_2 | VAR_1;
 VAR_16.data.ptr = VAR_18;

 VAR_20 = FUNC_3(VAR_18->ep_fd, VAR_4, VAR_18->fd, &VAR_16);
 if (VAR_20 < 0) {
  FUNC_6("Unable to add client socket read event to epoll");
  goto free_back;
 }

 VAR_18->fd_added = 1;

 goto back;

free_back:

 FUNC_7("cpu[%d] close socket %d\n", VAR_19, VAR_18->fd);

 FUNC_8(VAR_18);
 FUNC_5(VAR_18);
back:
 return;
}
