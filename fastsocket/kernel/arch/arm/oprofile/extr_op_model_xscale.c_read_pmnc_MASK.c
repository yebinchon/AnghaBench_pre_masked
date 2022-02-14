
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(void)
{
 u32 VAR_2;

 if (VAR_1->id == VAR_0)
  __asm__ __volatile__ ("mrc p14, 0, %0, c0, c0, 0" : "=r" (VAR_2));
 else {
  __asm__ __volatile__ ("mrc p14, 0, %0, c0, c1, 0" : "=r" (VAR_2));

  VAR_2 &= 0xff000009;
 }

 return VAR_2;
}
