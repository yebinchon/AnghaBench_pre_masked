
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int (* request ) (int *) ;} ;
struct TYPE_7__ {int handle; } ;
struct TYPE_6__ {int Rc; scalar_t__ Req; } ;
struct TYPE_8__ {TYPE_2__ info; TYPE_1__ e; } ;
struct TYPE_9__ {TYPE_3__ didd_notify; } ;
typedef TYPE_4__ IDI_SYNC_REQ ;
typedef int ENTITY ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 IDI_SYNC_REQ VAR_3;

 FUNC_0();

 VAR_3.didd_notify.e.Req = 0;
 VAR_3.didd_notify.e.Rc = VAR_1;
 VAR_3.didd_notify.info.handle = VAR_2;
 VAR_0.request((ENTITY *) & VAR_3);
}
