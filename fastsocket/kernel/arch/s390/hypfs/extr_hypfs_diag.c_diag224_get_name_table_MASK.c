
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int*) ;
 int* VAR_5 ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{

 VAR_5 = FUNC_3(VAR_4, VAR_3 | VAR_2);
 if (!VAR_5)
  return -VAR_0;
 if (FUNC_1(VAR_5)) {
  FUNC_2(VAR_5);
  return -VAR_1;
 }
 FUNC_0(VAR_5 + 16, (*VAR_5 + 1) * 16);
 return 0;
}
