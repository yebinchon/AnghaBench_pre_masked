
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct sg_io_hdr {scalar_t__ iovec_count; scalar_t__ dxferp; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_iod {int dummy; } ;
struct nvme_dev {int dummy; } ;
struct TYPE_4__ {void** cdw10; scalar_t__ opcode; } ;
struct TYPE_3__ {void* offset; void* numd; } ;
struct nvme_command {TYPE_2__ common; TYPE_1__ dlfw; } ;
typedef int c ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct nvme_iod*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct nvme_iod*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct nvme_command*,int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct nvme_dev*,struct nvme_iod*) ;
 struct nvme_iod* FUNC_5 (struct nvme_dev*,int ,unsigned long,unsigned int) ;
 unsigned int FUNC_6 (struct nvme_dev*,TYPE_2__*,struct nvme_iod*,unsigned int,int ) ;
 int FUNC_7 (struct nvme_dev*,struct nvme_command*,int *) ;
 int FUNC_8 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_9 (struct sg_io_hdr*,int) ;
 int FUNC_10 (struct nvme_dev*,int ,struct nvme_iod*) ;

__attribute__((used)) static int FUNC_11(struct nvme_ns *VAR_12, struct sg_io_hdr *VAR_13,
     u8 VAR_14, u32 VAR_15, u32 VAR_16,
     u8 VAR_17)
{
 int VAR_18 = VAR_9;
 int VAR_19;
 struct nvme_dev *VAR_20 = VAR_12->dev;
 struct nvme_command VAR_21;
 struct nvme_iod *VAR_22 = ((void*)0);
 unsigned VAR_23;

 FUNC_3(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.common.opcode = VAR_14;
 if (VAR_14 == VAR_11) {
  if (VAR_13->iovec_count > 0) {

   VAR_18 = FUNC_8(VAR_13,
      VAR_6,
      VAR_4,
      VAR_8,
      VAR_7);
   goto out;
  }
  VAR_22 = FUNC_5(VAR_20, VAR_1,
    (unsigned long)VAR_13->dxferp, VAR_15);
  if (FUNC_0(VAR_22)) {
   VAR_18 = FUNC_1(VAR_22);
   goto out;
  }
  VAR_23 = FUNC_6(VAR_20, &VAR_21.common, VAR_22, VAR_15,
        VAR_3);
  if (VAR_23 != VAR_15) {
   VAR_18 = -VAR_2;
   goto out_unmap;
  }

  VAR_21.dlfw.numd = FUNC_2((VAR_15/VAR_0) - 1);
  VAR_21.dlfw.offset = FUNC_2(VAR_16/VAR_0);
 } else if (VAR_14 == VAR_10) {
  u32 VAR_24 = VAR_17 | VAR_5;
  VAR_21.common.cdw10[0] = FUNC_2(VAR_24);
 }

 VAR_19 = FUNC_7(VAR_20, &VAR_21, ((void*)0));
 VAR_18 = FUNC_9(VAR_13, VAR_19);
 if (VAR_18)
  goto out_unmap;
 if (VAR_19)
  VAR_18 = VAR_19;

 out_unmap:
 if (VAR_14 == VAR_11) {
  FUNC_10(VAR_20, VAR_1, VAR_22);
  FUNC_4(VAR_20, VAR_22);
 }
 out:
 return VAR_18;
}
