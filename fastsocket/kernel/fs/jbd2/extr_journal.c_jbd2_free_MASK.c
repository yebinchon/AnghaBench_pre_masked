
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (void*) ;

void FUNC_5(void *VAR_1, size_t VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_0((unsigned long)VAR_1, 0);
  return;
 }
 if (VAR_2 > VAR_0) {
  int VAR_3 = FUNC_1(VAR_2);

  if (VAR_3 < 3)
   FUNC_0((unsigned long)VAR_1, VAR_3);
  else
   FUNC_4(VAR_1);
  return;
 }
 FUNC_3(FUNC_2(VAR_2), VAR_1);
}
