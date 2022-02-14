
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_8 ;

void
FUNC_4(int VAR_9, int VAR_10)
{
 static int VAR_11;
 static int VAR_12;
 static int VAR_13 = 1;

 if (VAR_8) {
  if (VAR_10 == VAR_1 && VAR_9 == 0)
   FUNC_0(1 < VAR_6);
  else
   FUNC_0(VAR_9 < VAR_6);
  return;
 }

 if (VAR_10 == VAR_0) {
  VAR_11 = 1;
  VAR_6 = VAR_9;
  goto resetsema;
 }
 if (VAR_11) {
  VAR_5 = FUNC_1() > VAR_6;
  return;
 }

 if (VAR_10 == VAR_2) {
  VAR_12 = 1;


  if (VAR_9 == 0)
   FUNC_2("Whoa! Platform does not support global TLB purges.\n");
  VAR_6 = VAR_9;
  if (VAR_6 == VAR_3) {
   VAR_5 = 0;
   return;
  }
  goto resetsema;
 }
 if (VAR_12) {
  if (VAR_6 != VAR_3)
   VAR_5 = (FUNC_1() > VAR_6);
  return;
 }


 if (VAR_9 == 0) VAR_9 = 1;

 if (VAR_13) {
  VAR_6 = VAR_9;
  VAR_13 = 0;
 }
 if (VAR_9 < VAR_6)
  VAR_6 = VAR_9;
 if (VAR_6 == VAR_4) {
  VAR_5 = 0;
  return;
 } else
  VAR_5 = (FUNC_1() > VAR_6);

resetsema:
 FUNC_3(&VAR_7, VAR_9);
}
