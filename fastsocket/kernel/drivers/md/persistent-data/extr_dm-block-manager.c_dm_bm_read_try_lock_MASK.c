
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


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dm_block_manager*,int ,struct buffer_aux*,struct dm_block_validator*) ;
 void* FUNC_5 (int ,int ,struct dm_buffer**) ;
 struct buffer_aux* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct dm_block*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct dm_block_manager *VAR_1,
   dm_block_t VAR_2, struct dm_block_validator *VAR_3,
   struct dm_block **VAR_4)
{
 struct buffer_aux *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_1->bufio, VAR_2, (struct dm_buffer **) VAR_4);
 if (FUNC_10(FUNC_0(VAR_6)))
  return FUNC_1(VAR_6);
 if (FUNC_10(!VAR_6))
  return -VAR_0;

 VAR_5 = FUNC_6(FUNC_9(*VAR_4));
 VAR_7 = FUNC_2(&VAR_5->lock);
 if (VAR_7 < 0) {
  FUNC_7(FUNC_9(*VAR_4));
  FUNC_8(VAR_2, VAR_7);
  return VAR_7;
 }
 VAR_5->write_locked = 0;

 VAR_7 = FUNC_4(VAR_1, FUNC_9(*VAR_4), VAR_5, VAR_3);
 if (FUNC_10(VAR_7)) {
  FUNC_3(&VAR_5->lock);
  FUNC_7(FUNC_9(*VAR_4));
  return VAR_7;
 }

 return 0;
}
