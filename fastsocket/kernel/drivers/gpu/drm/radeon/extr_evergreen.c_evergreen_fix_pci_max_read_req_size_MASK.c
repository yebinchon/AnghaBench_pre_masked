
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct radeon_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct radeon_device *VAR_2)
{
 u16 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->pdev, VAR_0, &VAR_3);
 if (VAR_5)
  return;

 VAR_4 = (VAR_3 & VAR_1) >> 12;




 if ((VAR_4 == 0) || (VAR_4 == 6) || (VAR_4 == 7)) {
  VAR_3 &= ~VAR_1;
  VAR_3 |= (2 << 12);
  FUNC_1(VAR_2->pdev, VAR_0, VAR_3);
 }
}
