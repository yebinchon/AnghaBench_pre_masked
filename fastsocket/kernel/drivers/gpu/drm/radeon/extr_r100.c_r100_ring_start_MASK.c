
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_3 (struct radeon_ring*,int) ;

void FUNC_4(struct radeon_device *VAR_5, struct radeon_ring *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6, 2);
 if (VAR_7) {
  return;
 }
 FUNC_3(VAR_6, FUNC_0(VAR_2, 0));
 FUNC_3(VAR_6,
     VAR_0 |
     VAR_1 |
     VAR_4 |
     VAR_3);
 FUNC_2(VAR_5, VAR_6);
}
