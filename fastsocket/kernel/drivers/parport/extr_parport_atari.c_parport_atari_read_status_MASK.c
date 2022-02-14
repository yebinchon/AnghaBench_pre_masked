
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct TYPE_2__ {int par_dt_reg; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static unsigned char
FUNC_0(struct parport *VAR_4)
{
 return ((VAR_3.par_dt_reg & 1 ? 0 : VAR_0) |
  VAR_2 | VAR_1);
}
