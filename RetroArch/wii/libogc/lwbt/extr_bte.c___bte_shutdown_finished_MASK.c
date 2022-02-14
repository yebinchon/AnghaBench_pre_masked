
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct hci_pcb {int dummy; } ;
struct bt_state {scalar_t__ hci_inited; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bt_state*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static err_t FUNC_3(void *VAR_3,struct hci_pcb *VAR_4,u8_t VAR_5,u8_t VAR_6,u8_t VAR_7)
{
 err_t VAR_8;
 struct bt_state *VAR_9 = (struct bt_state*)VAR_3;

 if(VAR_9==((void*)0)) return VAR_1;

 VAR_9->hci_inited = 0;
 FUNC_1(((void*)0));
 if(VAR_7==VAR_2)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;

 FUNC_2();
 return FUNC_0(VAR_9,VAR_8);
}
