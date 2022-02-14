
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;



 int VAR_0 ;


 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,int ,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_14, struct sg_io_hdr *VAR_15,
       u8 *VAR_16)
{
 int VAR_17 = VAR_6;
 u32 VAR_18, VAR_19;
 u8 VAR_20, VAR_21;

 VAR_19 =
  FUNC_0(VAR_16, VAR_11);
 if (VAR_19 % VAR_0 != 0) {

  VAR_17 = FUNC_2(VAR_15, VAR_3,
     VAR_1, VAR_5,
     VAR_4);
  goto out;
 }
 VAR_20 = FUNC_1(VAR_16, VAR_7);
 if (VAR_20 > VAR_2) {
  VAR_17 = FUNC_2(VAR_15, VAR_3,
     VAR_1, VAR_5,
     VAR_4);
  goto out;
 }
 VAR_21 = FUNC_1(VAR_16, VAR_10) &
      VAR_9;
 VAR_18 =
  FUNC_0(VAR_16, VAR_8);

 switch (VAR_21) {
 case 129:
  VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_13,
      VAR_19, VAR_18,
      VAR_20);
  if (VAR_17 != VAR_6)
   goto out;
  VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_12,
      VAR_19, VAR_18,
      VAR_20);
  break;
 case 128:
  VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_13,
      VAR_19, VAR_18,
      VAR_20);
  break;
 case 130:
  VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_12,
      VAR_19, VAR_18,
      VAR_20);
  break;
 default:
  VAR_17 = FUNC_2(VAR_15, VAR_3,
     VAR_1, VAR_5,
     VAR_4);
  break;
 }

 out:
 return VAR_17;
}
