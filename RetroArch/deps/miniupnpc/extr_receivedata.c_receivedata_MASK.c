
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_scope_id; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int src_addr ;
typedef int socklen_t ;
typedef int fd_set ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
typedef TYPE_1__ TIMEVAL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_7 (int ,int *,int *,int *,TYPE_1__*) ;

int
FUNC_8(int VAR_5,
            char * VAR_6, int VAR_7,
            int VAR_8, unsigned int * VAR_9)
{




    int VAR_10;


    struct pollfd VAR_11[1];



        VAR_11[0].fd = VAR_5;
        VAR_11[0].events = VAR_3;
        VAR_10 = FUNC_3(VAR_11, 1, VAR_8);



    if(VAR_10 < 0)
        return -1;

    if(VAR_10 == 0)
        return 0;
 VAR_10 = (int)FUNC_5(VAR_5, VAR_6, VAR_7, 0);
 return VAR_10;
}
