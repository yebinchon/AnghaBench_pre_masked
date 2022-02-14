
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* l1l2 ) (TYPE_3__*,int,int *) ;} ;
struct TYPE_6__ {TYPE_3__ ifc; } ;
struct TYPE_7__ {scalar_t__ l1_activated; TYPE_1__ d_if; } ;
typedef TYPE_2__ hfcusb_data ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,int,int *) ;

__attribute__((used)) static void
FUNC_3(hfcusb_data * VAR_4)
{
 VAR_4->d_if.ifc.l1l2(&VAR_4->d_if.ifc, VAR_3 | VAR_1,
      ((void*)0));

 FUNC_0(VAR_0,
     "HFC-S USB: PH_DEACTIVATE | INDICATION sent (T4 expire)");

 VAR_4->l1_activated = 0;
 FUNC_1(VAR_4, VAR_2);
}
