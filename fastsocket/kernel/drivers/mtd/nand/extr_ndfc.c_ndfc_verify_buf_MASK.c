
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct ndfc_controller VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
 struct ndfc_controller *VAR_6 = &VAR_2;
 uint32_t *VAR_7 = (uint32_t *) VAR_4;

 for(;VAR_5 > 0; VAR_5 -= 4)
  if (*VAR_7++ != FUNC_0(VAR_6->ndfcbase + VAR_1))
   return -VAR_0;
 return 0;
}
