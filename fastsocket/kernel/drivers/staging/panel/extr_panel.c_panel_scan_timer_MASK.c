
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 () ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_5 && VAR_6) {
  if (FUNC_4(&VAR_14)) {
   FUNC_3();
   FUNC_5(&VAR_14);
  }

  if (!VAR_3 || VAR_12 != VAR_13)
   FUNC_2();
 }

 if (VAR_8 && VAR_10) {
  if (VAR_7) {
   if (VAR_11 == 0 && ((VAR_9 & VAR_2) == 0))
    FUNC_0(1);
   VAR_11 = VAR_0;
  } else if (VAR_11 > 0) {
   VAR_11--;
   if (VAR_11 == 0 && ((VAR_9 & VAR_2) == 0))
    FUNC_0(0);
  }
 }

 FUNC_1(&VAR_15, VAR_4 + VAR_1);
}
