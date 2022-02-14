
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,int ) ;
 int FUNC_4 (struct nvme_ns*,struct sg_io_hdr*,int ) ;
 int FUNC_5 (struct nvme_ns*,struct sg_io_hdr*,int ) ;

__attribute__((used)) static int FUNC_6(struct nvme_ns *VAR_13, struct sg_io_hdr *VAR_14,
       u8 *VAR_15)
{
 int VAR_16 = VAR_12;
 u16 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;

 VAR_18 = FUNC_1(VAR_15, VAR_8);
 if (VAR_18 != VAR_7) {
  VAR_16 = FUNC_2(VAR_14, VAR_9,
     VAR_0, VAR_11,
     VAR_10);
  goto out;
 }
 VAR_19 = FUNC_1(VAR_15, VAR_5);
 VAR_20 = VAR_19 & VAR_2;
 VAR_19 = (VAR_19 & VAR_4) >> VAR_6;
 if (VAR_19 != VAR_3) {
  VAR_16 = FUNC_2(VAR_14, VAR_9,
     VAR_0, VAR_11,
     VAR_10);
  goto out;
 }
 VAR_17 = FUNC_0(VAR_15, VAR_1);
 switch (VAR_20) {
 case 129:
  VAR_16 = FUNC_4(VAR_13, VAR_14, VAR_17);
  break;
 case 130:
  VAR_16 = FUNC_3(VAR_13, VAR_14, VAR_17);
  break;
 case 128:
  VAR_16 = FUNC_5(VAR_13, VAR_14, VAR_17);
  break;
 default:
  VAR_16 = FUNC_2(VAR_14, VAR_9,
     VAR_0, VAR_11,
     VAR_10);
  break;
 }

 out:
 return VAR_16;
}
