
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_4__ {TYPE_1__* aic; } ;
struct TYPE_3__ {int nr_dispatched; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*,int ) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_2, struct request *VAR_3)
{
 FUNC_3(FUNC_2(VAR_3) != VAR_1);
 FUNC_1(VAR_3, VAR_0);
 if (FUNC_0(VAR_3) && FUNC_0(VAR_3)->aic)
  FUNC_4(&FUNC_0(VAR_3)->aic->nr_dispatched);
}
