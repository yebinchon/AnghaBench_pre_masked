
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_rcvr {unsigned int chans; struct cmd_rcvr* next; int link; TYPE_1__* user; } ;
typedef TYPE_1__* ipmi_user_t ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_6__ {int cmd_rcvrs_mutex; } ;
struct TYPE_5__ {TYPE_2__* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_rcvr* FUNC_0 (TYPE_2__*,unsigned char,unsigned char,int) ;
 int FUNC_1 (struct cmd_rcvr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

int FUNC_6(ipmi_user_t VAR_2,
       unsigned char VAR_3,
       unsigned char VAR_4,
       unsigned int VAR_5)
{
 ipmi_smi_t VAR_6 = VAR_2->intf;
 struct cmd_rcvr *VAR_7;
 struct cmd_rcvr *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = -VAR_0;

 FUNC_3(&VAR_6->cmd_rcvrs_mutex);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (((1 << VAR_9) & VAR_5) == 0)
   continue;
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, VAR_9);
  if (VAR_7 == ((void*)0))
   continue;
  if (VAR_7->user == VAR_2) {
   VAR_10 = 0;
   VAR_7->chans &= ~VAR_5;
   if (VAR_7->chans == 0) {
    FUNC_2(&VAR_7->link);
    VAR_7->next = VAR_8;
    VAR_8 = VAR_7;
   }
  }
 }
 FUNC_4(&VAR_6->cmd_rcvrs_mutex);
 FUNC_5();
 while (VAR_8) {
  VAR_7 = VAR_8;
  VAR_8 = VAR_7->next;
  FUNC_1(VAR_7);
 }
 return VAR_10;
}
