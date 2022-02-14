
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct sg_io_hdr*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct nvme_ns *VAR_14, struct sg_io_hdr *VAR_15,
       u8 *VAR_16)
{
 int VAR_17 = VAR_13;
 u8 VAR_18, VAR_19, VAR_20;
 u8 VAR_21;
 u8 *VAR_22;

 VAR_18 = FUNC_0(VAR_16);
 VAR_21 = FUNC_1(VAR_16, VAR_10);
 VAR_21 &= VAR_9;

 VAR_20 = ((VAR_21) ? (VAR_1) :
     (VAR_4));
 VAR_22 = FUNC_3(VAR_20, VAR_7);
 if (VAR_22 == ((void*)0)) {
  VAR_17 = -VAR_3;
  goto out;
 }

 if (VAR_21 == VAR_0) {

  VAR_22[0] = VAR_2;
  VAR_22[1] = VAR_8;

  VAR_22[2] = VAR_12;
  VAR_22[3] = VAR_11;

 } else {

  VAR_22[0] = VAR_5;

  VAR_22[2] = VAR_8;

  VAR_22[7] = VAR_6;

  VAR_22[12] = VAR_12;
  VAR_22[13] = VAR_11;


 }

 VAR_19 = FUNC_4(VAR_18, VAR_20);
 VAR_17 = FUNC_5(VAR_15, VAR_22, VAR_19);

 FUNC_2(VAR_22);
 out:
 return VAR_17;
}
