
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int icache_size; unsigned int icache_line; scalar_t__ use_icache; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

void FUNC_5(void)
{
 unsigned int VAR_1;
 unsigned VAR_2;

 if (VAR_0.use_icache) {
  FUNC_4(VAR_2);
  FUNC_0();



  for (VAR_1 = 0; VAR_1 < VAR_0.icache_size;
   VAR_1 += VAR_0.icache_line)
    FUNC_2(VAR_1);

  FUNC_1();
  FUNC_3(VAR_2);
 }
}
