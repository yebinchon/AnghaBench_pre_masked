
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef scalar_t__ dev_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 dev_t VAR_2 = FUNC_0(FUNC_1(VAR_1)->index);


 if (VAR_2)
  FUNC_2(&VAR_0, VAR_2 + 1);
}
