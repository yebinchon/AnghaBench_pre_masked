
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
 int FUNC_2 (void*) ;

__attribute__((used)) static inline void FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_4 = VAR_0.dcache.linesz;
 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3 += VAR_4) {
  FUNC_0((void *)VAR_3);
  FUNC_2((void *)VAR_3);
 }

 FUNC_1();
}
