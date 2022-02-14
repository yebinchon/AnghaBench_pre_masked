
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sg_io_hdr*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,scalar_t__) ;
 int FUNC_4 (struct nvme_ns*,struct sg_io_hdr*) ;
 int FUNC_5 (struct nvme_ns*,struct sg_io_hdr*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nvme_ns *VAR_15, struct sg_io_hdr *VAR_16,
       u8 *VAR_17)
{
 int VAR_18 = VAR_13;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21, VAR_22, VAR_23;

 VAR_21 = FUNC_0(VAR_17,
    VAR_3);
 VAR_22 = FUNC_0(VAR_17, VAR_6);
 VAR_23 = FUNC_0(VAR_17, VAR_1);

 VAR_21 = (VAR_21 &
    VAR_2) >>
    VAR_4;
 VAR_22 &= VAR_5;
 VAR_23 &= VAR_0;

 if (VAR_23 != 0) {
  if (VAR_21 != 0) {
   if (VAR_22 == 0)
    VAR_19 = VAR_8;
   else
    VAR_19 = VAR_7;
  }
 } else if (VAR_23 == 0 && VAR_21 != 0) {
  VAR_18 = FUNC_1(VAR_16, VAR_10,
     VAR_9, VAR_12,
     VAR_11);
  goto out;
 }






 if (VAR_19 > 0) {
  VAR_18 = FUNC_2(VAR_16, VAR_19,
     VAR_21, &VAR_20);
  if (VAR_18 != VAR_13)
   goto out;
 }


 VAR_18 = FUNC_5(VAR_15, VAR_16, VAR_14, 0, 0, 0);


 VAR_18 = FUNC_4(VAR_15, VAR_16);
 if (VAR_18 != VAR_13)
  goto out;

 VAR_18 = FUNC_3(VAR_15, VAR_16, VAR_20);

 out:
 return VAR_18;
}
