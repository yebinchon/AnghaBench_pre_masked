
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct nvme_ns*,struct sg_io_hdr*,int*,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct nvme_ns *VAR_23, struct sg_io_hdr *VAR_24,
       u8 *VAR_25)
{
 int VAR_26 = VAR_17;
 u16 VAR_27;
 u8 VAR_28 = 0;
 u8 VAR_29;
 u8 VAR_30;

 if (FUNC_0(VAR_25) == VAR_6) {
  VAR_27 = FUNC_2(VAR_25, VAR_8);
 } else {
  VAR_27 = FUNC_1(VAR_25,
      VAR_7);
  VAR_28 = 1;
 }

 VAR_30 = FUNC_2(VAR_25, VAR_12) &
      VAR_11;
 if (VAR_30 != VAR_13) {
  VAR_26 = FUNC_3(VAR_24, VAR_14,
     VAR_0, VAR_16,
     VAR_15);
  goto out;
 }

 VAR_29 = FUNC_2(VAR_25, VAR_10) &
     VAR_9;
 switch (VAR_29) {
 case 132:
  VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_25, VAR_27,
      VAR_28,
      &VAR_19,
      VAR_2);
  break;
 case 131:
  VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_25, VAR_27,
      VAR_28,
      &VAR_20,
      VAR_3);
  break;
 case 129:
  VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_25, VAR_27,
      VAR_28,
      &VAR_22,
      VAR_5);
  break;
 case 130:
  VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_25, VAR_27,
      VAR_28,
      &VAR_21,
      VAR_4);
  break;
 case 128:
  VAR_26 = FUNC_4(VAR_23, VAR_24, VAR_25, VAR_27,
      VAR_28,
      &VAR_18,
      VAR_1);
  break;
 default:
  VAR_26 = FUNC_3(VAR_24, VAR_14,
     VAR_0, VAR_16,
     VAR_15);
  break;
 }

 out:
 return VAR_26;
}
