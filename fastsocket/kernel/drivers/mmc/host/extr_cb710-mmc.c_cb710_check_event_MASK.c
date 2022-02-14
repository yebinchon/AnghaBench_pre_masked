
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cb710_slot*,int ) ;
 int FUNC_1 (struct cb710_slot*) ;
 int FUNC_2 (struct cb710_slot*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct cb710_slot *VAR_7, u8 VAR_8)
{
 u16 VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_5);

 if (VAR_9 & VAR_0) {

  FUNC_3(FUNC_1(VAR_7),
   "CHECK : ignoring bit 6 in status %04X\n", VAR_9);
  FUNC_2(VAR_7, VAR_2,
   VAR_0);
  VAR_9 &= ~VAR_0;
 }

 if (VAR_9 & VAR_4) {
  FUNC_3(FUNC_1(VAR_7),
   "CHECK : returning EIO on status %04X\n", VAR_9);
  FUNC_2(VAR_7, VAR_2, VAR_9 & 0xFF);
  FUNC_2(VAR_7, VAR_3,
   VAR_1);
  return -VAR_6;
 }


 if ((VAR_9 >> 8) & VAR_8) {
  FUNC_2(VAR_7, VAR_3, VAR_8);
  return 1;
 }

 return 0;
}
