
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ etime; scalar_t__ qtime; scalar_t__ awakeme; scalar_t__ flags; scalar_t__ repl; scalar_t__ delay; scalar_t__ retry; scalar_t__ state; int id; } ;
typedef TYPE_1__ job ;
struct TYPE_5__ {scalar_t__ mstime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int,char*,char*,int ,int ,int,int,int,int,int,long long,long long,scalar_t__,long long,scalar_t__,scalar_t__) ;

void FUNC_2(int VAR_2, char *VAR_3, job *VAR_4) {
    FUNC_1(VAR_2,
        "%s %.*s: state=%d retry=%d delay=%d replicate=%d flags=%d now=%lld cached_now=%lld awake=%lld (%lld) qtime=%lld etime=%lld",
        VAR_3,
        VAR_0, VAR_4->id,
        (int)VAR_4->state,
        (int)VAR_4->retry,
        (int)VAR_4->delay,
        (int)VAR_4->repl,
        (int)VAR_4->flags,
        (long long)FUNC_0(),
        (long long)VAR_1.mstime,
        (long long)VAR_4->awakeme-FUNC_0(),
        (long long)VAR_4->awakeme,
        (long long)VAR_4->qtime-FUNC_0(),
        (long long)VAR_4->etime*1000-FUNC_0()
        );
}
