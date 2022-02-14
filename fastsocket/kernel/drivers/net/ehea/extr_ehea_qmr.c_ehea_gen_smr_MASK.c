
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ehea_mr {struct ehea_adapter* adapter; int vaddr; int handle; } ;
struct ehea_adapter {int pd; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,struct ehea_mr*) ;

int FUNC_1(struct ehea_adapter *VAR_3, struct ehea_mr *VAR_4,
   struct ehea_mr *VAR_5)
{
 u64 VAR_6;

 VAR_6 = FUNC_0(VAR_3->handle, VAR_4->handle,
       VAR_4->vaddr, VAR_0,
       VAR_3->pd, VAR_5);
 if (VAR_6 != VAR_2)
  return -VAR_1;

 VAR_5->adapter = VAR_3;

 return 0;
}
