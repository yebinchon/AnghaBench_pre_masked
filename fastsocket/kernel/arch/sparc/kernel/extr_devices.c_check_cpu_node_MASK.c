
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3, int *VAR_4,
     int (*VAR_5)(int, int, void *), void *VAR_6,
     int *VAR_7, int *VAR_8)
{
 if (!VAR_5(VAR_3, *VAR_4, VAR_6)) {
  if (VAR_7)
   *VAR_7 = VAR_3;
  if (VAR_8) {
   *VAR_8 = FUNC_1(VAR_3, FUNC_0(), 0);
   if (VAR_1 == VAR_2)
    *VAR_8 &= 3;
  }
  return 0;
 }

 (*VAR_4)++;

 return -VAR_0;
}
