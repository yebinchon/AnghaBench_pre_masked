
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nvme_ns*,struct sg_io_hdr*,int) ;
 int FUNC_6 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_7 (struct nvme_ns*,struct sg_io_hdr*,scalar_t__*,int) ;
 int FUNC_8 (struct nvme_ns*,struct sg_io_hdr*,int) ;
 int FUNC_9 (struct nvme_ns*,struct sg_io_hdr*,scalar_t__*,int) ;
 int FUNC_10 (struct nvme_ns*,struct sg_io_hdr*,scalar_t__*,int) ;
 int FUNC_11 (struct nvme_ns*,struct sg_io_hdr*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_12(struct nvme_ns *VAR_9, struct sg_io_hdr *VAR_10,
       u8 *VAR_11)
{
 int VAR_12 = VAR_7;
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15;
 u8 *VAR_16;

 VAR_13 = FUNC_1(VAR_11);
 VAR_14 = FUNC_2(VAR_11);
 VAR_15 = FUNC_0(VAR_11);

 VAR_16 = FUNC_4(VAR_8, VAR_1);
 if (VAR_16 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out_mem;
 }

 if (VAR_13 == 0) {
  if (VAR_14 == VAR_3) {
   VAR_12 = FUNC_9(VAR_9, VAR_10,
      VAR_16, VAR_15);
  } else {
   VAR_12 = FUNC_6(VAR_10,
      VAR_4,
      VAR_2,
      VAR_6,
      VAR_5);
  }
 } else {
  switch (VAR_14) {
  case 128:
   VAR_12 = FUNC_10(VAR_9, VAR_10,
      VAR_16, VAR_15);
   break;
  case 129:
   VAR_12 = FUNC_11(VAR_9, VAR_10, VAR_16,
        VAR_15);
   break;
  case 131:
   VAR_12 = FUNC_7(VAR_9, VAR_10, VAR_16,
        VAR_15);
   break;
  case 130:
   VAR_12 = FUNC_8(VAR_9, VAR_10, VAR_15);
   break;
  case 132:
   VAR_12 = FUNC_5(VAR_9, VAR_10, VAR_15);
   break;
  default:
   VAR_12 = FUNC_6(VAR_10,
      VAR_4,
      VAR_2,
      VAR_6,
      VAR_5);
   break;
  }
 }
 FUNC_3(VAR_16);
 out_mem:
 return VAR_12;
}
