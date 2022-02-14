
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ehea_eqe {struct ehea_eqe* entry; } ;
struct ehea_adapter {TYPE_1__* neq; int handle; } ;
struct TYPE_2__ {int fw_handle; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct ehea_eqe*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ehea_adapter*,struct ehea_eqe*) ;
 struct ehea_eqe* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct ehea_adapter *VAR_4 = (struct ehea_adapter *)VAR_3;
 struct ehea_eqe *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_4(VAR_4->neq);
 FUNC_1("eqe=%p", VAR_5);

 while (VAR_5) {
  FUNC_1("*eqe=%lx", VAR_5->entry);
  FUNC_3(VAR_4, VAR_5->entry);
  VAR_5 = FUNC_4(VAR_4->neq);
  FUNC_1("next eqe=%p", VAR_5);
 }

 VAR_6 = FUNC_0(VAR_1, 1)
     | FUNC_0(VAR_0, 1)
     | FUNC_0(VAR_2, 1);

 FUNC_2(VAR_4->handle,
       VAR_4->neq->fw_handle, VAR_6);
}
