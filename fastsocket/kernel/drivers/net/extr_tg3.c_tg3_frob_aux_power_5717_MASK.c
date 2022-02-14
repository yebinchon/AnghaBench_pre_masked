
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
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*,int) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_6, bool VAR_7)
{
 u32 VAR_8 = 0;


 if (FUNC_0(VAR_6, VAR_2))
  return;

 if (FUNC_2(VAR_6, VAR_1) || FUNC_2(VAR_6, VAR_0) || VAR_7)
  VAR_8 = VAR_5;

 VAR_8 = FUNC_5(VAR_6, VAR_8);

 if (VAR_8 & VAR_3)
  goto done;

 if (VAR_8 & VAR_4)
  FUNC_4(VAR_6);
 else
  FUNC_3(VAR_6);

done:
 FUNC_1(VAR_6, VAR_2);
}
