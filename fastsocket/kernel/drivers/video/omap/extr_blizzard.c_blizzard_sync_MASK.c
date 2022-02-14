
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct completion {int dummy; } ;
struct TYPE_2__ {struct completion* sync; } ;
struct blizzard_request {int entry; TYPE_1__ par; int * complete; int handler; } ;


 int FUNC_0 (int ) ;
 struct blizzard_request* FUNC_1 () ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct completion*) ;

__attribute__((used)) static void FUNC_6(void)
{
 FUNC_0(VAR_0);
 struct blizzard_request *VAR_2;
 struct completion VAR_3;

 VAR_2 = FUNC_1();

 VAR_2->handler = VAR_1;
 VAR_2->complete = ((void*)0);
 FUNC_2(&VAR_3);
 VAR_2->par.sync = &VAR_3;

 FUNC_3(&VAR_2->entry, &VAR_0);
 FUNC_4(&VAR_0);

 FUNC_5(&VAR_3);
}
