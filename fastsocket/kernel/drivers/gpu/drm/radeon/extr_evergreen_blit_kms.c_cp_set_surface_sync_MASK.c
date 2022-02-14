
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {scalar_t__ family; struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_2(struct radeon_device *VAR_5,
      u32 VAR_6, u32 VAR_7,
      u64 VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_5->ring[VAR_4];
 u32 VAR_10;

 if (VAR_7 == 0xffffffff)
  VAR_10 = 0xffffffff;
 else
  VAR_10 = ((VAR_7 + 255) >> 8);

 if (VAR_5->family >= VAR_0) {




  FUNC_1(VAR_9, FUNC_0(VAR_1, 1));
  FUNC_1(VAR_9, (0x85e8 - VAR_2) >> 2);
  FUNC_1(VAR_9, 0);
 }
 FUNC_1(VAR_9, FUNC_0(VAR_3, 3));
 FUNC_1(VAR_9, VAR_6);
 FUNC_1(VAR_9, VAR_10);
 FUNC_1(VAR_9, VAR_8 >> 8);
 FUNC_1(VAR_9, 10);
}
