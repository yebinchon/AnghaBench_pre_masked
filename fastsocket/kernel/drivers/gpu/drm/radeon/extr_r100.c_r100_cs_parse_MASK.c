
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_cs_parser {size_t chunk_ib_idx; TYPE_4__* rdev; int idx; TYPE_1__* chunks; struct r100_cs_track* track; } ;
struct radeon_cs_packet {int type; scalar_t__ count; } ;
struct r100_cs_track {int dummy; } ;
struct TYPE_6__ {int reg_safe_bm_size; int reg_safe_bm; } ;
struct TYPE_7__ {TYPE_2__ r100; } ;
struct TYPE_8__ {TYPE_3__ config; int family; } ;
struct TYPE_5__ {int length_dw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct r100_cs_track* FUNC_1 (int,int ) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ,int ,int *) ;
 int FUNC_3 (TYPE_4__*,struct r100_cs_track*) ;
 int VAR_4 ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int VAR_5 ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;

int FUNC_6(struct radeon_cs_parser *VAR_6)
{
 struct radeon_cs_packet VAR_7;
 struct r100_cs_track *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 FUNC_3(VAR_6->rdev, VAR_8);
 VAR_6->track = VAR_8;
 do {
  VAR_9 = FUNC_5(VAR_6, &VAR_7, VAR_6->idx);
  if (VAR_9) {
   return VAR_9;
  }
  VAR_6->idx += VAR_7.count + 2;
  switch (VAR_7.type) {
  case 130:
   if (VAR_6->rdev->family >= VAR_0)
    VAR_9 = FUNC_2(VAR_6, &VAR_7,
     VAR_6->rdev->config.r100.reg_safe_bm,
     VAR_6->rdev->config.r100.reg_safe_bm_size,
     &VAR_5);
   else
    VAR_9 = FUNC_2(VAR_6, &VAR_7,
     VAR_6->rdev->config.r100.reg_safe_bm,
     VAR_6->rdev->config.r100.reg_safe_bm_size,
     &VAR_4);
   break;
  case 129:
   break;
  case 128:
   VAR_9 = FUNC_4(VAR_6, &VAR_7);
   break;
  default:
   FUNC_0("Unknown packet type %d !\n",
      VAR_7.type);
   return -VAR_1;
  }
  if (VAR_9)
   return VAR_9;
 } while (VAR_6->idx < VAR_6->chunks[VAR_6->chunk_ib_idx].length_dw);
 return 0;
}
