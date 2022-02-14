
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {scalar_t__ batch_data_dir; scalar_t__ current_write_count; int current_batch_expires; scalar_t__ new_batch; scalar_t__ changed_batch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct as_data *VAR_2)
{
 if (VAR_2->changed_batch || VAR_2->new_batch)
  return 0;

 if (VAR_2->batch_data_dir == VAR_0)

  return FUNC_0(VAR_1, VAR_2->current_batch_expires);

 return FUNC_0(VAR_1, VAR_2->current_batch_expires)
  || VAR_2->current_write_count == 0;
}
