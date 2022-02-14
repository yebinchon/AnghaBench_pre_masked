
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
struct TYPE_5__ {int querybuf; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ verbosity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (scalar_t__,char*,int ) ;

__attribute__((used)) static void FUNC_5(client *VAR_3, int VAR_4) {
    if (VAR_2.verbosity <= VAR_1) {
        sds VAR_5 = FUNC_0(FUNC_1(),VAR_3);
        FUNC_4(VAR_1,
            "Protocol error from client: %s", VAR_5);
        FUNC_2(VAR_5);
    }
    VAR_3->flags |= VAR_0;
    FUNC_3(VAR_3->querybuf,VAR_4,-1);
}
