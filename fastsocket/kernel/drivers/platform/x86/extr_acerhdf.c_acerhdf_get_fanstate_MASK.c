
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ chk_off; } ;
struct TYPE_4__ {TYPE_1__ cmd; int fanreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(int *VAR_4)
{
 u8 VAR_5;

 if (FUNC_0(VAR_3->fanreg, &VAR_5))
  return -VAR_2;

 if (VAR_5 != VAR_3->cmd.chk_off)
  *VAR_4 = VAR_0;
 else
  *VAR_4 = VAR_1;

 return 0;
}
