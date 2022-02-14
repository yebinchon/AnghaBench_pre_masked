
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_5__ {int gpu_offset; } ;
struct radeon_cs_reloc {int robj; TYPE_2__ lobj; } ;
struct TYPE_4__ {int* ptr; } ;
struct radeon_cs_parser {int filp; TYPE_3__* rdev; scalar_t__ track; TYPE_1__ ib; } ;
struct radeon_cs_packet {int idx; int opcode; int count; } ;
struct r100_cs_track {int vap_vf_cntl; int immd_dwords; } ;
struct TYPE_6__ {int cmask_filp; int hyperz_filp; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,struct r100_cs_track*) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;
 int FUNC_3 (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_reloc**,int ) ;
 int FUNC_6 (struct radeon_cs_parser*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct radeon_cs_parser *VAR_1,
         struct radeon_cs_packet *VAR_2)
{
 struct radeon_cs_reloc *VAR_3;
 struct r100_cs_track *VAR_4;
 volatile uint32_t *VAR_5;
 unsigned VAR_6;
 int VAR_7;

 VAR_5 = VAR_1->ib.ptr;
 VAR_6 = VAR_2->idx + 1;
 VAR_4 = (struct r100_cs_track *)VAR_1->track;
 switch(VAR_2->opcode) {
 case 130:
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_6);
  if (VAR_7)
   return VAR_7;
  break;
 case 129:
  VAR_7 = FUNC_5(VAR_1, &VAR_3, 0);
  if (VAR_7) {
   FUNC_0("No reloc for packet3 %d\n", VAR_2->opcode);
   FUNC_4(VAR_1, VAR_2);
   return VAR_7;
  }
  VAR_5[VAR_6+1] = FUNC_6(VAR_1, VAR_6 + 1) + ((u32)VAR_3->lobj.gpu_offset);
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3->robj);
  if (VAR_7) {
   return VAR_7;
  }
  break;

 case 136:



  if (((FUNC_6(VAR_1, VAR_6 + 1) >> 4) & 0x3) != 3) {
   FUNC_0("PRIM_WALK must be 3 for IMMD draw\n");
   return -VAR_0;
  }
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6 + 1);
  VAR_4->immd_dwords = VAR_2->count - 1;
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 135:



  if (((FUNC_6(VAR_1, VAR_6) >> 4) & 0x3) != 3) {
   FUNC_0("PRIM_WALK must be 3 for IMMD draw\n");
   return -VAR_0;
  }
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6);
  VAR_4->immd_dwords = VAR_2->count;
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 132:
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6 + 1);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 131:
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 134:
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6 + 1);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 133:
  VAR_4->vap_vf_cntl = FUNC_6(VAR_1, VAR_6);
  VAR_7 = FUNC_1(VAR_1->rdev, VAR_4);
  if (VAR_7) {
   return VAR_7;
  }
  break;
 case 138:
 case 137:
  if (VAR_1->rdev->hyperz_filp != VAR_1->filp)
   return -VAR_0;
  break;
 case 139:
  if (VAR_1->rdev->cmask_filp != VAR_1->filp)
   return -VAR_0;
  break;
 case 128:
  break;
 default:
  FUNC_0("Packet3 opcode %x not supported\n", VAR_2->opcode);
  return -VAR_0;
 }
 return 0;
}
