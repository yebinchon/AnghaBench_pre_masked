
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flavor; int cpu; } ;
typedef TYPE_2__ kdp_readregs_req_t ;
struct TYPE_7__ {int is_reply; int len; } ;
struct TYPE_9__ {TYPE_1__ hdr; int data; int error; } ;
typedef TYPE_3__ kdp_readregs_reply_t ;
struct TYPE_10__ {TYPE_3__ readregs_reply; TYPE_2__ readregs_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
    kdp_readregs_req_t *VAR_6 = &VAR_3->readregs_req;
    size_t VAR_7 = *VAR_4;
    kdp_readregs_reply_t *VAR_8 = &VAR_3->readregs_reply;
    int VAR_9;

    if (VAR_7 < sizeof (*VAR_6))
 return (VAR_0);

    VAR_8->hdr.is_reply = 1;
    VAR_8->hdr.len = sizeof (*VAR_8);

    VAR_8->error = FUNC_0(VAR_6->cpu, VAR_6->flavor, VAR_8->data, &VAR_9);
    VAR_8->hdr.len += VAR_9;

    *VAR_5 = VAR_2.reply_port;
    *VAR_4 = VAR_8->hdr.len;

    return (VAR_1);
}
