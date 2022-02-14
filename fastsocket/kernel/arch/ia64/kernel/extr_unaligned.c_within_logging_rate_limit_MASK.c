
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_1 (void)
{
 static unsigned long VAR_2, VAR_3;

 if (FUNC_0(VAR_1, VAR_3 + 5 * VAR_0))
  VAR_2 = 0;
 if (VAR_2 < 5) {
  VAR_3 = VAR_1;
  VAR_2++;
  return 1;
 }
 return 0;

}
