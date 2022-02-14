
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cb710_slot*,int ) ;
 int FUNC_2 (struct cb710_slot*,int ) ;
 int FUNC_3 (struct cb710_slot*) ;
 int FUNC_4 (struct cb710_slot*) ;
 int FUNC_5 (int ,char*,unsigned int,int,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cb710_slot *VAR_4, uint8_t VAR_5)
{
 unsigned VAR_6 = 500000;
 int VAR_7 = 0;






 while (FUNC_2(VAR_4, VAR_1) & VAR_5) {
  if (!--VAR_6) {
   FUNC_0(FUNC_4(VAR_4),
    VAR_0);
   VAR_7 = -VAR_3;
   break;
  }
  FUNC_6(1);
 }
 return 0;
}
