
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
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned int VAR_11 = VAR_6;
 unsigned int VAR_12;

 if (!VAR_9) {
  FUNC_0("wf: creating control loops !\n");
  FUNC_7();
  FUNC_6();
  VAR_9 = 1;
 }


 if (VAR_8 && --VAR_8)
  return;

 VAR_6 = 0;
 if (VAR_10)
  FUNC_8(VAR_10);
 if (VAR_5)
  FUNC_5(VAR_5);

 VAR_7 = 0;
 VAR_12 = VAR_6 & ~VAR_11;




 if (VAR_6 && !VAR_11) {
  if (VAR_1)
   FUNC_2(VAR_1);
  if (VAR_4)
   FUNC_2(VAR_4);
  if (VAR_2)
   FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_2(VAR_3);
 }




 if (!VAR_6 && VAR_11) {
  if (VAR_1)
   FUNC_3(VAR_1);
  VAR_7 = 1;
 }




 if (VAR_12 & VAR_0) {
  FUNC_4();
  VAR_8 = 2;
 }







 if (VAR_12 == 0 && VAR_11 & VAR_0)
  FUNC_1();
}
