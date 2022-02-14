
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {scalar_t__ family; struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_2(struct radeon_device *VAR_7, int VAR_8, int VAR_9,
      int VAR_10, int VAR_11)
{
 struct radeon_ring *VAR_12 = &VAR_7->ring[VAR_6];

 if (VAR_10 == 0)
  VAR_8 = 1;
 if (VAR_11 == 0)
  VAR_9 = 1;
 if (VAR_7->family >= VAR_0) {
  if ((VAR_10 == 1) && (VAR_11 == 1))
   VAR_10 = 2;
 }

 FUNC_1(VAR_12, FUNC_0(VAR_1, 2));
 FUNC_1(VAR_12, (VAR_4 - VAR_2) >> 2);
 FUNC_1(VAR_12, (VAR_8 << 0) | (VAR_9 << 16));
 FUNC_1(VAR_12, (VAR_10 << 0) | (VAR_11 << 16));

 FUNC_1(VAR_12, FUNC_0(VAR_1, 2));
 FUNC_1(VAR_12, (VAR_3 - VAR_2) >> 2);
 FUNC_1(VAR_12, (VAR_8 << 0) | (VAR_9 << 16) | (1 << 31));
 FUNC_1(VAR_12, (VAR_10 << 0) | (VAR_11 << 16));

 FUNC_1(VAR_12, FUNC_0(VAR_1, 2));
 FUNC_1(VAR_12, (VAR_5 - VAR_2) >> 2);
 FUNC_1(VAR_12, (VAR_8 << 0) | (VAR_9 << 16) | (1 << 31));
 FUNC_1(VAR_12, (VAR_10 << 0) | (VAR_11 << 16));
}
