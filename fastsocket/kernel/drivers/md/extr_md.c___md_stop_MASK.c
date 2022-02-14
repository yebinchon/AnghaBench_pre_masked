
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int recovery; TYPE_1__* pers; int * to_remove; scalar_t__ ready; } ;
struct TYPE_2__ {int owner; scalar_t__ sync_request; int (* stop ) (struct mddev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*) ;

__attribute__((used)) static void FUNC_3(struct mddev *VAR_2)
{
 VAR_2->ready = 0;
 VAR_2->pers->stop(VAR_2);
 if (VAR_2->pers->sync_request && VAR_2->to_remove == ((void*)0))
  VAR_2->to_remove = &VAR_1;
 FUNC_1(VAR_2->pers->owner);
 VAR_2->pers = ((void*)0);
 FUNC_0(VAR_0, &VAR_2->recovery);
}
