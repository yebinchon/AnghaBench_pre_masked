
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct icmsg_negotiate {int dummy; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int operation; } ;
struct hv_vss_msg {TYPE_3__ dm_info; TYPE_2__ vss_cf; TYPE_1__ vss_hdr; } ;
struct TYPE_8__ {int active; struct hv_vss_msg* msg; int recv_req_id; struct vmbus_channel* recv_channel; scalar_t__ recv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct icmsg_hdr*,struct icmsg_negotiate*,int *,int ,int ) ;
 int FUNC_2 (struct vmbus_channel*,int *,int,scalar_t__*,int *) ;
 int FUNC_3 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;

void FUNC_5(void *VAR_11)
{
 struct vmbus_channel *VAR_12 = VAR_11;
 u32 VAR_13;
 u64 VAR_14;
 struct hv_vss_msg *VAR_15;


 struct icmsg_hdr *VAR_16;
 struct icmsg_negotiate *VAR_17 = ((void*)0);

 if (VAR_10.active) {




  VAR_10.recv_channel = VAR_12;
  return;
 }

 FUNC_2(VAR_12, VAR_8, VAR_3 * 2, &VAR_13,
    &VAR_14);

 if (VAR_13 > 0) {
  VAR_16 = (struct icmsg_hdr *)&VAR_8[
   sizeof(struct vmbuspipe_hdr)];

  if (VAR_16->icmsgtype == VAR_2) {
   FUNC_1(VAR_16, VAR_17,
     VAR_8, VAR_4,
     VAR_7);
  } else {
   VAR_15 = (struct hv_vss_msg *)&VAR_8[
    sizeof(struct vmbuspipe_hdr) +
    sizeof(struct icmsg_hdr)];






   VAR_10.recv_len = VAR_13;
   VAR_10.recv_channel = VAR_12;
   VAR_10.recv_req_id = VAR_14;
   VAR_10.active = 1;
   VAR_10.msg = (struct hv_vss_msg *)VAR_15;

   switch (VAR_15->vss_hdr.operation) {
   case 131:
   case 128:
    FUNC_0(&VAR_9);
    return;

   case 129:
    VAR_15->vss_cf.flags =
      VAR_6;
    FUNC_4(0);
    return;

   case 130:
    VAR_15->dm_info.flags = 0;
    FUNC_4(0);
    return;

   default:
    FUNC_4(0);
    return;

   }

  }

  VAR_16->icflags = VAR_1
   | VAR_0;

  FUNC_3(VAR_12, VAR_8,
           VAR_13, VAR_14,
           VAR_5, 0);
 }

}
