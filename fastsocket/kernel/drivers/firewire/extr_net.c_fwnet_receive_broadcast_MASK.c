
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fwnet_device {unsigned long rcv_buffer_size; unsigned long broadcast_rcv_next_ptr; unsigned long num_broadcast_rcv_ptrs; int lock; int broadcast_rcv_buffer; int broadcast_rcv_context; int ** broadcast_rcv_buffer_ptrs; struct fw_card* card; } ;
struct fw_iso_packet {unsigned long payload_length; int interrupt; int tag; scalar_t__ header_length; scalar_t__ sy; scalar_t__ skip; } ;
struct fw_iso_context {int dummy; } ;
struct fw_card {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct fw_iso_packet*,int *,unsigned long) ;
 int FUNC_4 (struct fwnet_device*,int *,int,int,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct fw_iso_context *VAR_3,
  u32 VAR_4, size_t VAR_5, void *VAR_6, void *VAR_7)
{
 struct fwnet_device *VAR_8;
 struct fw_iso_packet VAR_9;
 struct fw_card *VAR_10;
 __be16 *VAR_11;
 __be32 *VAR_12;
 int VAR_13;
 u32 VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;

 VAR_8 = VAR_7;
 VAR_10 = VAR_8->card;
 VAR_11 = VAR_6;
 VAR_14 = FUNC_0(VAR_11);

 FUNC_5(&VAR_8->lock, VAR_19);

 VAR_18 = VAR_8->rcv_buffer_size * VAR_8->broadcast_rcv_next_ptr;
 VAR_12 = VAR_8->broadcast_rcv_buffer_ptrs[VAR_8->broadcast_rcv_next_ptr++];
 if (VAR_8->broadcast_rcv_next_ptr == VAR_8->num_broadcast_rcv_ptrs)
  VAR_8->broadcast_rcv_next_ptr = 0;

 FUNC_6(&VAR_8->lock, VAR_19);

 VAR_16 = (FUNC_1(VAR_12[0]) & 0xffff) << 8
   | (FUNC_1(VAR_12[1]) & 0xff000000) >> 24;
 VAR_17 = FUNC_1(VAR_12[1]) & 0xffffff;
 VAR_15 = FUNC_1(VAR_12[0]) >> 16;

 if (VAR_16 == VAR_0 && VAR_17 == VAR_2) {
  VAR_12 += 2;
  VAR_14 -= VAR_1;
  FUNC_4(VAR_8, VAR_12, VAR_14,
          VAR_15, -1, 1);
 }

 VAR_9.payload_length = VAR_8->rcv_buffer_size;
 VAR_9.interrupt = 1;
 VAR_9.skip = 0;
 VAR_9.tag = 3;
 VAR_9.sy = 0;
 VAR_9.header_length = VAR_1;

 FUNC_5(&VAR_8->lock, VAR_19);

 VAR_13 = FUNC_3(VAR_8->broadcast_rcv_context, &VAR_9,
          &VAR_8->broadcast_rcv_buffer, VAR_18);

 FUNC_6(&VAR_8->lock, VAR_19);

 if (VAR_13 < 0)
  FUNC_2("requeue failed\n");
}
