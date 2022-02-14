
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int max_fibre_devices; } ;
struct gid_list_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;

__attribute__((used)) static inline int
FUNC_1(struct qla_hw_data *VAR_0)
{
 if (FUNC_0(VAR_0))
  return sizeof(uint32_t) * 32;
 else
  return sizeof(struct gid_list_info) * VAR_0->max_fibre_devices;
}
