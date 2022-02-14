
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {void (* write_prph ) (struct iwl_trans*,int ,int ) ;} ;


 void FUNC_0 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1,
     u32 VAR_2)
{
 return VAR_0->ops->write_prph(VAR_0, VAR_1, VAR_2);
}
