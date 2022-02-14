
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned short req_reply_port; } ;
typedef TYPE_1__ kdp_reattach_req_t ;
struct TYPE_7__ {TYPE_1__ reattach_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_8__ {int is_conn; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int*,unsigned short*) ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
    kdp_reattach_req_t *VAR_6 = &VAR_3->reattach_req;

    VAR_1.is_conn = VAR_0;
    FUNC_0(VAR_3, VAR_4, VAR_5);
    *VAR_5 = VAR_6->req_reply_port;
    VAR_2 = 1;
    return (VAR_0);
}
