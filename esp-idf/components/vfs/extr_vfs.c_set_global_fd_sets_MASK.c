
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errorfds; int writefds; int readfds; scalar_t__ isset; } ;
typedef TYPE_1__ fds_triple_t ;
typedef int fd_set ;
struct TYPE_5__ {int local_fd; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int const,int *) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(const fds_triple_t *VAR_3, int VAR_4, fd_set *VAR_5, fd_set *VAR_6, fd_set *VAR_7)
{
    int VAR_8 = 0;

    for (int VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
        const fds_triple_t *VAR_10 = &VAR_3[VAR_9];
        if (VAR_10->isset) {
            for (int VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11) {
                const int VAR_12 = VAR_2[VAR_11].local_fd;
                if (VAR_5 && FUNC_2(VAR_12, &VAR_10->readfds)) {
                    FUNC_0(VAR_1, "FD %d in readfds was set from VFS ID %d", VAR_11, VAR_9);
                    FUNC_1(VAR_11, VAR_5);
                    ++VAR_8;
                }
                if (VAR_6 && FUNC_2(VAR_12, &VAR_10->writefds)) {
                    FUNC_0(VAR_1, "FD %d in writefds was set from VFS ID %d", VAR_11, VAR_9);
                    FUNC_1(VAR_11, VAR_6);
                    ++VAR_8;
                }
                if (VAR_7 && FUNC_2(VAR_12, &VAR_10->errorfds)) {
                    FUNC_0(VAR_1, "FD %d in errorfds was set from VFS ID %d", VAR_11, VAR_9);
                    FUNC_1(VAR_11, VAR_7);
                    ++VAR_8;
                }
            }
        }
    }

    return VAR_8;
}
