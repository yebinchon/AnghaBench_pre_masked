
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cpu_mask; } ;
typedef TYPE_2__ kdp_resumecpus_req_t ;
struct TYPE_7__ {int is_reply; int len; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ kdp_resumecpus_reply_t ;
struct TYPE_10__ {TYPE_3__ resumecpus_reply; TYPE_2__ resumecpus_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned short reply_port; int is_halted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_6__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
    kdp_resumecpus_req_t *VAR_6 = &VAR_3->resumecpus_req;
    size_t VAR_7 = *VAR_4;
    kdp_resumecpus_reply_t *VAR_8 = &VAR_3->resumecpus_reply;

    if (VAR_7 < sizeof (*VAR_6))
 return (VAR_0);

    VAR_8->hdr.is_reply = 1;
    VAR_8->hdr.len = sizeof (*VAR_8);

    FUNC_0(("kdp_resumecpus %x\n", VAR_6->cpu_mask));

    VAR_2.is_halted = VAR_0;

    *VAR_5 = VAR_2.reply_port;
    *VAR_4 = VAR_8->hdr.len;

    return (VAR_1);
}
