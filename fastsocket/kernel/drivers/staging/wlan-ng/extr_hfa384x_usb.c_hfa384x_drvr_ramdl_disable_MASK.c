
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dlstate; } ;
typedef TYPE_1__ hfa384x_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(hfa384x_t *VAR_4)
{

 if (VAR_4->dlstate != VAR_2)
  return -VAR_0;

 FUNC_1("ramdl_disable()\n");



 FUNC_0(VAR_4, VAR_3, 0, 0, 0);
 VAR_4->dlstate = VAR_1;

 return 0;
}
