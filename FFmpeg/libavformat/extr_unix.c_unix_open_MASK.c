
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_7__ {int sun_path; int sun_family; } ;
struct TYPE_8__ {int timeout; int fd; TYPE_1__ addr; scalar_t__ listen; int type; } ;
typedef TYPE_2__ UnixContext ;
struct TYPE_9__ {int rw_timeout; TYPE_2__* priv_data; } ;
typedef TYPE_3__ URLContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int,int,TYPE_3__*) ;
 int FUNC_5 (int,struct sockaddr*,int,int,TYPE_3__*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_2, const char *VAR_3, int VAR_4)
{
    UnixContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7;

    FUNC_2(VAR_3, "unix:", &VAR_3);
    VAR_5->addr.sun_family = VAR_0;
    FUNC_1(VAR_5->addr.sun_path, VAR_3, sizeof(VAR_5->addr.sun_path));

    if ((VAR_6 = FUNC_7(VAR_0, VAR_5->type, 0)) < 0)
        return FUNC_6();

    if (VAR_5->timeout < 0 && VAR_2->rw_timeout)
        VAR_5->timeout = VAR_2->rw_timeout / 1000;

    if (VAR_5->listen) {
        VAR_7 = FUNC_4(VAR_6, (struct sockaddr *)&VAR_5->addr,
                             sizeof(VAR_5->addr), VAR_5->timeout, VAR_2);
        if (VAR_7 < 0)
            goto fail;
        VAR_6 = VAR_7;
    } else {
        VAR_7 = FUNC_5(VAR_6, (struct sockaddr *)&VAR_5->addr,
                                sizeof(VAR_5->addr), VAR_5->timeout, VAR_2, 0);
        if (VAR_7 < 0)
            goto fail;
    }

    VAR_5->fd = VAR_6;

    return 0;

fail:
    if (VAR_5->listen && FUNC_0(VAR_7) != VAR_1)
        FUNC_8(VAR_5->addr.sun_path);
    if (VAR_6 >= 0)
        FUNC_3(VAR_6);
    return VAR_7;
}
