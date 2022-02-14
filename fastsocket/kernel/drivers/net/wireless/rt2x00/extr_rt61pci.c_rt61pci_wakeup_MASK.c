
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00lib_conf {int * conf; } ;
struct rt2x00_dev {TYPE_1__* hw; } ;
struct TYPE_2__ {int conf; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,struct rt2x00lib_conf*,int ) ;

__attribute__((used)) static void FUNC_1(struct rt2x00_dev *VAR_1)
{
 struct rt2x00lib_conf VAR_2 = { .conf = &VAR_1->hw->conf };

 FUNC_0(VAR_1, &VAR_2, VAR_0);
}
