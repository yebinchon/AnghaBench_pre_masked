
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_vm_address_t ;
struct TYPE_7__ {int is_reply; int len; } ;
struct TYPE_10__ {TYPE_1__ hdr; int error; } ;
struct TYPE_9__ {scalar_t__ address; } ;
struct TYPE_8__ {TYPE_4__ breakpoint_reply; TYPE_3__ breakpoint_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef int kdp_error_t ;
typedef TYPE_3__ kdp_breakpoint_req_t ;
typedef TYPE_4__ kdp_breakpoint_reply_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (int ) ;

boolean_t
FUNC_2(
    kdp_pkt_t *VAR_3,
    int *VAR_4,
    unsigned short *VAR_5
)
{
 kdp_breakpoint_req_t *VAR_6 = &VAR_3->breakpoint_req;
 kdp_breakpoint_reply_t *VAR_7 = &VAR_3->breakpoint_reply;
 size_t VAR_8 = *VAR_4;
 kdp_error_t VAR_9;
 if (VAR_8 < sizeof (*VAR_6))
  return (VAR_0);

 FUNC_0(("kdp_breakpoint_remove %x\n", VAR_6->address));

 VAR_9 = FUNC_1((mach_vm_address_t)VAR_6->address);

 VAR_7->error = VAR_9;

 VAR_7->hdr.is_reply = 1;
 VAR_7->hdr.len = sizeof (*VAR_7);
 *VAR_5 = VAR_2.reply_port;
 *VAR_4 = VAR_7->hdr.len;

 return (VAR_1);
}
