
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {int * conf_data; scalar_t__ conf_len; int * gneq; int * vdsneq; int * sneq; int * ned; } ;
struct dasd_device {scalar_t__ private; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1;

 VAR_1 = (struct dasd_eckd_private *) VAR_0->private;
 FUNC_0(VAR_0);
 VAR_1->ned = ((void*)0);
 VAR_1->sneq = ((void*)0);
 VAR_1->vdsneq = ((void*)0);
 VAR_1->gneq = ((void*)0);
 VAR_1->conf_len = 0;
 FUNC_1(VAR_1->conf_data);
 VAR_1->conf_data = ((void*)0);
}
