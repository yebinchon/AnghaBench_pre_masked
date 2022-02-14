
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct linger {int member_0; int member_1; } ;
struct TYPE_3__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct conn_context {char* buf; int events; int cpu_id; int ep_fd; int fd; int data_len; int end_fd; int end_fd_added; int flags; int handler; } ;
typedef int ling ;
struct TYPE_4__ {int read_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int,int ,int,struct epoll_event*) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct conn_context*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct conn_context*) ;
 int VAR_16 ;
 int FUNC_8 (int,char*,int ) ;
 int FUNC_9 (struct sockaddr_in*) ;
 int FUNC_10 (int,int ,int ,void*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 TYPE_2__* VAR_17 ;

__attribute__((used)) static void FUNC_12(struct conn_context *VAR_18)
{
 int VAR_19, VAR_20, VAR_21;
 char *VAR_22 = VAR_18->buf;
 int VAR_23 = VAR_18->events;
 struct epoll_event VAR_24;
 struct sockaddr_in VAR_25;
 int VAR_26;
 int VAR_27 = VAR_18->cpu_id;

 VAR_19 = VAR_18->ep_fd;
 VAR_20 = VAR_18->fd;


 if (VAR_23 & (VAR_3 | VAR_2)) {
  FUNC_6("process_read_frontend() with events HUP or ERR\n");
  goto free_back;
 }

 FUNC_5("Process read event[%02x] on front-end socket %d\n", VAR_23, VAR_20);

 VAR_26 = FUNC_8(VAR_20, VAR_22, VAR_9);
 if (VAR_26 < 0)
 {
  VAR_17[VAR_27].read_cnt++;
  FUNC_4("process_read_frontend() can't read client socket");
  goto free_back;
 }

 VAR_18->data_len = VAR_26;

 FUNC_5("Read %d from front-end socket %d\n", VAR_26, VAR_20);


 VAR_24.events = VAR_3 | VAR_2;
 VAR_24.data.ptr = VAR_18;

 VAR_26 = FUNC_1(VAR_19, VAR_6, VAR_20, &VAR_24);
 if (VAR_26 < 0) {
  FUNC_4("Unable to add client socket read event to epoll");
  goto free_back;
 }

 int VAR_28;

 VAR_26 = FUNC_11(VAR_0, VAR_12, 0);
 if (VAR_26 < 0) {
  FUNC_4("Unable to create new socket for backend");
  goto free_back;
 }

 VAR_21 = VAR_26;
 VAR_18->end_fd = VAR_21;

 FUNC_5("Create socket %d\n", VAR_26);

 VAR_28 = FUNC_2(VAR_26, VAR_7, 0);
 VAR_28 |= VAR_10;
 FUNC_2(VAR_26, VAR_8, VAR_28);

 struct linger VAR_29 = {1, 0};

 VAR_26 = FUNC_10(VAR_21, VAR_13, VAR_14, (void *)&VAR_29, sizeof(VAR_29));
 if (VAR_26 < 0) {
  FUNC_4("Unable to set socket linger option");
  goto free_back;
 }

 FUNC_9(&VAR_25);

 VAR_26 = FUNC_0(VAR_21, (struct sockaddr *)&VAR_25, sizeof(struct sockaddr));
 if (VAR_26 < 0) {
  if (VAR_15 != VAR_1) {
   FUNC_4("Unable to connect to back end server");
   goto free_back;
  }
 }

 VAR_18->handler = VAR_16;
 VAR_18->flags |= VAR_11;

 VAR_24.events = VAR_4 | VAR_3 | VAR_2;
 VAR_24.data.ptr = VAR_18;

 VAR_26 = FUNC_1(VAR_19, VAR_5, VAR_21, &VAR_24);
 if (VAR_26 < 0) {
  FUNC_4("Unable to add client socket read event to epoll");
  goto free_back;
 }

 VAR_18->end_fd_added = 1;

 FUNC_5("Add back-end socket %d to epoll\n", VAR_21);

 goto back;

free_back:

 FUNC_5("cpu[%d] close socket %d\n", VAR_27, VAR_18->fd);

 FUNC_7(VAR_18);
 FUNC_3(VAR_18);

back:
 return;
}
