
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_2__* reader; int fd; scalar_t__ err; } ;
typedef TYPE_1__ redisContext ;
typedef int buf ;
struct TYPE_6__ {char* errstr; int err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int) ;

int FUNC_3(redisContext *VAR_8) {
    char VAR_9[1024*16];
    int VAR_10;


    if (VAR_8->err)
        return VAR_3;

    VAR_10 = FUNC_1(VAR_8->fd,VAR_9,sizeof(VAR_9));
    if (VAR_10 == -1) {
        if ((VAR_7 == VAR_0 && !(VAR_8->flags & VAR_2)) || (VAR_7 == VAR_1)) {

        } else {
            FUNC_0(VAR_8,VAR_5,((void*)0));
            return VAR_3;
        }
    } else if (VAR_10 == 0) {
        FUNC_0(VAR_8,VAR_4,"Server closed the connection");
        return VAR_3;
    } else {
        if (FUNC_2(VAR_8->reader,VAR_9,VAR_10) != VAR_6) {
            FUNC_0(VAR_8,VAR_8->reader->err,VAR_8->reader->errstr);
            return VAR_3;
        }
    }
    return VAR_6;
}
