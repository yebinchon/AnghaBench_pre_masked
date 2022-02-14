
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct radeon_ring {int dummy; } ;
struct TYPE_2__ {int shader_gpu_addr; int vs_offset; int ps_offset; } ;
struct radeon_device {TYPE_1__ r600_blit; struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct radeon_device*,int ,int,int) ;
 int FUNC_2 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_3(struct radeon_device *VAR_6)
{
 struct radeon_ring *VAR_7 = &VAR_6->ring[VAR_3];
 u64 VAR_8;


 VAR_8 = VAR_6->r600_blit.shader_gpu_addr + VAR_6->r600_blit.vs_offset;
 FUNC_2(VAR_7, FUNC_0(VAR_0, 3));
 FUNC_2(VAR_7, (VAR_5 - VAR_1) >> 2);
 FUNC_2(VAR_7, VAR_8 >> 8);
 FUNC_2(VAR_7, 2);
 FUNC_2(VAR_7, 0);


 VAR_8 = VAR_6->r600_blit.shader_gpu_addr + VAR_6->r600_blit.ps_offset;
 FUNC_2(VAR_7, FUNC_0(VAR_0, 4));
 FUNC_2(VAR_7, (VAR_4 - VAR_1) >> 2);
 FUNC_2(VAR_7, VAR_8 >> 8);
 FUNC_2(VAR_7, 1);
 FUNC_2(VAR_7, 0);
 FUNC_2(VAR_7, 2);

 VAR_8 = VAR_6->r600_blit.shader_gpu_addr + VAR_6->r600_blit.vs_offset;
 FUNC_1(VAR_6, VAR_2, 512, VAR_8);
}
