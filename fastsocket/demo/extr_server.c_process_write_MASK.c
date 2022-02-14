
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct conn_context {int events; int cpu_id; int ep_fd; int fd; int handler; } ;
struct TYPE_4__ {int trancnt; int write_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int,struct epoll_event*) ;
 int FUNC_1 (struct conn_context*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct conn_context*) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_6 (int,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct conn_context *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12 = VAR_9->events;
 int VAR_13 = VAR_9->cpu_id;
 int VAR_14;
 struct epoll_event VAR_15;

 VAR_10 = VAR_9->ep_fd;
 VAR_11 = VAR_9->fd;

 FUNC_3("Process write event[%02x]\n", VAR_12);

 if (VAR_12 & (VAR_1 | VAR_0)) {
  FUNC_4("process_write() with events HUP or ERR\n");
  goto free_back;
 }

 VAR_14 = FUNC_6(VAR_11, VAR_5, VAR_6);
 if (VAR_14 < 0) {
  VAR_8[VAR_13].write_cnt++;
  FUNC_2("process_write() can't write client socket");
  goto free_back;
 }

 FUNC_3("Write %d to socket %d\n", VAR_14, VAR_11);

 VAR_8[VAR_13].trancnt++;

 if (!VAR_4)
  goto free_back;

 VAR_9->handler = VAR_7;

 VAR_15.events = VAR_2 | VAR_1 | VAR_0;
 VAR_15.data.ptr = VAR_9;

 VAR_14 = FUNC_0(VAR_10, VAR_3, VAR_11, &VAR_15);
 if (VAR_14 < 0) {
  FUNC_2("Unable to add client socket read event to epoll");
  goto free_back;
 }

 goto back;

free_back:

 FUNC_5(VAR_9);
 FUNC_1(VAR_9);
back:

 return;
}
