
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int lcpu; int address; } ;
typedef TYPE_2__ kdp_readmsr64_req_t ;
struct TYPE_8__ {int is_reply; int len; } ;
struct TYPE_10__ {scalar_t__ error; TYPE_1__ hdr; int data; } ;
typedef TYPE_3__ kdp_readmsr64_reply_t ;
struct TYPE_11__ {TYPE_3__ readmsr64_reply; TYPE_2__ readmsr64_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_12__ {unsigned short reply_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(
 kdp_pkt_t *VAR_4,
 int *VAR_5,
 unsigned short *VAR_6
)
{
 kdp_readmsr64_req_t *VAR_7 = &VAR_4->readmsr64_req;
 kdp_readmsr64_reply_t *VAR_8 = &VAR_4->readmsr64_reply;
 size_t VAR_9 = *VAR_5;

 if (VAR_9 < sizeof (*VAR_7))
  return (VAR_0);

 VAR_8->hdr.is_reply = 1;
 VAR_8->hdr.len = sizeof (*VAR_8);

 FUNC_0(("kdp_readmsr64 lcpu %x addr %x\n", VAR_7->lcpu, VAR_7->address));
 VAR_8->error = FUNC_1(VAR_7, VAR_8->data, VAR_7->lcpu);
 if (VAR_8->error == VAR_1)
  VAR_8->hdr.len += sizeof(uint64_t);

 *VAR_6 = VAR_3.reply_port;
 *VAR_5 = VAR_8->hdr.len;

 return (VAR_2);
}
