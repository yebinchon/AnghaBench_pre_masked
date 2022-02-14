
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_3__ {scalar_t__ pci_base0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->ahw, VAR_0);
 FUNC_2(1, VAR_2->ahw->pci_base0 + VAR_3);
 FUNC_1(VAR_2->ahw, VAR_1, 0);
}
