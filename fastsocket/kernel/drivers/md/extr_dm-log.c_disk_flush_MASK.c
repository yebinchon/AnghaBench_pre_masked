
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int flush_failed; int region_count; int log_dev_flush_failed; scalar_t__ touched_cleaned; scalar_t__ touched_dirtied; int clean_bits; int ti; } ;
struct dm_dirty_log {scalar_t__ (* flush_callback_fn ) (int ) ;struct log_c* context; } ;


 int VAR_0 ;
 int FUNC_0 (struct log_c*) ;
 int FUNC_1 (struct log_c*) ;
 int FUNC_2 (struct log_c*,int ,int) ;
 int FUNC_3 (struct log_c*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dm_dirty_log *VAR_1)
{
 int VAR_2, VAR_3;
 struct log_c *VAR_4 = VAR_1->context;


 if (!VAR_4->touched_cleaned && !VAR_4->touched_dirtied)
  return 0;

 if (VAR_4->touched_cleaned && VAR_1->flush_callback_fn &&
     VAR_1->flush_callback_fn(VAR_4->ti)) {






  VAR_4->flush_failed = 1;
  for (VAR_3 = 0; VAR_3 < VAR_4->region_count; VAR_3++)
   FUNC_2(VAR_4, VAR_4->clean_bits, VAR_3);
 }

 VAR_2 = FUNC_3(VAR_4, VAR_0);
 if (VAR_2)
  FUNC_0(VAR_4);
 else {
  if (VAR_4->touched_dirtied) {
   VAR_2 = FUNC_1(VAR_4);
   if (VAR_2) {
    VAR_4->log_dev_flush_failed = 1;
    FUNC_0(VAR_4);
   } else
    VAR_4->touched_dirtied = 0;
  }
  VAR_4->touched_cleaned = 0;
 }

 return VAR_2;
}
