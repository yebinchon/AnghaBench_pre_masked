
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct conn_context {int events; int ep_fd; int end_fd; char* buf; int data_len; int flags; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int,struct epoll_event*) ;
 int FUNC_1 (struct conn_context*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct conn_context*) ;
 int VAR_5 ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(struct conn_context *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = VAR_6->events;
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = VAR_6->ep_fd;
 VAR_8 = VAR_6->end_fd;
 VAR_10 = VAR_6->buf;
 VAR_11 = VAR_6->data_len;

 FUNC_3("Process write event[%02x] on back-end socket %d\n", VAR_9, VAR_8);

 if (VAR_9 & (VAR_1 | VAR_0)) {
  FUNC_4("process_write_backend() with events HUP or ERR 0x%x\n", VAR_9);
  goto free_back;
 }

 struct epoll_event VAR_13;

 if (!(VAR_6->flags & VAR_4))
 {
  FUNC_4("Write to back-end socket while back end socket not enabled\n");
  goto free_back;
 }

 VAR_12 = FUNC_6(VAR_8, VAR_10, VAR_11);
 if (VAR_12 < 0) {
  FUNC_2("process_write() can't write back end socket");
  goto free_back;
 }

 FUNC_3("Write %d to back-end socket %d\n", VAR_12, VAR_8);

 VAR_6->handler = VAR_5;
 VAR_6->flags |= VAR_4;

 VAR_13.events = VAR_2 | VAR_1 | VAR_0;
 VAR_13.data.ptr = VAR_6;

 VAR_12 = FUNC_0(VAR_7, VAR_3, VAR_8, &VAR_13);
 if (VAR_12 < 0) {
  FUNC_2("Unable to add client socket read event to epoll");
  goto free_back;
 }

 goto back;

free_back:

 FUNC_5(VAR_6);
 FUNC_1(VAR_6);

back:

 return;
}
