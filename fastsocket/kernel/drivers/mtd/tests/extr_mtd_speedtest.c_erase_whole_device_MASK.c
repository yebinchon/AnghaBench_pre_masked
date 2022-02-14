
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 () ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_0[VAR_3])
   continue;
  VAR_2 = FUNC_1(VAR_3);
  if (VAR_2)
   return VAR_2;
  FUNC_0();
 }
 return 0;
}
