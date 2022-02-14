
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int*,int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = VAR_4;

 if (VAR_5)
  FUNC_3("DELETE Command");
 VAR_0;

 if (FUNC_0(VAR_4) == 0)
  return;
 {




  if (VAR_10)
   VAR_9++;
  else
   if (FUNC_4(VAR_6) == 0)
    VAR_7++;
   else
    VAR_8++;
 }

 if (VAR_5)
  FUNC_3("%d deleted, %d failed, %d locked",
         VAR_7, VAR_8, VAR_9);

 if (VAR_9) {
  VAR_3 = 167;
  VAR_2;
 }
 else if (VAR_8 != 0 || VAR_7 == 0) {
  VAR_3 = 170;
  VAR_2;
 }
 else {
  VAR_3 = 1;
  VAR_1;
 }
}
