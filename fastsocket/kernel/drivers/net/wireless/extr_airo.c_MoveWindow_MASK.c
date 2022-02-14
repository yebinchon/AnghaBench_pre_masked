
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ window; scalar_t__ rx; } ;
typedef TYPE_1__ miccntx ;



__attribute__((used)) static void FUNC_0(miccntx *VAR_0, u32 VAR_1)
{
 u32 VAR_2;


 if (VAR_1 > VAR_0->window) {
  VAR_2 = (VAR_1 - VAR_0->window) >> 1;


  if (VAR_2 < 32)
   VAR_0->rx >>= VAR_2;
  else
   VAR_0->rx = 0;

  VAR_0->window = VAR_1;
 }
}
