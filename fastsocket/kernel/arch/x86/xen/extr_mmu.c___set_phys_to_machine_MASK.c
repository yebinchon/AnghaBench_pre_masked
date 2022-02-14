
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long* VAR_2 ;
 unsigned long** VAR_3 ;
 unsigned int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 unsigned long VAR_4 ;

bool FUNC_5(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned VAR_7, VAR_8;

 if (FUNC_3(FUNC_4(VAR_1))) {
  FUNC_0(VAR_5 != VAR_6 && VAR_6 != VAR_0);
  return 1;
 }

 if (FUNC_3(VAR_5 >= VAR_4)) {
  FUNC_0(VAR_6 != VAR_0);
  return 1;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_3[VAR_7] == VAR_2) {
  if (VAR_6 == VAR_0)
   return 1;
  return 0;
 }

 VAR_8 = FUNC_1(VAR_5);
 VAR_3[VAR_7][VAR_8] = VAR_6;

 return 1;
}
