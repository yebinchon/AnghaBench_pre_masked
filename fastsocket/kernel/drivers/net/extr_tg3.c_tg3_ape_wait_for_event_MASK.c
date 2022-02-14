
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3 / 10; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_1);

  if (!(VAR_5 & VAR_0))
   break;

  FUNC_1(10);
 }

 return VAR_4 == VAR_3 / 10;
}
