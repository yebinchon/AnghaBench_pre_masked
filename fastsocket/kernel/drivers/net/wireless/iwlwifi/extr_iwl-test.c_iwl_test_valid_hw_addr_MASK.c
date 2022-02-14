
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_test {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* valid_hw_addr ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_test *VAR_0, u32 VAR_1)
{
 return VAR_0->ops->valid_hw_addr(VAR_1);
}
