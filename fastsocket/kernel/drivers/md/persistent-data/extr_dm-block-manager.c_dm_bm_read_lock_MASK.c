
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int dummy; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block_manager {int bufio; } ;
struct dm_block {int dummy; } ;
struct buffer_aux {int lock; scalar_t__ write_locked; } ;
typedef int dm_block_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dm_block_manager*,int ,struct buffer_aux*,struct dm_block_validator*) ;
 struct buffer_aux* FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ,struct dm_buffer**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct dm_block*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct dm_block_manager *VAR_0, dm_block_t VAR_1,
      struct dm_block_validator *VAR_2,
      struct dm_block **VAR_3)
{
 struct buffer_aux *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_0->bufio, VAR_1, (struct dm_buffer **) VAR_3);
 if (FUNC_10(FUNC_0(VAR_5)))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_5(FUNC_9(*VAR_3));
 VAR_6 = FUNC_2(&VAR_4->lock);
 if (FUNC_10(VAR_6)) {
  FUNC_7(FUNC_9(*VAR_3));
  FUNC_8(VAR_1, VAR_6);
  return VAR_6;
 }

 VAR_4->write_locked = 0;

 VAR_6 = FUNC_4(VAR_0, FUNC_9(*VAR_3), VAR_4, VAR_2);
 if (FUNC_10(VAR_6)) {
  FUNC_3(&VAR_4->lock);
  FUNC_7(FUNC_9(*VAR_3));
  return VAR_6;
 }

 return 0;
}
