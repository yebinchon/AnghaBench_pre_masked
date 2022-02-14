
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long linesz; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_0.dcache.linesz;
 FUNC_0(VAR_1 & ~(VAR_3 - 1),
        (VAR_2 + VAR_3 - 1) & ~(VAR_3 - 1));
}
