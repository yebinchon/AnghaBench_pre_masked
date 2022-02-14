
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int kdp_version_req_t ;
struct TYPE_6__ {int is_reply; int len; } ;
struct TYPE_7__ {TYPE_1__ hdr; scalar_t__ feature; int version; } ;
typedef TYPE_2__ kdp_version_reply_t ;
struct TYPE_8__ {TYPE_2__ version_reply; int version_req; } ;
typedef TYPE_3__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_9__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_7,
    int *VAR_8,
    unsigned short *VAR_9
)
{
    kdp_version_req_t *VAR_10 = &VAR_7->version_req;
    size_t VAR_11 = *VAR_8;
    kdp_version_reply_t *VAR_12 = &VAR_7->version_reply;

    if (VAR_11 < sizeof (*VAR_10))
 return (VAR_0);

    VAR_12->hdr.is_reply = 1;
    VAR_12->hdr.len = sizeof (*VAR_12);

    FUNC_0(("kdp_version\n"));

    VAR_12->version = VAR_3;
    if (!(VAR_6 & VAR_1))
      VAR_12->feature = VAR_2;
    else
      VAR_12->feature = 0;

    *VAR_9 = VAR_5.reply_port;
    *VAR_8 = VAR_12->hdr.len;

    return (VAR_4);
}
