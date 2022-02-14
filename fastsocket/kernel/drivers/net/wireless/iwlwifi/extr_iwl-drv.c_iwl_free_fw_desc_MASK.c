
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_drv {int dummy; } ;
struct fw_desc {scalar_t__ len; int * data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct iwl_drv *VAR_0, struct fw_desc *VAR_1)
{
 FUNC_0(VAR_1->data);
 VAR_1->data = ((void*)0);
 VAR_1->len = 0;
}
