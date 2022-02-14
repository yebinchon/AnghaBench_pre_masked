
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_worker {int efd; int thread_id; } ;
struct epoll_event {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct epoll_event*,int,int) ;
 int FUNC_2 (struct server_worker*,struct epoll_event*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_1)
{
    struct server_worker *VAR_2 = (struct server_worker *)VAR_1;
    struct epoll_event VAR_3[128];

    FUNC_0(VAR_2->thread_id);

    while (VAR_0)
    {
        int VAR_4, VAR_5 = FUNC_1(VAR_2->efd, VAR_3, 127, -1);

        if (VAR_5 == -1)
            FUNC_3("epoll_wait");

        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
            FUNC_2(VAR_2, &VAR_3[VAR_4]);
    }
}
