
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fd_set ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {int events; TYPE_1__ data; int member_0; } ;
typedef TYPE_2__ SceNetEpollEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__*,int,int ) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;

int FUNC_4(int VAR_4, fd_set *VAR_5, fd_set *VAR_6,
      fd_set *VAR_7, struct timeval *VAR_8)
{
   return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

}
