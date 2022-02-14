
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 uint32_t VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->usec_timeout; VAR_4++) {
  VAR_5 = FUNC_1(VAR_1) & VAR_0;
  if (VAR_5 >= VAR_3) {
   return 0;
  }
  FUNC_0(1);
 }
 return -1;
}
