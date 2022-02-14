
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int elp; int elp_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wl1251*,int ) ;
 int FUNC_8 (struct wl1251*,int ,int ) ;

int FUNC_9(struct wl1251 *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 u32 VAR_10;

 FUNC_0(&VAR_7->elp_work);

 if (!VAR_7->elp)
  return 0;

 FUNC_5(VAR_0, "waking up chip from elp");

 VAR_9 = VAR_6;
 VAR_8 = VAR_6 + FUNC_2(VAR_5);

 FUNC_8(VAR_7, VAR_4, VAR_1);

 VAR_10 = FUNC_7(VAR_7, VAR_4);





 while (!(VAR_10 & VAR_2)) {
  if (FUNC_4(VAR_6, VAR_8)) {
   FUNC_6("elp wakeup timeout");
   return -VAR_3;
  }
  FUNC_3(1);
  VAR_10 = FUNC_7(VAR_7, VAR_4);
 }

 FUNC_5(VAR_0, "wakeup time: %u ms",
       FUNC_1(VAR_6 - VAR_9));

 VAR_7->elp = 0;

 return 0;
}
