
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int obuf; int fd; scalar_t__ err; } ;
typedef TYPE_1__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

int FUNC_6(redisContext *VAR_7, int *VAR_8) {
    int VAR_9;


    if (VAR_7->err)
        return VAR_3;

    if (FUNC_3(VAR_7->obuf) > 0) {
        VAR_9 = FUNC_5(VAR_7->fd,VAR_7->obuf,FUNC_3(VAR_7->obuf));
        if (VAR_9 == -1) {
            if ((VAR_6 == VAR_0 && !(VAR_7->flags & VAR_2)) || (VAR_6 == VAR_1)) {

            } else {
                FUNC_0(VAR_7,VAR_4,((void*)0));
                return VAR_3;
            }
        } else if (VAR_9 > 0) {
            if (VAR_9 == (signed)FUNC_3(VAR_7->obuf)) {
                FUNC_2(VAR_7->obuf);
                VAR_7->obuf = FUNC_1();
            } else {
                FUNC_4(VAR_7->obuf,VAR_9,-1);
            }
        }
    }
    if (VAR_8 != ((void*)0)) *VAR_8 = (FUNC_3(VAR_7->obuf) == 0);
    return VAR_5;
}
