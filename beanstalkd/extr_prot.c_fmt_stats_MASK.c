
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct rusage {TYPE_4__ ru_stime; TYPE_3__ ru_utime; } ;
struct TYPE_18__ {int waiting_ct; int total_jobs_ct; int buried_ct; int reserved_ct; int urgent_ct; } ;
struct TYPE_17__ {int machine; int version; int nodename; } ;
struct TYPE_16__ {int len; } ;
struct TYPE_14__ {int filesize; int nrec; int nmig; TYPE_2__* cur; TYPE_1__* head; } ;
struct TYPE_15__ {TYPE_5__ wal; } ;
struct TYPE_11__ {int seq; } ;
struct TYPE_10__ {int seq; } ;
typedef TYPE_6__ Server ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_24 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,struct rusage*) ;
 TYPE_9__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_8__ VAR_28 ;
 int * VAR_29 ;
 int VAR_30 ;
 int FUNC_7 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,long,int ,int,int,int,int,int ,int,int,int ,int ,int ,char*,int ,int ,int ,int ) ;
 int VAR_31 ;
 TYPE_7__ VAR_32 ;
 int FUNC_8 () ;
 int VAR_33 ;

__attribute__((used)) static int
FUNC_9(char *VAR_34, size_t VAR_35, void *VAR_36)
{
    int VAR_37 = 0, VAR_38 = 0;
    Server *VAR_39 = VAR_36;
    struct rusage VAR_40;

    VAR_39 = VAR_36;

    if (VAR_39->wal.head) {
        VAR_37 = VAR_39->wal.head->seq;
    }

    if (VAR_39->wal.cur) {
        VAR_38 = VAR_39->wal.cur->seq;
    }

    FUNC_6(VAR_22, &VAR_40);
    return FUNC_7(VAR_34, VAR_35, VAR_23,
                    VAR_25.urgent_ct,
                    VAR_30,
                    VAR_25.reserved_ct,
                    FUNC_4(),
                    VAR_25.buried_ct,
                    VAR_29[VAR_12],
                    VAR_29[VAR_8],
                    VAR_29[VAR_11],
                    VAR_29[VAR_10],
                    VAR_29[VAR_9],
                    VAR_29[VAR_14],
                    VAR_29[VAR_15],
                    VAR_29[VAR_1],
                    VAR_29[VAR_13],
                    VAR_29[VAR_20],
                    VAR_29[VAR_21],
                    VAR_29[VAR_2],
                    VAR_29[VAR_0],
                    VAR_29[VAR_3],
                    VAR_29[VAR_19],
                    VAR_29[VAR_16],
                    VAR_29[VAR_17],
                    VAR_29[VAR_18],
                    VAR_29[VAR_4],
                    VAR_29[VAR_6],
                    VAR_29[VAR_5],
                    VAR_29[VAR_7],
                    VAR_31,
                    VAR_25.total_jobs_ct,
                    VAR_27,
                    VAR_32.len,
                    FUNC_0(),
                    FUNC_1(),
                    FUNC_2(),
                    VAR_25.waiting_ct,
                    FUNC_3(),
                    (long) FUNC_5(),
                    VAR_33,
                    (int) VAR_40.ru_utime.tv_sec, (int) VAR_40.ru_utime.tv_usec,
                    (int) VAR_40.ru_stime.tv_sec, (int) VAR_40.ru_stime.tv_usec,
                    FUNC_8(),
                    VAR_37,
                    VAR_38,
                    VAR_39->wal.nmig,
                    VAR_39->wal.nrec,
                    VAR_39->wal.filesize,
                    VAR_24 ? "true" : "false",
                    VAR_26,
                    VAR_28.nodename,
                    VAR_28.version,
                    VAR_28.machine);
}
