
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {TYPE_1__* hw; int cap_flags; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct rt2x00_dev *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->cap_flags))
  FUNC_1(VAR_1->hw->wiphy);
}
