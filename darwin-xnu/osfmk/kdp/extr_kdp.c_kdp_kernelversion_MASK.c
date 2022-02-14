
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int is_reply; int len; } ;
struct TYPE_8__ {TYPE_1__ hdr; int version; } ;
struct TYPE_7__ {TYPE_3__ kernelversion_reply; int kernelversion_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int kdp_kernelversion_req_t ;
typedef TYPE_3__ kdp_kernelversion_reply_t ;
typedef int boolean_t ;
struct TYPE_9__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(
    kdp_pkt_t *VAR_5,
    int *VAR_6,
    unsigned short *VAR_7
)
{
    kdp_kernelversion_req_t *VAR_8 = &VAR_5->kernelversion_req;
    size_t VAR_9 = *VAR_6;
    kdp_kernelversion_reply_t *VAR_10 = &VAR_5->kernelversion_reply;
 size_t VAR_11;

    if (VAR_9 < sizeof (*VAR_8))
  return (VAR_0);

    VAR_10->hdr.is_reply = 1;
    VAR_10->hdr.len = sizeof (*VAR_10);

    FUNC_0(("kdp_kernelversion\n"));
    VAR_11 = FUNC_1(VAR_10->version, VAR_4, VAR_1);

    VAR_10->hdr.len += VAR_11 + 1;

    *VAR_7 = VAR_3.reply_port;
    *VAR_6 = VAR_10->hdr.len;

    return (VAR_2);
}
