
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int is_reply; int len; } ;
struct TYPE_12__ {TYPE_2__ hdr; void* error; } ;
struct TYPE_8__ {scalar_t__ seq; scalar_t__ key; } ;
struct TYPE_11__ {scalar_t__ req_reply_port; scalar_t__ exc_note_port; TYPE_1__ hdr; int greeting; } ;
struct TYPE_10__ {TYPE_5__ connect_reply; TYPE_4__ connect_req; } ;
typedef TYPE_3__ kdp_pkt_t ;
typedef TYPE_4__ kdp_connect_req_t ;
typedef TYPE_5__ kdp_connect_reply_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {scalar_t__ conn_seq; scalar_t__ reply_port; scalar_t__ exception_port; scalar_t__ session_key; scalar_t__ is_conn; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_7 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_8,
    int *VAR_9,
    unsigned short *VAR_10
)
{
    kdp_connect_req_t *VAR_11 = &VAR_8->connect_req;
    size_t VAR_12 = *VAR_9;
    kdp_connect_reply_t *VAR_13 = &VAR_8->connect_reply;
    uint16_t VAR_14, VAR_15;
    uint32_t VAR_16;
    uint8_t VAR_17;

    if (VAR_12 < sizeof (*VAR_11))
 return (VAR_0);

    FUNC_0(("kdp_connect seq %x greeting %s\n", VAR_11->hdr.seq, VAR_11->greeting));

    VAR_14 = VAR_11->req_reply_port;
    VAR_15 = VAR_11->exc_note_port;
    VAR_16 = VAR_11->hdr.key;
    VAR_17 = VAR_11->hdr.seq;
    if (VAR_7.is_conn) {
 if ((VAR_17 == VAR_7.conn_seq) &&
            (VAR_14 == VAR_7.reply_port) &&
            (VAR_15 == VAR_7.exception_port) &&
            (VAR_16 == VAR_7.session_key))
     VAR_13->error = VAR_2;
 else
     VAR_13->error = VAR_1;
    }
    else {
 VAR_7.reply_port = VAR_14;
 VAR_7.exception_port = VAR_15;
 VAR_7.is_conn = VAR_4;
 VAR_7.conn_seq = VAR_17;
        VAR_7.session_key = VAR_16;

 VAR_13->error = VAR_2;
    }

    VAR_13->hdr.is_reply = 1;
    VAR_13->hdr.len = sizeof (*VAR_13);

    *VAR_10 = VAR_14;
    *VAR_9 = VAR_13->hdr.len;

    if (VAR_6 == VAR_3)
     VAR_5=1;

    return (VAR_4);
}
