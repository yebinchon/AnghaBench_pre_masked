
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_ib {size_t length_dw; int ring; int * ptr; int is_const_ib; } ;
struct radeon_device {int dev; } ;
struct radeon_cs_packet {size_t idx; int type; int count; int opcode; scalar_t__ one_reg_wr; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct radeon_device*,int *,struct radeon_cs_packet*) ;
 int FUNC_5 (struct radeon_device*,int *,struct radeon_cs_packet*) ;
 int FUNC_6 (struct radeon_device*,int *,struct radeon_cs_packet*) ;

int FUNC_7(struct radeon_device *VAR_1, struct radeon_ib *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0;
 struct radeon_cs_packet VAR_5;

 do {
  VAR_5.idx = VAR_4;
  VAR_5.type = FUNC_2(VAR_2->ptr[VAR_4]);
  VAR_5.count = FUNC_1(VAR_2->ptr[VAR_4]);
  VAR_5.one_reg_wr = 0;
  switch (VAR_5.type) {
  case 131:
   FUNC_3(VAR_1->dev, "Packet0 not allowed!\n");
   VAR_3 = -VAR_0;
   break;
  case 130:
   VAR_4 += 1;
   break;
  case 129:
   VAR_5.opcode = FUNC_0(VAR_2->ptr[VAR_4]);
   if (VAR_2->is_const_ib)
    VAR_3 = FUNC_4(VAR_1, VAR_2->ptr, &VAR_5);
   else {
    switch (VAR_2->ring) {
    case 128:
     VAR_3 = FUNC_6(VAR_1, VAR_2->ptr, &VAR_5);
     break;
    case 133:
    case 132:
     VAR_3 = FUNC_5(VAR_1, VAR_2->ptr, &VAR_5);
     break;
    default:
     FUNC_3(VAR_1->dev, "Non-PM4 ring %d !\n", VAR_2->ring);
     VAR_3 = -VAR_0;
     break;
    }
   }
   VAR_4 += VAR_5.count + 2;
   break;
  default:
   FUNC_3(VAR_1->dev, "Unknown packet type %d !\n", VAR_5.type);
   VAR_3 = -VAR_0;
   break;
  }
  if (VAR_3)
   break;
 } while (VAR_4 < VAR_2->length_dw);

 return VAR_3;
}
