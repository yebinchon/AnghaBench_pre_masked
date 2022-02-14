
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


struct TYPE_8__ {unsigned int len; } ;
struct TYPE_10__ {int data; int flavor; int cpu; TYPE_1__ hdr; } ;
typedef TYPE_3__ kdp_writeregs_req_t ;
struct TYPE_9__ {int is_reply; int len; } ;
struct TYPE_11__ {TYPE_2__ hdr; int error; } ;
typedef TYPE_4__ kdp_writeregs_reply_t ;
struct TYPE_12__ {TYPE_4__ writeregs_reply; TYPE_3__ writeregs_req; } ;
typedef TYPE_5__ kdp_pkt_t ;
typedef int kdp_hdr_t ;
typedef int boolean_t ;
struct TYPE_13__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
    kdp_writeregs_req_t *VAR_6 = &VAR_3->writeregs_req;
    size_t VAR_7 = *VAR_4;
    int VAR_8;
    kdp_writeregs_reply_t *VAR_9 = &VAR_3->writeregs_reply;

    if (VAR_7 < sizeof (*VAR_6))
 return (VAR_0);

    VAR_8 = VAR_6->hdr.len - (unsigned)sizeof(kdp_hdr_t) - (unsigned)sizeof(unsigned int);
    VAR_9->error = FUNC_0(VAR_6->cpu, VAR_6->flavor, VAR_6->data, &VAR_8);

    VAR_9->hdr.is_reply = 1;
    VAR_9->hdr.len = sizeof (*VAR_9);

    *VAR_5 = VAR_2.reply_port;
    *VAR_4 = VAR_9->hdr.len;

    return (VAR_1);
}
