
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct ictimesync_data {int flags; int parenttime; } ;
struct icmsg_negotiate {int dummy; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; } ;
struct TYPE_2__ {int * recv_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct icmsg_hdr*,struct icmsg_negotiate*,int *,int ,int ) ;
 int FUNC_2 (struct vmbus_channel*,int *,int ,scalar_t__*,int *) ;
 int FUNC_3 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_8)
{
 struct vmbus_channel *VAR_9 = VAR_8;
 u32 VAR_10;
 u64 VAR_11;
 struct icmsg_hdr *VAR_12;
 struct ictimesync_data *VAR_13;
 u8 *VAR_14 = VAR_7.recv_buffer;
 struct icmsg_negotiate *VAR_15 = ((void*)0);

 FUNC_2(VAR_9, VAR_14,
    VAR_3, &VAR_10, &VAR_11);

 if (VAR_10 > 0) {
  VAR_12 = (struct icmsg_hdr *)&VAR_14[
    sizeof(struct vmbuspipe_hdr)];

  if (VAR_12->icmsgtype == VAR_2) {
   FUNC_1(VAR_12, VAR_15,
      VAR_14,
      VAR_6,
      VAR_5);
  } else {
   VAR_13 = (struct ictimesync_data *)&VAR_14[
    sizeof(struct vmbuspipe_hdr) +
    sizeof(struct icmsg_hdr)];
   FUNC_0(VAR_13->parenttime, VAR_13->flags);
  }

  VAR_12->icflags = VAR_1
   | VAR_0;

  FUNC_3(VAR_9, VAR_14,
    VAR_10, VAR_11,
    VAR_4, 0);
 }
}
