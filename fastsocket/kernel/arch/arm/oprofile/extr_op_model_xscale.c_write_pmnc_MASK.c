
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(u32 VAR_2)
{
 if (VAR_1->id == VAR_0) {

  VAR_2 &= 0xffff77f;
  __asm__ __volatile__ ("mcr p14, 0, %0, c0, c0, 0" : : "r" (VAR_2));
 } else {

  VAR_2 &= 0xf;
  __asm__ __volatile__ ("mcr p14, 0, %0, c0, c1, 0" : : "r" (VAR_2));
 }
}
