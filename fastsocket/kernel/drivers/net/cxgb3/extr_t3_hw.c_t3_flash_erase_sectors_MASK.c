
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int,int) ;
 int FUNC_1 (struct adapter*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_2, int VAR_3, int VAR_4)
{
 while (VAR_3 <= VAR_4) {
  int VAR_5;

  if ((VAR_5 = FUNC_1(VAR_2, 1, 0, VAR_1)) != 0 ||
      (VAR_5 = FUNC_1(VAR_2, 4, 0,
         VAR_0 | (VAR_3 << 8))) != 0 ||
      (VAR_5 = FUNC_0(VAR_2, 5, 500)) != 0)
   return VAR_5;
  VAR_3++;
 }
 return 0;
}
