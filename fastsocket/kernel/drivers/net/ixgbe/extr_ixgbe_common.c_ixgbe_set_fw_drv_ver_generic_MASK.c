
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_9__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_10__ {TYPE_4__ ops; } ;
struct TYPE_6__ {scalar_t__ func; } ;
struct ixgbe_hw {TYPE_5__ mac; TYPE_1__ bus; } ;
struct TYPE_7__ {scalar_t__ ret_status; int cmd_resv; } ;
struct TYPE_8__ {TYPE_2__ cmd_or_resp; scalar_t__ buf_len; scalar_t__ checksum; int cmd; } ;
struct ixgbe_hic_drv_info {TYPE_3__ hdr; scalar_t__ pad2; scalar_t__ pad; void* ver_sub; void* ver_build; void* ver_min; void* ver_maj; void* port_num; } ;
typedef scalar_t__ s32 ;
typedef int fw_cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void**,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int *,int) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_9, u8 VAR_10, u8 VAR_11,
     u8 VAR_12, u8 VAR_13)
{
 struct ixgbe_hic_drv_info VAR_14;
 int VAR_15;
 s32 VAR_16 = 0;

 if (VAR_9->mac.ops.acquire_swfw_sync(VAR_9, VAR_8) != 0) {
  VAR_16 = VAR_7;
  goto out;
 }

 VAR_14.hdr.cmd = VAR_0;
 VAR_14.hdr.buf_len = VAR_1;
 VAR_14.hdr.cmd_or_resp.cmd_resv = VAR_2;
 VAR_14.port_num = (u8)VAR_9->bus.func;
 VAR_14.ver_maj = VAR_10;
 VAR_14.ver_min = VAR_11;
 VAR_14.ver_build = VAR_12;
 VAR_14.ver_sub = VAR_13;
 VAR_14.hdr.checksum = 0;
 VAR_14.hdr.checksum = FUNC_0((u8 *)&VAR_14,
    (VAR_3 + VAR_14.hdr.buf_len));
 VAR_14.pad = 0;
 VAR_14.pad2 = 0;

 for (VAR_15 = 0; VAR_15 <= VAR_4; VAR_15++) {
  VAR_16 = FUNC_1(VAR_9, (u32 *)&VAR_14,
             sizeof(VAR_14));
  if (VAR_16 != 0)
   continue;

  if (VAR_14.hdr.cmd_or_resp.ret_status ==
      VAR_5)
   VAR_16 = 0;
  else
   VAR_16 = VAR_6;

  break;
 }

 VAR_9->mac.ops.release_swfw_sync(VAR_9, VAR_8);
out:
 return VAR_16;
}
