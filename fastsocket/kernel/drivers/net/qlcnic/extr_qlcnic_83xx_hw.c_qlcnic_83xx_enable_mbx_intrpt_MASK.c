
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int num_msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

void FUNC_2(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->flags & VAR_2)
  VAR_4 = VAR_0 | ((VAR_3->ahw->num_msix - 1) << 8);
 else
  VAR_4 = VAR_0;

 FUNC_0(VAR_3->ahw, VAR_1, VAR_4);
 FUNC_1(VAR_3);
}
