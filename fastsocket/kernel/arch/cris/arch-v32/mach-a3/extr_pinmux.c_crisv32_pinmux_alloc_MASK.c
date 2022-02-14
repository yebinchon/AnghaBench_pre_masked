
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pin_mode { ____Placeholder_pin_mode } pin_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(int VAR_8, int VAR_9, int VAR_10, enum pin_mode VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;

 FUNC_0();

 if (VAR_8 >= VAR_2)
  return -VAR_0;

 FUNC_3(&VAR_5, VAR_13);

 for (VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++) {
  if ((VAR_7[VAR_8 * VAR_3 + VAR_12] != VAR_6) &&
      (VAR_7[VAR_8 * VAR_3 + VAR_12] != VAR_4) &&
      (VAR_7[VAR_8 * VAR_3 + VAR_12] != VAR_11)) {
   FUNC_4(&VAR_5, VAR_13);



   return -VAR_1;
  }
 }

 for (VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++)
  VAR_7[VAR_8 * VAR_3 + VAR_12] = VAR_11;

 FUNC_1(VAR_8);

 FUNC_4(&VAR_5, VAR_13);

 return 0;
}
