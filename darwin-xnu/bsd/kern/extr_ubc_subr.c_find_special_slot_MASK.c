
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int hashOffset; int nSpecialSlots; } ;
typedef TYPE_1__ CS_CodeDirectory ;


 int FUNC_0 (int ) ;

__attribute__((used)) static const uint8_t *
FUNC_1(const CS_CodeDirectory *VAR_0, size_t VAR_1, uint32_t VAR_2)
{

 if (FUNC_0(VAR_0->nSpecialSlots) < VAR_2 || VAR_2 == 0)
  return ((void*)0);

 return ((const uint8_t *)VAR_0 + FUNC_0(VAR_0->hashOffset) - (VAR_1 * VAR_2));
}
