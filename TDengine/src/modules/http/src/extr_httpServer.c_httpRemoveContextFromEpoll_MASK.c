
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {int pollFd; } ;
typedef TYPE_1__ HttpThread ;
typedef TYPE_2__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int) ;

void FUNC_2(HttpThread *VAR_1, HttpContext *VAR_2) {
  if (VAR_2->fd >= 0) {
    FUNC_0(VAR_1->pollFd, VAR_0, VAR_2->fd, ((void*)0));
    FUNC_1(VAR_2->fd);
    VAR_2->fd = -1;
  }
}
