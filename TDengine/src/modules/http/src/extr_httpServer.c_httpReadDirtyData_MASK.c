
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ HttpContext ;


 scalar_t__ FUNC_0 (int,char*,int) ;

void FUNC_1(HttpContext *VAR_0) {
  int VAR_1 = VAR_0->fd;
  char VAR_2[1024] = {0};
  int VAR_3 = (int)FUNC_0(VAR_1, VAR_2, 1024);
  while (VAR_3 >= sizeof(VAR_2)) {
    VAR_3 = (int)FUNC_0(VAR_1, VAR_2, 1024);
  }
}
