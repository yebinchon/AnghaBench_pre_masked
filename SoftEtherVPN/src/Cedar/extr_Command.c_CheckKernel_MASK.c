
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int exe ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 char* VAR_3 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 char** FUNC_10 (int) ;
 int FUNC_11 (char*,char**) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (scalar_t__,int*,int ) ;

bool FUNC_16()
{
 UINT VAR_4 = 10, VAR_5;
 UINT64 VAR_6 = FUNC_6();
 UINT64 VAR_7 = FUNC_6();

 for (VAR_5 = 0;VAR_5 < VAR_4;VAR_5++)
 {
  UINT64 VAR_8 = FUNC_6();
  if (VAR_7 > VAR_8)
  {
   FUNC_3("Tick64 #1 Failed.\n");
   return 0;
  }

  VAR_7 = VAR_8;

  FUNC_4(100);
 }

 VAR_7 = (FUNC_6() - VAR_6);
 if (VAR_7 <= 500 || VAR_7 >= 2000)
 {
  FUNC_3("Tick64 #2 Failed.\n");
  return 0;
 }
 else if (0)
 {
  UINT64 VAR_9 = FUNC_6();
  UINT64 VAR_10;
  UINT64 VAR_11;

  FUNC_4(1000);

  VAR_11 = FUNC_2();
  VAR_10 = FUNC_5(FUNC_7(VAR_9));

  if (VAR_11 > VAR_10)
  {
   VAR_6 = VAR_11 - VAR_10;
  }
  else
  {
   VAR_6 = VAR_10 - VAR_11;
  }

  if (VAR_6 <= 500 || VAR_6 >= 2000)
  {
   FUNC_3("TickToTime Failed.\n");
   return 0;
  }
 }
 return 1;
}
