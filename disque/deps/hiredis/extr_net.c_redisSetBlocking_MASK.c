
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(redisContext *VAR_6, int VAR_7) {
    int VAR_8;




    if ((VAR_8 = FUNC_1(VAR_6->fd, VAR_0)) == -1) {
        FUNC_0(VAR_6,VAR_4,"fcntl(F_GETFL)");
        FUNC_2(VAR_6);
        return VAR_3;
    }

    if (VAR_7)
        VAR_8 &= ~VAR_2;
    else
        VAR_8 |= VAR_2;

    if (FUNC_1(VAR_6->fd, VAR_1, VAR_8) == -1) {
        FUNC_0(VAR_6,VAR_4,"fcntl(F_SETFL)");
        FUNC_2(VAR_6);
        return VAR_3;
    }
    return VAR_5;
}
