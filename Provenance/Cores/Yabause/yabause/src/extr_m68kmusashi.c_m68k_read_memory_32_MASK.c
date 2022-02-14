
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* r_16 ) (unsigned int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

unsigned int FUNC_2(unsigned int VAR_1)
{
   u16 VAR_2 = VAR_0.r_16(VAR_1);

   return (VAR_2 << 16 | VAR_0.r_16(VAR_1 + 2));
}
