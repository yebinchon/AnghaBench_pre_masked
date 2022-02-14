
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long linesz; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 () ;

void FUNC_2(void *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_0.dcache.linesz;
 VAR_4 = (unsigned long)VAR_1 & ~(VAR_6 - 1);
 VAR_5 = ((unsigned long)VAR_1 + VAR_2 + VAR_6 - 1) & ~(VAR_6 - 1);

 for (VAR_3 = VAR_4; VAR_3 < VAR_5; VAR_3 += VAR_6)
  FUNC_0((void *)VAR_3);
 FUNC_1();
}
