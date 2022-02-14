
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*,unsigned int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_3 (struct radeon_ring*,int ) ;

int FUNC_4(struct radeon_device *VAR_0, struct radeon_ring *VAR_1,
   unsigned VAR_2, uint32_t *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_2 || !VAR_3)
  return 0;


 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  FUNC_3(VAR_1, VAR_3[VAR_4]);
 }

 FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_3);
 return 0;
}
