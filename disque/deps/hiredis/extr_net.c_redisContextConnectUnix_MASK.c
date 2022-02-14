
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
struct TYPE_6__ {int flags; int fd; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct timeval const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char const*,int) ;

int FUNC_5(redisContext *VAR_7, const char *VAR_8, const struct timeval *VAR_9) {
    int VAR_10 = (VAR_7->flags & VAR_2);
    struct sockaddr_un VAR_11;

    if (FUNC_2(VAR_7,VAR_0) < 0)
        return VAR_4;
    if (FUNC_3(VAR_7,0) != VAR_5)
        return VAR_4;

    VAR_11.sun_family = VAR_0;
    FUNC_4(VAR_11.sun_path,VAR_8,sizeof(VAR_11.sun_path)-1);
    if (FUNC_0(VAR_7->fd, (struct sockaddr*)&VAR_11, sizeof(VAR_11)) == -1) {
        if (VAR_6 == VAR_1 && !VAR_10) {

        } else {
            if (FUNC_1(VAR_7,VAR_9) != VAR_5)
                return VAR_4;
        }
    }


    if (VAR_10 && FUNC_3(VAR_7,1) != VAR_5)
        return VAR_4;

    VAR_7->flags |= VAR_3;
    return VAR_5;
}
