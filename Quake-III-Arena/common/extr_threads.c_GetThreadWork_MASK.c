
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_3 (void)
{
 int VAR_4;
 int VAR_5;

 FUNC_0 ();

 if (VAR_0 == VAR_3)
 {
  FUNC_1 ();
  return -1;
 }

 VAR_5 = 10*VAR_0 / VAR_3;
 if (VAR_5 != VAR_1)
 {
  VAR_1 = VAR_5;
  if (VAR_2)
   FUNC_2 ("%i...", VAR_5);
 }

 VAR_4 = VAR_0;
 VAR_0++;
 FUNC_1 ();

 return VAR_4;
}
