
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct radeon_device *VAR_2)
{
 uint32_t VAR_3;
 unsigned int VAR_4 = VAR_2->usec_timeout;

 FUNC_2(VAR_0, VAR_1);
 do {
  VAR_3 = FUNC_1(VAR_0);
  if ((VAR_3 & VAR_1) == 0)
   break;
  FUNC_0(1);
  VAR_4--;
 } while (VAR_4 > 0);
 FUNC_2(VAR_0, 0);
}
