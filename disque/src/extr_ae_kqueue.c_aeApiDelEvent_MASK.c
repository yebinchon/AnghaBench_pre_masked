
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kevent {int dummy; } ;
struct TYPE_4__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_5__ {int kqfd; } ;
typedef TYPE_2__ aeApiState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,struct kevent*,int,int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(aeEventLoop *VAR_5, int VAR_6, int VAR_7) {
    aeApiState *VAR_8 = VAR_5->apidata;
    struct kevent VAR_9;

    if (VAR_7 & VAR_0) {
        FUNC_0(&VAR_9, VAR_6, VAR_2, VAR_4, 0, 0, ((void*)0));
        FUNC_1(VAR_8->kqfd, &VAR_9, 1, ((void*)0), 0, ((void*)0));
    }
    if (VAR_7 & VAR_1) {
        FUNC_0(&VAR_9, VAR_6, VAR_3, VAR_4, 0, 0, ((void*)0));
        FUNC_1(VAR_8->kqfd, &VAR_9, 1, ((void*)0), 0, ((void*)0));
    }
}
