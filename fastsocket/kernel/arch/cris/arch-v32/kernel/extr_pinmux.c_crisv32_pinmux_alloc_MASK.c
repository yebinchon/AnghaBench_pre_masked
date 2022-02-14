
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pin_mode { ____Placeholder_pin_mode } pin_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__** VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(int VAR_7, int VAR_8, int VAR_9, enum pin_mode VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;

 FUNC_0();

 if (VAR_7 > VAR_2)
  return -VAR_0;

 FUNC_3(&VAR_4, VAR_12);

 for (VAR_11 = VAR_8; VAR_11 <= VAR_9; VAR_11++)
 {
  if ((VAR_6[VAR_7][VAR_11] != VAR_5) && (VAR_6[VAR_7][VAR_11] != VAR_3) &&
      (VAR_6[VAR_7][VAR_11] != VAR_10))
  {
   FUNC_4(&VAR_4, VAR_12);



   return -VAR_1;
  }
 }

 for (VAR_11 = VAR_8; VAR_11 <= VAR_9; VAR_11++)
  VAR_6[VAR_7][VAR_11] = VAR_10;

 FUNC_1(VAR_7);

 FUNC_4(&VAR_4, VAR_12);

 return 0;
}
