
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sg_iovec {int iov_len; } ;
struct sg_io_hdr {int iovec_count; int dxfer_len; scalar_t__ dxferp; } ;
struct nvme_trans_io_cdb {int xfer_len; } ;
struct nvme_ns {int lba_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 size_t FUNC_0 (struct sg_iovec*,scalar_t__,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,struct nvme_trans_io_cdb*,int) ;
 int FUNC_4 (int*,struct nvme_trans_io_cdb*) ;
 int FUNC_5 (int*,struct nvme_trans_io_cdb*) ;
 int FUNC_6 (int*,struct nvme_trans_io_cdb*) ;
 int FUNC_7 (int*,struct nvme_trans_io_cdb*) ;

__attribute__((used)) static int FUNC_8(struct nvme_ns *VAR_8, struct sg_io_hdr *VAR_9, u8 VAR_10,
       u8 *VAR_11)
{
 int VAR_12 = VAR_7;
 struct nvme_trans_io_cdb VAR_13;
 u8 VAR_14 = VAR_11[0];
 u64 VAR_15;
 u64 VAR_16 = 0;
 struct sg_iovec VAR_17;
 int VAR_18;
 size_t VAR_19;


 switch (VAR_14) {
 case 128:
 case 132:
  FUNC_7(VAR_11, &VAR_13);
  break;
 case 131:
 case 135:
  FUNC_4(VAR_11, &VAR_13);
  break;
 case 130:
 case 134:
  FUNC_5(VAR_11, &VAR_13);
  break;
 case 129:
 case 133:
  FUNC_6(VAR_11, &VAR_13);
  break;
 default:

  VAR_12 = VAR_6;
  goto out;
 }


 if (VAR_9->iovec_count > 0) {
  for (VAR_18 = 0; VAR_18 < VAR_9->iovec_count; VAR_18++) {
   VAR_19 = FUNC_0(&VAR_17, VAR_9->dxferp +
      VAR_18 * sizeof(struct sg_iovec),
      sizeof(struct sg_iovec));
   if (VAR_19)
    return -VAR_0;
   VAR_16 += VAR_17.iov_len;

   if (VAR_17.iov_len % (1 << VAR_8->lba_shift) != 0) {
    VAR_12 = FUNC_2(VAR_9,
      VAR_3,
      VAR_2,
      VAR_5,
      VAR_4);
    goto out;
   }
  }
 } else {
  VAR_16 = VAR_9->dxfer_len;
 }


 VAR_15 = FUNC_1(((u64)VAR_9->dxfer_len), VAR_16);


 if (VAR_15 != (VAR_13.xfer_len << VAR_8->lba_shift)) {
  VAR_12 = -VAR_1;
  goto out;
 }


 if (VAR_13.xfer_len == 0)
  goto out;


 VAR_12 = FUNC_3(VAR_8, VAR_9, &VAR_13, VAR_10);
 if (VAR_12 != VAR_7)
  goto out;

 out:
 return VAR_12;
}
