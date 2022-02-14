
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_8__ {int deadline_at; } ;
struct TYPE_10__ {TYPE_1__ r; } ;
struct TYPE_9__ {scalar_t__ pending_timeout; } ;
typedef TYPE_2__ Conn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int64
FUNC_5(Conn *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0;
    int64 VAR_5 = VAR_0;

    if (FUNC_0(VAR_2)) {
        VAR_3 = VAR_1;
    }

    if (FUNC_2(VAR_2)) {
        VAR_5 = FUNC_1(VAR_2)->r.deadline_at - FUNC_4() - VAR_3;
        VAR_4 = 1;
    }
    if (VAR_2->pending_timeout >= 0) {
        VAR_5 = FUNC_3(VAR_5, ((int64)VAR_2->pending_timeout) * 1000000000);
        VAR_4 = 1;
    }

    if (VAR_4) {
        return FUNC_4() + VAR_5;
    }
    return 0;
}
