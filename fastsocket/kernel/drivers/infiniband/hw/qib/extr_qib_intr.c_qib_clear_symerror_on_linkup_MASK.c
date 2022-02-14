
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_symbol_error_counter; } ;
struct qib_pportdata {int lflags; TYPE_2__* dd; TYPE_1__ ibport_data; } ;
struct TYPE_4__ {int (* f_portcntr ) (struct qib_pportdata*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;

void FUNC_1(unsigned long VAR_2)
{
 struct qib_pportdata *VAR_3 = (struct qib_pportdata *)VAR_2;

 if (VAR_3->lflags & VAR_0)
  return;

 VAR_3->ibport_data.z_symbol_error_counter =
  VAR_3->dd->f_portcntr(VAR_3, VAR_1);
}
