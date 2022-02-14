
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pool_info; } ;
struct TYPE_3__ {int ref_count; } ;


 TYPE_2__* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (struct atm_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct atm_dev *VAR_0,int VAR_1)
{
 if (!(--FUNC_0(VAR_0)->pool_info[VAR_1].ref_count))
  FUNC_1(VAR_0,VAR_1);
}
