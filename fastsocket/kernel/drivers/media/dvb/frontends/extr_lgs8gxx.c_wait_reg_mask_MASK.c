
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgs8gxx_state {int dummy; } ;


 int FUNC_0 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lgs8gxx_state *VAR_0, u8 VAR_1, u8 VAR_2,
 u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_0(VAR_0, VAR_1, &VAR_6);

  if ((VAR_6 & VAR_2) == VAR_3)
   return 0;
  FUNC_1(VAR_4);
 }

 return 1;
}
