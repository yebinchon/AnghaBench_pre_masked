
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct radeon_device*,struct radeon_fence**,size_t) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_6 (struct radeon_ring*,int) ;

int FUNC_7(struct radeon_device *VAR_4,
    uint64_t VAR_5,
    uint64_t VAR_6,
    unsigned VAR_7,
    struct radeon_fence **VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_4->ring[VAR_1];
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;


 VAR_10 = VAR_7 << VAR_0;
 VAR_13 = FUNC_0(VAR_10, 0x1FFFFF);
 VAR_14 = FUNC_4(VAR_4, VAR_9, VAR_13 * 4 + 64);
 if (VAR_14) {
  FUNC_1("radeon: moving bo (%d).\n", VAR_14);
  return VAR_14;
 }

 FUNC_6(VAR_9, FUNC_2(VAR_3, 0));
 FUNC_6(VAR_9, (1 << 16));
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_11 = VAR_10;
  if (VAR_11 > 0x1FFFFF) {
   VAR_11 = 0x1FFFFF;
  }
  VAR_10 -= VAR_11;
  FUNC_6(VAR_9, FUNC_2(0x720, 2));
  FUNC_6(VAR_9, VAR_5);
  FUNC_6(VAR_9, VAR_6);
  FUNC_6(VAR_9, VAR_11 | (1 << 31) | (1 << 30));
  VAR_5 += VAR_11;
  VAR_6 += VAR_11;
 }
 FUNC_6(VAR_9, FUNC_2(VAR_3, 0));
 FUNC_6(VAR_9, VAR_2);
 if (VAR_8) {
  VAR_14 = FUNC_3(VAR_4, VAR_8, VAR_1);
 }
 FUNC_5(VAR_4, VAR_9);
 return VAR_14;
}
