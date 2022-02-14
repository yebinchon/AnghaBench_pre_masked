
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rsv {int handle_timeout_work; TYPE_1__* rc; } ;
struct TYPE_2__ {int rsv_workq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct uwb_rsv *VAR_1 = (struct uwb_rsv *)VAR_0;

 FUNC_0(VAR_1->rc->rsv_workq, &VAR_1->handle_timeout_work);
}
