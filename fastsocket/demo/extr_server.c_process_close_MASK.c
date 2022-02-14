
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct conn_context* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct conn_context {int ep_fd; int fd; int end_fd; scalar_t__ end_fd_added; scalar_t__ fd_added; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,struct epoll_event*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct conn_context *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct epoll_event VAR_8;

 VAR_6 = VAR_3->ep_fd;
 VAR_4 = VAR_3->fd;
 VAR_5 = VAR_3->end_fd;

 VAR_8.events = VAR_1 | VAR_0;
 VAR_8.data.ptr = VAR_3;


 if (VAR_3->fd_added) {
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_4, &VAR_8);
  if (VAR_7 < 0)
   FUNC_2("Unable to delete client socket from epoll");
 }
 FUNC_0(VAR_4);

 if (VAR_5) {
  if (VAR_3->end_fd_added) {
   VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_5, &VAR_8);
   if (VAR_7 < 0)
    FUNC_2("Unable to delete client socket from epoll");
  }
  FUNC_0(VAR_5);
 }
}
