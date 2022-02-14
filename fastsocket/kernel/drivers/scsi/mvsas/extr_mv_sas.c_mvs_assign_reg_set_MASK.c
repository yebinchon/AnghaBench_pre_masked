
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mvs_info {int dummy; } ;
struct mvs_device {scalar_t__ taskfileset; } ;
struct TYPE_2__ {int (* assign_reg_set ) (struct mvs_info*,scalar_t__*) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mvs_info*,scalar_t__*) ;

__attribute__((used)) static inline u8 FUNC_1(struct mvs_info *VAR_2,
    struct mvs_device *VAR_3)
{
 if (VAR_3->taskfileset != VAR_1)
  return 0;
 return VAR_0->assign_reg_set(VAR_2, &VAR_3->taskfileset);
}
