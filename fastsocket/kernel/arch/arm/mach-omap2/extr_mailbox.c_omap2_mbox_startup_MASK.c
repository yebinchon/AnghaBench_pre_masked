
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (struct omap_mbox*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct omap_mbox *VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13;

 VAR_10 = FUNC_2(((void*)0), "mailboxes_ick");
 if (FUNC_0(VAR_10)) {
  FUNC_7("Can't get mailboxes_ick\n");
  return -VAR_1;
 }
 FUNC_1(VAR_10);

 FUNC_4(VAR_8, VAR_4);
 VAR_13 = VAR_9 + FUNC_5(20);
 do {
  VAR_12 = FUNC_3(VAR_5);
  if (VAR_12 & VAR_6)
   break;
 } while (!FUNC_9(VAR_9, VAR_13));

 if (!(VAR_12 & VAR_6)) {
  FUNC_7("Can't take mmu out of reset\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_3(VAR_3);
 FUNC_8("omap mailbox rev %d.%d\n", (VAR_12 & 0xf0) >> 4, (VAR_12 & 0x0f));

 VAR_12 = VAR_7 | VAR_0;
 FUNC_4(VAR_12, VAR_4);

 FUNC_6(VAR_11, VAR_2);

 return 0;
}
