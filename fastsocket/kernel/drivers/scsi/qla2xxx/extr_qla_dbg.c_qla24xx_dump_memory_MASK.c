
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int fw_memory_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*,int,void*,int,void**) ;

__attribute__((used)) static int
FUNC_1(struct qla_hw_data *VAR_1, uint32_t *VAR_2,
    uint32_t VAR_3, void **VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_1, 0x20000, VAR_2, VAR_3 / 4, VAR_4);
 if (VAR_5 != VAR_0)
  return VAR_5;


 return FUNC_0(VAR_1, 0x100000, *VAR_4,
     VAR_1->fw_memory_size - 0x100000 + 1, VAR_4);
}
