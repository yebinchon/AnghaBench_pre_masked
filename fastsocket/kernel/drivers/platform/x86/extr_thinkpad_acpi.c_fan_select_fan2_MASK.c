
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int second_fan; } ;


 scalar_t__ FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(void)
{
 u8 VAR_2;

 if (!VAR_1.second_fan)
  return 0;

 if (FUNC_0(VAR_0, &VAR_2) < 0)
  return 0;
 VAR_2 |= 0x01U;
 if (FUNC_1(VAR_0, VAR_2) < 0)
  return 0;

 return 1;
}
