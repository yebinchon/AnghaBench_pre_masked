
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_6(struct radeon_device *VAR_6, int VAR_7,
    int VAR_8, int VAR_9, u64 VAR_10)
{
 struct radeon_ring *VAR_11 = &VAR_6->ring[VAR_5];
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_0(VAR_9, 8);
 if (VAR_9 < 8)
  VAR_9 = 8;

 VAR_12 = FUNC_2(VAR_7) |
  FUNC_3(VAR_2) |
  FUNC_1(VAR_0);
 VAR_13 = (VAR_8 / 8) - 1;
 VAR_14 = ((VAR_8 * VAR_9) / 64) - 1;

 FUNC_5(VAR_11, FUNC_4(VAR_3, 15));
 FUNC_5(VAR_11, (VAR_1 - VAR_4) >> 2);
 FUNC_5(VAR_11, VAR_10 >> 8);
 FUNC_5(VAR_11, VAR_13);
 FUNC_5(VAR_11, VAR_14);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, VAR_12);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, (VAR_8 - 1) | ((VAR_9 - 1) << 16));
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
}
