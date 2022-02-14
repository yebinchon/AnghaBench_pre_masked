
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(FAS216_Info *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_3, VAR_4);

 for (VAR_5 = 1000; VAR_5; VAR_5 -= 1) {
  VAR_6 = FUNC_1(VAR_3, VAR_0);
  if (VAR_6 & (VAR_1|VAR_2))
   break;
  FUNC_2(1);
 }

 return VAR_6;
}
