
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tg3 *VAR_4, u32 VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_1, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_2(10);
  if (FUNC_0(VAR_1) & VAR_2) {
   FUNC_2(10);
   break;
  }
 }

 if (VAR_6 == VAR_3)
  return -VAR_0;

 return 0;
}
