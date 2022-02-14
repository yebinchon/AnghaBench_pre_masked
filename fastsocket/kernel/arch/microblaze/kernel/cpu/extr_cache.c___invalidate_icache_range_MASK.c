
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int icache_line; scalar_t__ icache_size; scalar_t__ use_icache; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 unsigned long FUNC_5 (scalar_t__,unsigned long) ;

void FUNC_6(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3;
 unsigned VAR_4;
 unsigned int VAR_5;

 if (VAR_0.use_icache) {




  VAR_2 = FUNC_5(VAR_1 + VAR_0.icache_size, VAR_2);
  VAR_5 = ~(VAR_0.icache_line - 1);
  VAR_1 &= VAR_5;

  VAR_2 = ((VAR_2 & VAR_5) + VAR_0.icache_line);

  FUNC_4(VAR_4);
  FUNC_0();

  for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3 += VAR_0.icache_line)
   FUNC_2(VAR_3);

  FUNC_1();
  FUNC_3(VAR_4);
 }
}
