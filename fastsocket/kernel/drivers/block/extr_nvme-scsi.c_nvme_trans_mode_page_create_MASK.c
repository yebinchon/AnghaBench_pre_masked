
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sg_io_hdr*,int*,int) ;
 int FUNC_7 (struct nvme_ns*,struct sg_io_hdr*,int*,scalar_t__,int) ;
 int FUNC_8 (int*,int,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct nvme_ns *VAR_3,
     struct sg_io_hdr *VAR_4, u8 *VAR_5,
     u16 VAR_6, u8 VAR_7,
     int (*VAR_8)
     (struct nvme_ns *,
     struct sg_io_hdr *VAR_9, u8 *, int),
     u16 VAR_10)
{
 int VAR_11 = VAR_2;
 int VAR_12;
 u8 *VAR_13;
 u8 VAR_14, VAR_15;
 u16 VAR_16;
 int VAR_17;
 u16 VAR_18;
 u16 VAR_19, VAR_20, VAR_21;

 VAR_14 = FUNC_0(VAR_5);
 VAR_15 = FUNC_1(VAR_5);
 VAR_17 = FUNC_2(VAR_7);
 VAR_19 = FUNC_9(VAR_14, VAR_15);

 VAR_16 = VAR_17 + VAR_19 + VAR_10;

 VAR_21 = 3 + (3 * VAR_7) + VAR_19 + VAR_10;

 VAR_20 = VAR_17;
 VAR_18 = VAR_20 + VAR_19;

 VAR_13 = FUNC_4(VAR_16, VAR_1);
 if (VAR_13 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out_mem;
 }

 VAR_11 = FUNC_8(&VAR_13[0], VAR_17, VAR_7,
     VAR_15, VAR_21, VAR_19);
 if (VAR_11 != VAR_2)
  goto out_free;
 if (VAR_19 > 0) {
  VAR_11 = FUNC_7(VAR_3, VAR_4,
            &VAR_13[VAR_20],
            VAR_19, VAR_15);
  if (VAR_11 != VAR_2)
   goto out_free;
 }
 VAR_11 = VAR_8(VAR_3, VAR_4, &VAR_13[VAR_18],
     VAR_10);
 if (VAR_11 != VAR_2)
  goto out_free;

 VAR_12 = FUNC_5(VAR_6, VAR_16);
 VAR_11 = FUNC_6(VAR_4, VAR_13, VAR_12);

 out_free:
 FUNC_3(VAR_13);
 out_mem:
 return VAR_11;
}
