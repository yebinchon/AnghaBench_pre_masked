
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {scalar_t__ family; struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct radeon_device*,int ,int,int) ;
 int FUNC_10 (struct radeon_ring*,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct radeon_device *VAR_15, u64 VAR_16)
{
 struct radeon_ring *VAR_17 = &VAR_15->ring[VAR_8];
 u32 VAR_18, VAR_19;


 VAR_18 = FUNC_5(FUNC_11(VAR_16) & 0xff) |
  FUNC_7(16);




 VAR_19 = FUNC_2(VAR_11) |
  FUNC_3(VAR_12) |
  FUNC_4(VAR_13) |
  FUNC_1(VAR_10);

 FUNC_10(VAR_17, FUNC_0(VAR_5, 8));
 FUNC_10(VAR_17, 0x580);
 FUNC_10(VAR_17, VAR_16 & 0xffffffff);
 FUNC_10(VAR_17, 48 - 1);
 FUNC_10(VAR_17, VAR_18);
 FUNC_10(VAR_17, VAR_19);
 FUNC_10(VAR_17, 0);
 FUNC_10(VAR_17, 0);
 FUNC_10(VAR_17, 0);
 FUNC_10(VAR_17, FUNC_8(VAR_14));

 if ((VAR_15->family == VAR_1) ||
     (VAR_15->family == VAR_2) ||
     (VAR_15->family == VAR_3) ||
     (VAR_15->family == VAR_4) ||
     (VAR_15->family == VAR_0))
  FUNC_9(VAR_15,
        VAR_6, 48, VAR_16);
 else
  FUNC_9(VAR_15,
        VAR_7, 48, VAR_16);

}
