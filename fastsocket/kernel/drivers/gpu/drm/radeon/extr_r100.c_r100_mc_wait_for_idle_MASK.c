
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct radeon_device *VAR_2)
{
 unsigned VAR_3;
 uint32_t VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {

  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 & VAR_0) {
   return 0;
  }
  FUNC_0(1);
 }
 return -1;
}
