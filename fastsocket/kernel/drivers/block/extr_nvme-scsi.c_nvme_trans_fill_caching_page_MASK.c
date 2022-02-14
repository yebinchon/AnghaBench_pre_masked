
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nvme_dev*,int ,int ,int ,int*) ;
 int FUNC_1 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_2(struct nvme_ns *VAR_6,
     struct sg_io_hdr *VAR_7,
     u8 *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_5;
 int VAR_11;
 struct nvme_dev *VAR_12 = VAR_6->dev;
 u32 VAR_13;
 u8 VAR_14;

 if (VAR_9 < VAR_1)
  return VAR_4;

 VAR_11 = FUNC_0(VAR_12, VAR_3, 0, 0,
        &VAR_13);
 VAR_10 = FUNC_1(VAR_7, VAR_11);
 if (VAR_10)
  goto out;
 if (VAR_11) {
  VAR_10 = VAR_11;
  goto out;
 }
 VAR_14 = VAR_13 & 0x00000001;

 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_2;
 VAR_8[2] = VAR_14 << 2;

 out:
 return VAR_10;
}
