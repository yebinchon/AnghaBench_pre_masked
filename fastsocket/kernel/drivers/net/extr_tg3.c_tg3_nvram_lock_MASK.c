
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ nvram_lock_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_6)
{
 if (FUNC_0(VAR_6, VAR_1)) {
  int VAR_7;

  if (VAR_6->nvram_lock_cnt == 0) {
   FUNC_2(VAR_2, VAR_5);
   for (VAR_7 = 0; VAR_7 < 8000; VAR_7++) {
    if (FUNC_1(VAR_2) & VAR_3)
     break;
    FUNC_3(20);
   }
   if (VAR_7 == 8000) {
    FUNC_2(VAR_2, VAR_4);
    return -VAR_0;
   }
  }
  VAR_6->nvram_lock_cnt++;
 }
 return 0;
}
