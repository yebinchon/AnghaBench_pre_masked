
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int dummy; } ;
struct TYPE_2__ {unsigned long loops_per_jiffy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (struct gameport*) ;
 scalar_t__ FUNC_4 (struct gameport*,int *,int ) ;
 int FUNC_5 (struct gameport*) ;
 unsigned int VAR_2 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(struct gameport *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_4(VAR_3, ((void*)0), VAR_0))
  return 0;

 VAR_6 = 1 << 30;

 for(VAR_4 = 0; VAR_4 < 50; VAR_4++) {
  FUNC_7(VAR_9);
  FUNC_9(VAR_7);
  for (VAR_5 = 0; VAR_5 < 50; VAR_5++) FUNC_5(VAR_3);
  FUNC_9(VAR_8);
  FUNC_6(VAR_9);
  FUNC_10(VAR_4 * 10);
  if (VAR_8 - VAR_7 < VAR_6) VAR_6 = VAR_8 - VAR_7;
 }

 FUNC_3(VAR_3);
 return (FUNC_2(FUNC_8()).loops_per_jiffy *
  (unsigned long)VAR_1 / (1000 / 50)) / (VAR_6 < 1 ? 1 : VAR_6);
}
