
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5 = FUNC_3("get-sensor-state");
 int VAR_6;

 if (VAR_5 == VAR_1)
  return -VAR_0;

 do {
  VAR_6 = FUNC_1(VAR_5, 2, 2, VAR_4, VAR_2, VAR_3);
 } while (FUNC_0(VAR_6));

 if (VAR_6 < 0)
  return FUNC_2(VAR_6);
 return VAR_6;
}
