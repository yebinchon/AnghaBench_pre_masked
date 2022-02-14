
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smd_channel {unsigned int last_state; int priv; int (* notify ) (int ,int ) ;TYPE_2__* send; TYPE_1__* recv; int n; } ;
struct TYPE_4__ {int const state; } ;
struct TYPE_3__ {int tail; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,int const) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct smd_channel *VAR_2,
        unsigned VAR_3, unsigned VAR_4)
{
 VAR_2->last_state = VAR_4;

 FUNC_2("SMD: ch %d %s -> %s\n", VAR_2->n,
  FUNC_0(VAR_3), FUNC_0(VAR_4));

 switch (VAR_4) {
 case 129:
  VAR_2->recv->tail = 0;
 case 130:
  if (VAR_2->send->state != 130)
   FUNC_1(VAR_2->send, 130);
  VAR_2->notify(VAR_2->priv, VAR_1);
  break;
 case 131:
 case 128:

 default:
  VAR_2->notify(VAR_2->priv, VAR_0);
 }
}
