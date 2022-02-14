
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hermes {TYPE_1__* ops; scalar_t__ eeprom_pda; } ;
typedef int __le16 ;
struct TYPE_2__ {int (* cmd_wait ) (struct hermes*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hermes*,int) ;
 int FUNC_2 (struct hermes*,int ) ;
 int FUNC_3 (struct hermes*,int ,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (struct hermes*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct hermes *VAR_3, __le16 *VAR_4, u32 VAR_5,
      u16 VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 u16 VAR_9 = VAR_6;
 __le16 *VAR_10 = VAR_4;

 if (VAR_3->eeprom_pda) {



  VAR_7 = VAR_3->ops->cmd_wait(VAR_3, VAR_2, 0, ((void*)0));
  if (VAR_7)
   return VAR_7;
 } else {



  VAR_4[0] = FUNC_0(VAR_6 - 2);

  VAR_4[1] = FUNC_0(0x0800);
  VAR_9 = VAR_6 - 4;
  VAR_10 = VAR_4 + 2;
 }


 VAR_7 = FUNC_1(VAR_3, 1);
 FUNC_5("AUX enable returned %d\n", VAR_7);
 if (VAR_7)
  return VAR_7;


 FUNC_2(VAR_3, VAR_5);
 FUNC_3(VAR_3, VAR_1, VAR_10, VAR_9 / 2);


 VAR_7 = FUNC_1(VAR_3, 0);
 FUNC_5("AUX disable returned %d\n", VAR_7);


 VAR_8 = FUNC_4(VAR_4[0]);
 FUNC_5("Actual PDA length %d, Max allowed %d\n",
   VAR_8, VAR_6);
 if (VAR_8 > VAR_6)
  return -VAR_0;

 return 0;
}
