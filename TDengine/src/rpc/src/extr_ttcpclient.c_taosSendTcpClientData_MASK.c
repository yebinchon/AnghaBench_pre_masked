
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ STcpFd ;


 scalar_t__ FUNC_0 (int ,char*,size_t,int ) ;

int FUNC_1(uint32_t VAR_0, short VAR_1, char *VAR_2, int VAR_3, void *VAR_4) {
  STcpFd *VAR_5 = (STcpFd *)VAR_4;

  if (VAR_4 == ((void*)0)) return -1;

  return (int)FUNC_0(VAR_5->fd, VAR_2, (size_t)VAR_3, 0);
}
