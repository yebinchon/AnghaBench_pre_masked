
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int last_state; int priv; int (* notify ) (int ,int ) ;TYPE_1__* recv; int (* update_state ) (TYPE_2__*) ;} ;
typedef TYPE_2__ smd_channel_t ;
struct TYPE_5__ {unsigned int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(smd_channel_t *VAR_5)
{
 unsigned long VAR_6;
 unsigned VAR_7;

 FUNC_1(&VAR_4, VAR_6);
 VAR_5->update_state(VAR_5);
 VAR_7 = VAR_5->recv->state;
 if (VAR_7 != VAR_5->last_state) {
  VAR_5->last_state = VAR_7;
  if (VAR_7 == VAR_3)
   VAR_5->notify(VAR_5->priv, VAR_2);
  else
   VAR_5->notify(VAR_5->priv, VAR_0);
 }
 VAR_5->notify(VAR_5->priv, VAR_1);
 FUNC_0();
 FUNC_2(&VAR_4, VAR_6);
}
