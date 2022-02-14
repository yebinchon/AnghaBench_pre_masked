
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qlcnic_adapter {int flags; TYPE_2__* msix_entries; TYPE_1__* ahw; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {size_t num_msix; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct qlcnic_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct qlcnic_adapter *VAR_1)
{
 u32 VAR_2;

 if (!(VAR_1->flags & VAR_0))
  FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 if (VAR_1->flags & VAR_0)
  VAR_2 = VAR_1->ahw->num_msix - 1;
 else
  VAR_2 = 0;

 FUNC_1(20);
 FUNC_4(VAR_1->msix_entries[VAR_2].vector);
 FUNC_0(VAR_1->msix_entries[VAR_2].vector, VAR_1);
}
