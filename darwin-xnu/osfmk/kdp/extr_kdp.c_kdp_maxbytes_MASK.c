
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_reply; int len; } ;
struct TYPE_8__ {TYPE_1__ hdr; int max_bytes; } ;
struct TYPE_7__ {TYPE_3__ maxbytes_reply; int maxbytes_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int kdp_maxbytes_req_t ;
typedef TYPE_3__ kdp_maxbytes_reply_t ;
typedef int boolean_t ;
struct TYPE_9__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_4,
    int *VAR_5,
    unsigned short *VAR_6
)
{
    kdp_maxbytes_req_t *VAR_7 = &VAR_4->maxbytes_req;
    size_t VAR_8 = *VAR_5;
    kdp_maxbytes_reply_t *VAR_9 = &VAR_4->maxbytes_reply;

    if (VAR_8 < sizeof (*VAR_7))
 return (VAR_0);

    VAR_9->hdr.is_reply = 1;
    VAR_9->hdr.len = sizeof (*VAR_9);

    FUNC_0(("kdp_maxbytes\n"));

    VAR_9->max_bytes = VAR_1;

    *VAR_6 = VAR_3.reply_port;
    *VAR_5 = VAR_9->hdr.len;

    return (VAR_2);
}
