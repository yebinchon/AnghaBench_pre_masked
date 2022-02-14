
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bt_state {int hci_cmddone; int hci_cmdq; int usrdata; int (* cb ) (int ,int ) ;int last_err; } ;
typedef int s32 ;
typedef int err_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline s32 FUNC_4(struct bt_state *VAR_1,err_t VAR_2)
{
 u32 VAR_3;

 if(!VAR_1) return VAR_0;

 FUNC_1(VAR_3);
 VAR_1->last_err = VAR_2;
 VAR_1->hci_cmddone = 1;
 if(VAR_1->cb!=((void*)0))
  VAR_1->cb(VAR_2,VAR_1->usrdata);
 else
  FUNC_0(VAR_1->hci_cmdq);
 FUNC_2(VAR_3);

 return VAR_2;
}
