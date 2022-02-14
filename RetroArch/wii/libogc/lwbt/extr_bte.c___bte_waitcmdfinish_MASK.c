
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bt_state {int last_err; int hci_cmdq; int hci_cmddone; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline s32 FUNC_3(struct bt_state *VAR_1)
{
 u32 VAR_2;
 s32 VAR_3;

 if(!VAR_1) return VAR_0;

 FUNC_1(VAR_2);
 while(!VAR_1->hci_cmddone)
  FUNC_0(VAR_1->hci_cmdq);
 VAR_3 = VAR_1->last_err;
 FUNC_2(VAR_2);

 return VAR_3;
}
