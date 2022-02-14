
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_11(void)
{
 unsigned int VAR_14 = VAR_9;
 unsigned int VAR_15;

 if (!VAR_13) {
  FUNC_0("wf: creating control loops !\n");
  FUNC_7();
  FUNC_8();
  FUNC_6();
  VAR_13 = 1;
 }


 if (VAR_11 && --VAR_11)
  return;

 VAR_9 = 0;
 if (VAR_8)
  FUNC_9(VAR_8);
 if (VAR_12)
  FUNC_10(VAR_12);
 if (VAR_7)
  FUNC_5(VAR_7);

 VAR_10 = 0;
 VAR_15 = VAR_9 & ~VAR_14;




 if (VAR_9 && !VAR_14) {
  if (VAR_1)
   FUNC_2(VAR_1);
  if (VAR_2)
   FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_2(VAR_3);
  if (VAR_4)
   FUNC_2(VAR_4);
  if (VAR_5)
   FUNC_2(VAR_5);
  if (VAR_6)
   FUNC_2(VAR_6);
 }




 if (!VAR_9 && VAR_14) {
  if (VAR_1)
   FUNC_3(VAR_1);
  VAR_10 = 1;
 }




 if (VAR_15 & VAR_0) {
  FUNC_4();
  VAR_11 = 2;
 }







 if (VAR_15 == 0 && VAR_14 & VAR_0)
  FUNC_1();
}
