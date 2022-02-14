
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ sds ;
struct TYPE_6__ {scalar_t__ bufpos; scalar_t__ sentlen; size_t reply_bytes; int flags; int fd; int lastinteraction; int reply; scalar_t__ buf; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {scalar_t__ maxmemory; int el; int unixtime; int stat_net_output_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (scalar_t__) ;
 TYPE_3__ VAR_8 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int,scalar_t__,size_t) ;
 scalar_t__ FUNC_10 () ;

int FUNC_11(int VAR_9, client *VAR_10, int VAR_11) {
    ssize_t VAR_12 = 0, VAR_13 = 0;
    size_t VAR_14;
    sds VAR_15;

    while(FUNC_1(VAR_10)) {
        if (VAR_10->bufpos > 0) {
            VAR_12 = FUNC_9(VAR_9,VAR_10->buf+VAR_10->sentlen,VAR_10->bufpos-VAR_10->sentlen);
            if (VAR_12 <= 0) break;
            VAR_10->sentlen += VAR_12;
            VAR_13 += VAR_12;



            if (VAR_10->sentlen == VAR_10->bufpos) {
                VAR_10->bufpos = 0;
                VAR_10->sentlen = 0;
            }
        } else {
            VAR_15 = FUNC_5(FUNC_4(VAR_10->reply));
            VAR_14 = FUNC_6(VAR_15);

            if (VAR_14 == 0) {
                FUNC_3(VAR_10->reply,FUNC_4(VAR_10->reply));
                continue;
            }

            VAR_12 = FUNC_9(VAR_9, VAR_15 + VAR_10->sentlen, VAR_14 - VAR_10->sentlen);
            if (VAR_12 <= 0) break;
            VAR_10->sentlen += VAR_12;
            VAR_13 += VAR_12;


            if (VAR_10->sentlen == VAR_14) {
                FUNC_3(VAR_10->reply,FUNC_4(VAR_10->reply));
                VAR_10->sentlen = 0;
                VAR_10->reply_bytes -= VAR_14;
            }
        }
        VAR_8.stat_net_output_bytes += VAR_13;
        if (VAR_13 > VAR_6 &&
            (VAR_8.maxmemory == 0 ||
             FUNC_10() < VAR_8.maxmemory)) break;
    }
    if (VAR_12 == -1) {
        if (VAR_7 == VAR_4) {
            VAR_12 = 0;
        } else {
            FUNC_7(VAR_5,
                "Error writing to client: %s", FUNC_8(VAR_7));
            FUNC_2(VAR_10);
            return VAR_2;
        }
    }
    if (VAR_13 > 0) VAR_10->lastinteraction = VAR_8.unixtime;
    if (!FUNC_1(VAR_10)) {
        VAR_10->sentlen = 0;
        if (VAR_11) FUNC_0(VAR_8.el,VAR_10->fd,VAR_0);


        if (VAR_10->flags & VAR_1) {
            FUNC_2(VAR_10);
            return VAR_2;
        }
    }
    return VAR_3;
}
