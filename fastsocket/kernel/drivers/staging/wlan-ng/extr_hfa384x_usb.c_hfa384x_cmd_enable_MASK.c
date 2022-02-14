
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int hfa384x_t ;
struct TYPE_3__ {int cmd; scalar_t__ parm2; scalar_t__ parm1; scalar_t__ parm0; } ;
typedef TYPE_1__ hfa384x_metacmd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

int FUNC_3(hfa384x_t *VAR_1, u16 VAR_2)
{
 int VAR_3 = 0;
 hfa384x_metacmd_t VAR_4;

 VAR_4.cmd = FUNC_0(VAR_0) |
     FUNC_1(VAR_2);
 VAR_4.parm0 = 0;
 VAR_4.parm1 = 0;
 VAR_4.parm2 = 0;

 VAR_3 = FUNC_2(VAR_1, &VAR_4);

 return VAR_3;
}
