
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_hw {TYPE_1__* func; } ;
typedef int s32 ;
struct TYPE_2__ {int (* init_hw ) (struct pch_gbe_hw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pch_gbe_hw*) ;

inline s32 FUNC_2(struct pch_gbe_hw *VAR_1)
{
 if (!VAR_1->func->init_hw) {
  FUNC_0("ERROR: configuration\n");
  return -VAR_0;
 }
 return VAR_1->func->init_hw(VAR_1);
}
