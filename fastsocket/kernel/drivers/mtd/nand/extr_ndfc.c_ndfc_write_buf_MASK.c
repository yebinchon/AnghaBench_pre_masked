
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ndfc_controller VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
 struct ndfc_controller *VAR_5 = &VAR_1;
 uint32_t *VAR_6 = (uint32_t *) VAR_3;

 for(;VAR_4 > 0; VAR_4 -= 4)
  FUNC_0(VAR_5->ndfcbase + VAR_0, *VAR_6++);
}
