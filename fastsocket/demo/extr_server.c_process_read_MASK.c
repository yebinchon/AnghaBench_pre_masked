
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct conn_context {int events; char* buf; int cpu_id; int ep_fd; int fd; int data_len; int handler; } ;
struct TYPE_4__ {int read_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int,struct epoll_event*) ;
 int FUNC_1 (struct conn_context*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct conn_context*) ;
 int VAR_5 ;
 int FUNC_5 (int,char*,int ) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_6(struct conn_context *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = VAR_7->events;
 struct epoll_event VAR_11;
 int VAR_12;
 char *VAR_13 = VAR_7->buf;
 int VAR_14 = VAR_7->cpu_id;

 VAR_8 = VAR_7->ep_fd;
 VAR_9 = VAR_7->fd;


 if (VAR_10 & VAR_1) {
  FUNC_3("process_read() with events HUP\n");
  goto free_back;
 }
 if (VAR_10 & VAR_0) {
  FUNC_3("process_read() with events ERR\n");
  goto free_back;
 }

 FUNC_3("Process read event[%02x] on socket %d\n", VAR_10, VAR_9);

 VAR_12 = FUNC_5(VAR_9, VAR_13, VAR_4);
 if (VAR_12 < 0) {
  VAR_6[VAR_14].read_cnt++;
  FUNC_2("process_read() can't read client socket");
  goto free_back;
 } else if (VAR_12 == 0) {
  goto free_back;
  FUNC_3("Socket %d is closed\n", VAR_9);
 }

 VAR_7->data_len = VAR_12;

 FUNC_3("Read %d from socket %d\n", VAR_12, VAR_9);

 VAR_7->handler = VAR_5;

 VAR_11.events = VAR_2 | VAR_1 | VAR_0;
 VAR_11.data.ptr = VAR_7;

 VAR_12 = FUNC_0(VAR_8, VAR_3, VAR_9, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_2("Unable to add client socket read event to epoll");
  goto free_back;
 }

 goto back;


free_back:

 FUNC_3("cpu[%d] close socket %d\n", VAR_14, VAR_7->fd);

 FUNC_4(VAR_7);
 FUNC_1(VAR_7);

back:
 return;
}
