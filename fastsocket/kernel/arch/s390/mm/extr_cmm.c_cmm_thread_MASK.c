
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,int *) ;
 int FUNC_1 (int,scalar_t__*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_10)
{
 int VAR_11;

 while (1) {
  VAR_11 = FUNC_5(VAR_5,
   (!VAR_4 && (VAR_2 != VAR_3 ||
    VAR_7 != VAR_8)) ||
    FUNC_3());
  if (FUNC_3() || VAR_11 == -VAR_0) {
   VAR_3 = VAR_2;
   VAR_8 = VAR_7;
   break;
  }
  if (VAR_3 > VAR_2) {
   if (FUNC_0(1, &VAR_2, &VAR_1))
    VAR_3 = VAR_2;
  } else if (VAR_3 < VAR_2) {
   FUNC_1(1, &VAR_2, &VAR_1);
  }
  if (VAR_8 > VAR_7) {
   if (FUNC_0(1, &VAR_7,
        &VAR_6))
    VAR_8 = VAR_7;
  } else if (VAR_8 < VAR_7) {
   FUNC_1(1, &VAR_7,
                  &VAR_6);
  }
  if (VAR_7 > 0 && !FUNC_4(&VAR_9))
   FUNC_2();
 }
 return 0;
}
