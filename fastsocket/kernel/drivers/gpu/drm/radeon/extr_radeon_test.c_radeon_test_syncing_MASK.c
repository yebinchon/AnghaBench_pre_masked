
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ready; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,struct radeon_ring*,struct radeon_ring*) ;

void FUNC_3(struct radeon_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_2 = 1; VAR_2 < VAR_0; ++VAR_2) {
  struct radeon_ring *VAR_5 = &VAR_1->ring[VAR_2];
  if (!VAR_5->ready)
   continue;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
   struct radeon_ring *VAR_6 = &VAR_1->ring[VAR_3];
   if (!VAR_6->ready)
    continue;

   FUNC_0("Testing syncing between rings %d and %d...\n", VAR_2, VAR_3);
   FUNC_1(VAR_1, VAR_5, VAR_6);

   FUNC_0("Testing syncing between rings %d and %d...\n", VAR_3, VAR_2);
   FUNC_1(VAR_1, VAR_6, VAR_5);

   for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    struct radeon_ring *VAR_7 = &VAR_1->ring[VAR_4];
    if (!VAR_7->ready)
     continue;

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_2, VAR_3, VAR_4);
    FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7);

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_2, VAR_4, VAR_3);
    FUNC_2(VAR_1, VAR_5, VAR_7, VAR_6);

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_3, VAR_2, VAR_4);
    FUNC_2(VAR_1, VAR_6, VAR_5, VAR_7);

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_3, VAR_4, VAR_2);
    FUNC_2(VAR_1, VAR_6, VAR_7, VAR_5);

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_4, VAR_2, VAR_3);
    FUNC_2(VAR_1, VAR_7, VAR_5, VAR_6);

    FUNC_0("Testing syncing between rings %d, %d and %d...\n", VAR_4, VAR_3, VAR_2);
    FUNC_2(VAR_1, VAR_7, VAR_6, VAR_5);
   }
  }
 }
}
