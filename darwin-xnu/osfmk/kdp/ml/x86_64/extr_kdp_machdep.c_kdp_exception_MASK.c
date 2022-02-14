
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__ key; int seq; scalar_t__ is_reply; int request; } ;
struct TYPE_7__ {int n_exc_info; TYPE_2__ hdr; TYPE_1__* exc_info; } ;
typedef TYPE_3__ kdp_exception_t ;
typedef int kdp_exc_info_t ;
struct TYPE_8__ {unsigned short exception_port; int exception_ack_needed; int exception_seq; } ;
struct TYPE_5__ {unsigned int exception; unsigned int code; unsigned int subcode; scalar_t__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 TYPE_4__ VAR_2 ;

void
FUNC_1(
    unsigned char *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8
)
{
    kdp_exception_t *VAR_9 = (kdp_exception_t *)VAR_3;

    VAR_9->hdr.request = VAR_0;
    VAR_9->hdr.is_reply = 0;
    VAR_9->hdr.seq = VAR_2.exception_seq;
    VAR_9->hdr.key = 0;
    VAR_9->hdr.len = sizeof (*VAR_9);

    VAR_9->n_exc_info = 1;
    VAR_9->exc_info[0].cpu = 0;
    VAR_9->exc_info[0].exception = VAR_6;
    VAR_9->exc_info[0].code = VAR_7;
    VAR_9->exc_info[0].subcode = VAR_8;

    VAR_9->hdr.len += VAR_9->n_exc_info * sizeof (kdp_exc_info_t);

    FUNC_0((char *)VAR_9, (char *)VAR_3, VAR_9->hdr.len);

    VAR_2.exception_ack_needed = VAR_1;

    *VAR_5 = VAR_2.exception_port;
    *VAR_4 = VAR_9->hdr.len;
}
