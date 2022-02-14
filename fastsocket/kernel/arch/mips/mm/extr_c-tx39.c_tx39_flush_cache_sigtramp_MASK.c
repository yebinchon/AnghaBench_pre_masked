
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long linesz; } ;
struct TYPE_4__ {unsigned long linesz; } ;
struct TYPE_6__ {TYPE_2__ dcache; TYPE_1__ icache; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_1.icache.linesz;
 unsigned long VAR_4 = VAR_1.dcache.linesz;
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_4(VAR_2 & ~(VAR_4 - 1));


 FUNC_2(VAR_6);
 VAR_5 = FUNC_5();
 FUNC_6(VAR_5 & ~VAR_0);
 FUNC_0();
 FUNC_3(VAR_2 & ~(VAR_3 - 1));
 FUNC_6(VAR_5);
 FUNC_1(VAR_6);
}
