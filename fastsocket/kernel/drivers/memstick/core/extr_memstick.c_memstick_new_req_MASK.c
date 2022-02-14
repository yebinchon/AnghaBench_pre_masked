
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memstick_host {int (* request ) (struct memstick_host*) ;TYPE_1__* card; int retries; } ;
struct TYPE_2__ {int mrq_complete; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct memstick_host*) ;

void FUNC_2(struct memstick_host *VAR_1)
{
 if (VAR_1->card) {
  VAR_1->retries = VAR_0;
  FUNC_0(VAR_1->card->mrq_complete);
  VAR_1->request(VAR_1);
 }
}
