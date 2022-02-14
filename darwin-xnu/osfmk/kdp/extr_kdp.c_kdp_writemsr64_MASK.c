
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lcpu; int data; int address; } ;
typedef TYPE_2__ kdp_writemsr64_req_t ;
struct TYPE_8__ {int is_reply; int len; } ;
struct TYPE_10__ {TYPE_1__ hdr; int error; } ;
typedef TYPE_3__ kdp_writemsr64_reply_t ;
struct TYPE_11__ {TYPE_3__ writemsr64_reply; TYPE_2__ writemsr64_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_12__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(
 kdp_pkt_t *VAR_3,
 int *VAR_4,
 unsigned short *VAR_5
        )
{
 kdp_writemsr64_req_t *VAR_6 = &VAR_3->writemsr64_req;
 kdp_writemsr64_reply_t *VAR_7 = &VAR_3->writemsr64_reply;
 size_t VAR_8 = *VAR_4;

 if (VAR_8 < sizeof (*VAR_6))
  return (VAR_0);

 FUNC_0(("kdp_writemsr64 lcpu %x addr %x\n", VAR_6->lcpu, VAR_6->address));
 VAR_7->error = FUNC_1(VAR_6, VAR_6->data, VAR_6->lcpu);

 VAR_7->hdr.is_reply = 1;
 VAR_7->hdr.len = sizeof (*VAR_7);

 *VAR_5 = VAR_2.reply_port;
 *VAR_4 = VAR_7->hdr.len;

 return (VAR_1);
}
