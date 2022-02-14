
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_reply; int len; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_3__ disconnect_reply; int disconnect_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int kdp_disconnect_req_t ;
typedef TYPE_3__ kdp_disconnect_reply_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {unsigned short reply_port; unsigned short exception_port; scalar_t__ session_key; scalar_t__ conn_seq; scalar_t__ exception_seq; scalar_t__ is_conn; scalar_t__ is_halted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_9,
    int *VAR_10,
    unsigned short *VAR_11
)
{
    kdp_disconnect_req_t *VAR_12 = &VAR_9->disconnect_req;
    size_t VAR_13 = *VAR_10;
    kdp_disconnect_reply_t *VAR_14 = &VAR_9->disconnect_reply;

    if (VAR_13 < sizeof (*VAR_12))
 return (VAR_0);

    if (!VAR_6.is_conn)
 return (VAR_0);

    FUNC_0(("kdp_disconnect\n"));

    *VAR_11 = VAR_6.reply_port;

    VAR_6.reply_port = VAR_6.exception_port = 0;
    VAR_6.is_halted = VAR_6.is_conn = VAR_0;
    VAR_6.exception_seq = VAR_6.conn_seq = 0;
    VAR_6.session_key = 0;

    if (VAR_5 != ((void*)0))
 VAR_8 = 1;

    if (VAR_7 == 1) {
 VAR_8 = 1;
 VAR_7 = 0;
    }

    VAR_14->hdr.is_reply = 1;
    VAR_14->hdr.len = sizeof (*VAR_14);

    *VAR_10 = VAR_14->hdr.len;

    if (VAR_4 == VAR_1)
     VAR_3=0;

    return (VAR_2);
}
