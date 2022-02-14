
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memstick_request {int error; } ;
struct memstick_host {int retries; TYPE_1__* card; } ;
struct TYPE_2__ {int (* next_request ) (TYPE_1__*,struct memstick_request**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct memstick_request**) ;

int FUNC_1(struct memstick_host *VAR_2, struct memstick_request **VAR_3)
{
 int VAR_4 = -VAR_0;

 if ((*VAR_3) && (*VAR_3)->error && VAR_2->retries) {
  (*VAR_3)->error = VAR_4;
  VAR_2->retries--;
  return 0;
 }

 if (VAR_2->card && VAR_2->card->next_request)
  VAR_4 = VAR_2->card->next_request(VAR_2->card, VAR_3);

 if (!VAR_4)
  VAR_2->retries = VAR_1 > 1 ? VAR_1 - 1 : 1;
 else
  *VAR_3 = ((void*)0);

 return VAR_4;
}
