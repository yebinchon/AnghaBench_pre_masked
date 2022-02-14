
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_resource_entry {int std_inq_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_2 (struct ipr_resource_entry*) ;

__attribute__((used)) static inline int FUNC_3(struct ipr_resource_entry *VAR_0)
{
 if (FUNC_1(VAR_0) ||
     (FUNC_2(VAR_0) && FUNC_0(VAR_0->std_inq_data)))
  return 1;
 else
  return 0;
}
