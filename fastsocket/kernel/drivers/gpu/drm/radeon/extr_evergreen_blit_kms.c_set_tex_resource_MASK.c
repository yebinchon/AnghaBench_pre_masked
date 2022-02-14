
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*,int ,int,int) ;
 int FUNC_9 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_10(struct radeon_device *VAR_10,
   int VAR_11, int VAR_12, int VAR_13, int VAR_14,
   u64 VAR_15, u32 VAR_16)
{
 struct radeon_ring *VAR_17 = &VAR_10->ring[VAR_3];
 u32 VAR_18, VAR_19;
 u32 VAR_20, VAR_21;

 if (VAR_13 < 1)
  VAR_13 = 1;

 VAR_18 = FUNC_3(VAR_8);
 VAR_18 |= ((((VAR_14 >> 3) - 1) << 6) |
      ((VAR_12 - 1) << 18));
 VAR_19 = ((VAR_13 - 1) << 0) |
    FUNC_2(VAR_0);

 VAR_20 = FUNC_5(VAR_5) |
    FUNC_6(VAR_6) |
    FUNC_7(VAR_7) |
    FUNC_4(VAR_4);

 VAR_21 = VAR_11 |
  FUNC_1(VAR_9);

 FUNC_8(VAR_10,
       VAR_2, VAR_16, VAR_15);

 FUNC_9(VAR_17, FUNC_0(VAR_1, 8));
 FUNC_9(VAR_17, 0);
 FUNC_9(VAR_17, VAR_18);
 FUNC_9(VAR_17, VAR_19);
 FUNC_9(VAR_17, VAR_15 >> 8);
 FUNC_9(VAR_17, VAR_15 >> 8);
 FUNC_9(VAR_17, VAR_20);
 FUNC_9(VAR_17, 0);
 FUNC_9(VAR_17, 0);
 FUNC_9(VAR_17, VAR_21);
}
