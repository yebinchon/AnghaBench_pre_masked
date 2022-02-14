
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_20__ {int flag; int dip; int sip; scalar_t__ interval; scalar_t__ time; void* dport; void* sport; } ;
typedef TYPE_8__ iperf_cfg_t ;
typedef int cfg ;
struct TYPE_19__ {scalar_t__ count; scalar_t__* ival; } ;
struct TYPE_18__ {scalar_t__ count; scalar_t__* ival; } ;
struct TYPE_17__ {scalar_t__ count; void** ival; } ;
struct TYPE_16__ {scalar_t__ count; } ;
struct TYPE_15__ {scalar_t__ count; int * sval; } ;
struct TYPE_14__ {scalar_t__ count; } ;
struct TYPE_13__ {scalar_t__ count; } ;
struct TYPE_12__ {TYPE_7__* time; TYPE_6__* interval; TYPE_5__* port; TYPE_4__* udp; TYPE_3__* ip; TYPE_2__* server; TYPE_1__* abort; int end; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*,char*,int,int,int,int,void*,int,int,int,int,void*,scalar_t__,scalar_t__) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char**,void**) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ) ;
 TYPE_11__ VAR_8 ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_8__*,int ,int) ;
 int VAR_9 ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(int VAR_10, char **VAR_11)
{
    int VAR_12 = FUNC_2(VAR_10, VAR_11, (void **) &VAR_8);
    iperf_cfg_t VAR_13;

    if (VAR_12 != 0) {
        FUNC_3(VAR_9, VAR_8.end, VAR_11[0]);
        return 0;
    }

    FUNC_7(&VAR_13, 0, sizeof(VAR_13));

    if ( VAR_8.abort->count != 0) {
        FUNC_6();
        return 0;
    }

    if ( ((VAR_8.ip->count == 0) && (VAR_8.server->count == 0)) ||
            ((VAR_8.ip->count != 0) && (VAR_8.server->count != 0)) ) {
        FUNC_0(VAR_7, "should specific client/server mode");
        return 0;
    }

    if (VAR_8.ip->count == 0) {
        VAR_13.flag |= VAR_4;
    } else {
        VAR_13.dip = FUNC_4(VAR_8.ip->sval[0]);
        VAR_13.flag |= VAR_3;
    }

    VAR_13.sip = FUNC_8();
    if (VAR_13.sip == 0) {
        return 0;
    }

    if (VAR_8.udp->count == 0) {
        VAR_13.flag |= VAR_5;
    } else {
        VAR_13.flag |= VAR_6;
    }

    if (VAR_8.port->count == 0) {
        VAR_13.sport = VAR_1;
        VAR_13.dport = VAR_1;
    } else {
        if (VAR_13.flag & VAR_4) {
            VAR_13.sport = VAR_8.port->ival[0];
            VAR_13.dport = VAR_1;
        } else {
            VAR_13.sport = VAR_1;
            VAR_13.dport = VAR_8.port->ival[0];
        }
    }

    if (VAR_8.interval->count == 0) {
        VAR_13.interval = VAR_0;
    } else {
        VAR_13.interval = VAR_8.interval->ival[0];
        if (VAR_13.interval <= 0) {
            VAR_13.interval = VAR_0;
        }
    }

    if (VAR_8.time->count == 0) {
        VAR_13.time = VAR_2;
    } else {
        VAR_13.time = VAR_8.time->ival[0];
        if (VAR_13.time <= VAR_13.interval) {
            VAR_13.time = VAR_13.interval;
        }
    }

    FUNC_1(VAR_7, "mode=%s-%s sip=%d.%d.%d.%d:%d, dip=%d.%d.%d.%d:%d, interval=%d, time=%d",
             VAR_13.flag & VAR_5 ? "tcp" : "udp",
             VAR_13.flag & VAR_4 ? "server" : "client",
             VAR_13.sip & 0xFF, (VAR_13.sip >> 8) & 0xFF, (VAR_13.sip >> 16) & 0xFF, (VAR_13.sip >> 24) & 0xFF, VAR_13.sport,
             VAR_13.dip & 0xFF, (VAR_13.dip >> 8) & 0xFF, (VAR_13.dip >> 16) & 0xFF, (VAR_13.dip >> 24) & 0xFF, VAR_13.dport,
             VAR_13.interval, VAR_13.time);

    FUNC_5(&VAR_13);

    return 0;
}
