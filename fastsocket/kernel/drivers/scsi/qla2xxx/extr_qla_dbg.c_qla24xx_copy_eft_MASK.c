
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* fw_dump; int eft; } ;
struct TYPE_2__ {int eft_size; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void *
FUNC_2(struct qla_hw_data *VAR_0, void *VAR_1)
{
 if (!VAR_0->eft)
  return VAR_1;

 FUNC_0(VAR_1, VAR_0->eft, FUNC_1(VAR_0->fw_dump->eft_size));
 return VAR_1 + FUNC_1(VAR_0->fw_dump->eft_size);
}
