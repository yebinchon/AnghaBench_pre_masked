
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int ) ;
 void* FUNC_2 (int*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,int*,scalar_t__,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_8, struct sg_io_hdr *VAR_9,
       u8 *VAR_10)
{
 int VAR_11 = VAR_7;
 u8 VAR_12 = 0;
 u16 VAR_13;
 u8 VAR_14;
 u8 VAR_15;

 VAR_14 = FUNC_2(VAR_10, VAR_4);
 VAR_14 &= VAR_3;

 VAR_15 = FUNC_2(VAR_10, VAR_6);
 VAR_15 &= VAR_5;

 if (FUNC_0(VAR_10) == VAR_0) {
  VAR_13 = FUNC_2(VAR_10,
    VAR_2);
 } else {
  VAR_13 = FUNC_1(VAR_10,
    VAR_1);
  VAR_12 = 1;
 }

 if (VAR_13 != 0) {




  VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_13,
      VAR_14, VAR_15, VAR_12);
 }

 return VAR_11;
}
