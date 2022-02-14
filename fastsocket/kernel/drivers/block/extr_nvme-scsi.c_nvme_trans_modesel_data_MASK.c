
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sg_io_hdr*,int*,scalar_t__) ;
 int FUNC_4 (int*,int,scalar_t__*,int*) ;
 int FUNC_5 (struct nvme_ns*,struct sg_io_hdr*,int*,int) ;
 int FUNC_6 (struct nvme_ns*,int*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct nvme_ns *VAR_13, struct sg_io_hdr *VAR_14,
     u8 *VAR_15, u16 VAR_16, u8 VAR_17,
     u8 VAR_18, u8 VAR_19)
{
 int VAR_20 = VAR_12;
 u8 *VAR_21;
 u16 VAR_22;
 u8 VAR_23 = 0;
 u16 VAR_24, VAR_25;
 u8 VAR_26;
 u16 VAR_27;


 VAR_21 = FUNC_1(VAR_16, VAR_1);
 if (VAR_21 == ((void*)0)) {
  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_20 = FUNC_3(VAR_14, VAR_21, VAR_16);
 if (VAR_20 != VAR_12)
  goto out_mem;

 FUNC_4(VAR_21, VAR_19, &VAR_22, &VAR_23);
 VAR_24 = (VAR_19) ? (VAR_6) : (VAR_7);

 if (VAR_22 != 0) {

  FUNC_6(VAR_13, VAR_21, VAR_24, VAR_22, VAR_23);
  VAR_24 += VAR_22;
 }
 VAR_25 = VAR_24;



 do {
  VAR_26 = VAR_21[VAR_24] & VAR_8;
  VAR_27 = VAR_21[VAR_24 + 1] + 2;
  if ((VAR_26 != VAR_3) &&
      (VAR_26 != VAR_4) &&
      (VAR_26 != VAR_5)) {
   VAR_20 = FUNC_2(VAR_14,
      VAR_9,
      VAR_2,
      VAR_11,
      VAR_10);
   goto out_mem;
  }
  VAR_24 += VAR_27;
 } while (VAR_24 < VAR_16);


 VAR_24 = VAR_25;
 do {
  VAR_26 = VAR_21[VAR_24] & VAR_8;
  VAR_27 = VAR_21[VAR_24 + 1] + 2;
  VAR_20 = FUNC_5(VAR_13, VAR_14, &VAR_21[VAR_24],
        VAR_26);
  if (VAR_20 != VAR_12)
   break;
  VAR_24 += VAR_27;
 } while (VAR_24 < VAR_16);

 out_mem:
 FUNC_0(VAR_21);
 out:
 return VAR_20;
}
