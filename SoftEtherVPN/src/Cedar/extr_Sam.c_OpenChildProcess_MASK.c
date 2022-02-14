
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PID ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,char* const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int*) ;
 int VAR_1 ;
 int VAR_2 ;

PID FUNC_7(const char* VAR_3, char* const VAR_4[], int VAR_5[] )
{





 int VAR_6[2][2];
 PID VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return (PID)-1;
 }

 if (FUNC_6(VAR_6[0]) != 0)
 {
  return (PID)-1;
 }

 if (FUNC_6(VAR_6[1]) != 0)
 {
  FUNC_1(VAR_6[0][0]);
  FUNC_1(VAR_6[0][1]);

  return (PID)-1;
 }

 VAR_7 = FUNC_5();
 if (VAR_7 == (PID)0) {
  int VAR_8;

  FUNC_1(VAR_6[0][1]);
  FUNC_1(VAR_6[1][0]);

  if (FUNC_2(VAR_6[0][0], FUNC_4(VAR_1)) < 0 || FUNC_2(VAR_6[1][1], FUNC_4(VAR_2)) < 0 )
  {
   FUNC_1(VAR_6[0][0]);
   FUNC_1(VAR_6[1][1]);

   FUNC_0(VAR_0);
  }

  VAR_8 = FUNC_3(VAR_3, VAR_4);


  FUNC_1(VAR_6[0][0]);
  FUNC_1(VAR_6[1][1]);

  FUNC_0(VAR_8);
 }
 else if (VAR_7 > (PID)0)
 {
  FUNC_1(VAR_6[0][0]);
  FUNC_1(VAR_6[1][1]);

  VAR_5[0] = VAR_6[1][0];
  VAR_5[1] = VAR_6[0][1];

  return VAR_7;
 }
 else
 {
  FUNC_1(VAR_6[0][0]);
  FUNC_1(VAR_6[1][1]);

  FUNC_1(VAR_6[0][1]);
  FUNC_1(VAR_6[1][0]);

  return -1;
 }

}
