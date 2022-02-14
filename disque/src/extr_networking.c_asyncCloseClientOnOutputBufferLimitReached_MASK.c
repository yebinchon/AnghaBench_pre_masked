
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sds ;
struct TYPE_6__ {int reply_bytes; int flags; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ) ;

void FUNC_7(client *VAR_3) {
    FUNC_5(VAR_3->reply_bytes < VAR_2-(1024*64));
    if (VAR_3->reply_bytes == 0 || VAR_3->flags & VAR_0) return;
    if (FUNC_1(VAR_3)) {
        sds VAR_4 = FUNC_0(FUNC_3(),VAR_3);

        FUNC_2(VAR_3);
        FUNC_6(VAR_1,"Client %s scheduled to be closed ASAP for overcoming of output buffer limits.", VAR_4);
        FUNC_4(VAR_4);
    }
}
