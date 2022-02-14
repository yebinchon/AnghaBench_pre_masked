
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ word_size; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

s32 FUNC_5(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6 = VAR_4->nvm.word_size + 1;
 s32 VAR_7 = 0;


 while (VAR_7 < VAR_6) {
  VAR_5 = FUNC_2(VAR_3);
  if (!(VAR_5 & VAR_1))
   break;

  FUNC_4(50, 100);
  VAR_7++;
 }

 if (VAR_7 == VAR_6) {
  FUNC_1("Driver can't access device - SMBI bit is set.\n");
  return -VAR_0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = FUNC_2(VAR_3);
  FUNC_3(VAR_3, VAR_5 | VAR_2);


  if (FUNC_2(VAR_3) & VAR_2)
   break;

  FUNC_4(50, 100);
 }

 if (VAR_7 == VAR_6) {

  FUNC_0(VAR_4);
  FUNC_1("Driver can't access the NVM\n");
  return -VAR_0;
 }

 return 0;
}
