
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_reply; int len; } ;
struct TYPE_8__ {TYPE_1__ hdr; int hostinfo; } ;
struct TYPE_7__ {TYPE_3__ hostinfo_reply; int hostinfo_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int kdp_hostinfo_req_t ;
typedef TYPE_3__ kdp_hostinfo_reply_t ;
typedef int boolean_t ;
struct TYPE_9__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static boolean_t
FUNC_2(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
    kdp_hostinfo_req_t *VAR_6 = &VAR_3->hostinfo_req;
    size_t VAR_7 = *VAR_4;
    kdp_hostinfo_reply_t *VAR_8 = &VAR_3->hostinfo_reply;

    if (VAR_7 < sizeof (*VAR_6))
 return (VAR_0);

    FUNC_0(("kdp_hostinfo\n"));

    VAR_8->hdr.is_reply = 1;
    VAR_8->hdr.len = sizeof (*VAR_8);

    FUNC_1(&VAR_8->hostinfo);

    *VAR_5 = VAR_2.reply_port;
    *VAR_4 = VAR_8->hdr.len;

    return (VAR_1);
}
