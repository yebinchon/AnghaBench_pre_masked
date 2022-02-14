
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sg_io_hdr {scalar_t__ iovec_count; } ;
struct nvme_trans_io_cdb {int xfer_len; } ;



__attribute__((used)) static inline u32 FUNC_0(struct sg_io_hdr *VAR_0,
     struct nvme_trans_io_cdb *VAR_1,
     u32 VAR_2)
{

 if (VAR_0->iovec_count > 0)
  return VAR_0->iovec_count;
 else if (VAR_1->xfer_len > VAR_2)
  return ((VAR_1->xfer_len - 1) / VAR_2) + 1;
 else
  return 1;
}
