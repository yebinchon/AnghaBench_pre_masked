
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = (unsigned long) VAR_1;
 while ((long) VAR_2 > 0) {
  FUNC_0(FUNC_2((void *)VAR_3));
  VAR_3 += VAR_0;
  VAR_2 -= VAR_0;
 }
 FUNC_1(VAR_1);
}
