
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tempreg; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(int *VAR_2)
{
 u8 VAR_3;

 if (FUNC_0(VAR_1->tempreg, &VAR_3))
  return -VAR_0;

 *VAR_2 = VAR_3 * 1000;

 return 0;
}
