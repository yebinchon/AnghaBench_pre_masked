
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvme_id_ns {int flbas; int dps; int nsze; TYPE_1__* lbaf; } ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_2__ {int ds; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,int) ;

__attribute__((used)) static void FUNC_4(u8 *VAR_0, struct nvme_id_ns *VAR_1,
        u8 VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;
 u64 VAR_5;
 u8 VAR_6;
 u8 VAR_7[4] = {0, 0, 1, 2};
 __be64 VAR_8;
 __be32 VAR_9;
 __be32 VAR_10;

 VAR_3 = (VAR_1->flbas) & 0x0F;
 VAR_4 = (1 << (VAR_1->lbaf[VAR_3].ds));
 VAR_5 = FUNC_2(&VAR_1->nsze) - 1;
 (VAR_1->dps) ? (VAR_6 = 0x01) : (VAR_6 = 0);

 if (!VAR_2) {
  if (VAR_5 > 0xFFFFFFFF)
   VAR_5 = 0xFFFFFFFF;
  VAR_9 = FUNC_0(VAR_5);
  VAR_10 = FUNC_0(VAR_4);
  FUNC_3(VAR_0, &VAR_9, sizeof(u32));
  FUNC_3(&VAR_0[4], &VAR_10, sizeof(u32));
 } else {
  VAR_8 = FUNC_1(VAR_5);
  VAR_10 = FUNC_0(VAR_4);
  FUNC_3(VAR_0, &VAR_8, sizeof(u64));
  FUNC_3(&VAR_0[8], &VAR_10, sizeof(u32));
  VAR_0[12] = (VAR_7[VAR_1->dps & 0x3] << 1) | VAR_6;



 }
}
