
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_pd {int dummy; } ;
struct ib_mr {int rkey; int lkey; } ;
struct nes_mr {struct ib_mr ibmr; int mode; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {int max_mr; int allocated_mrs; } ;
struct ib_pd {int device; } ;
typedef int next_stag_index ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nes_device*,struct nes_pd*,int,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct nes_mr*) ;
 struct nes_mr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct nes_adapter*,int ,int,int*,int*,int ) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (struct nes_adapter*,int ,int) ;
 struct nes_pd* FUNC_8 (struct ib_pd*) ;
 struct nes_vnic* FUNC_9 (int ) ;

__attribute__((used)) static struct ib_mr *FUNC_10(struct ib_pd *VAR_7, int VAR_8)
{
 struct nes_pd *VAR_9 = FUNC_8(VAR_7);
 struct nes_vnic *VAR_10 = FUNC_9(VAR_7->device);
 struct nes_device *VAR_11 = VAR_10->nesdev;
 struct nes_adapter *VAR_12 = VAR_11->nesadapter;

 u32 VAR_13;
 u8 VAR_14 = 0;
 u32 VAR_15 = 0;
 int VAR_16 = 0;
 u32 VAR_17 = 0;
 struct nes_mr *VAR_18;
 u32 VAR_19;
 int VAR_20;
 struct ib_mr *VAR_21;




 if (VAR_8 > (VAR_4 / sizeof(u64)))
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_13, sizeof(VAR_13));
 VAR_14 = (u8)VAR_13;
 VAR_13 >>= 8;
 VAR_13 %= VAR_12->max_mr;

 VAR_16 = FUNC_5(VAR_12, VAR_12->allocated_mrs,
     VAR_12->max_mr, &VAR_17,
     &VAR_13, VAR_6);
 if (VAR_16)
  return FUNC_0(VAR_16);

 VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_2);
 if (!VAR_18) {
  FUNC_7(VAR_12, VAR_12->allocated_mrs, VAR_17);
  return FUNC_0(-VAR_1);
 }

 VAR_19 = VAR_17 << 8;
 VAR_19 |= VAR_15;
 VAR_19 += (u32)VAR_14;

 FUNC_6(VAR_5, "Allocating STag 0x%08X index = 0x%08X\n",
    VAR_19, VAR_17);

 VAR_20 = FUNC_1(VAR_11, VAR_9, VAR_19, VAR_8);

 if (VAR_20 == 0) {
  VAR_18->ibmr.rkey = VAR_19;
  VAR_18->ibmr.lkey = VAR_19;
  VAR_18->mode = VAR_3;
  VAR_21 = &VAR_18->ibmr;
 } else {
  FUNC_3(VAR_18);
  FUNC_7(VAR_12, VAR_12->allocated_mrs, VAR_17);
  VAR_21 = FUNC_0(-VAR_1);
 }
 return VAR_21;
}
