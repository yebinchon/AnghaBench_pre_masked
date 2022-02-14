
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int dummy; } ;
struct dm_block_validator {int (* check ) (struct dm_block_validator*,struct dm_block*,int ) ;char* name; } ;
struct dm_block_manager {int bufio; } ;
struct dm_block {int dummy; } ;
struct buffer_aux {struct dm_block_validator* validator; } ;


 int FUNC_0 (char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dm_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dm_block_validator*,struct dm_block*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dm_block_manager *VAR_1,
     struct dm_buffer *VAR_2,
     struct buffer_aux *VAR_3,
     struct dm_block_validator *VAR_4)
{
 if (FUNC_4(!VAR_3->validator)) {
  int VAR_5;
  if (!VAR_4)
   return 0;
  VAR_5 = VAR_4->check(VAR_4, (struct dm_block *) VAR_2, FUNC_2(VAR_1->bufio));
  if (FUNC_4(VAR_5)) {
   FUNC_0("%s validator check failed for block %llu", VAR_4->name,
        (unsigned long long) FUNC_1(VAR_2));
   return VAR_5;
  }
  VAR_3->validator = VAR_4;
 } else {
  if (FUNC_4(VAR_3->validator != VAR_4)) {
   FUNC_0("validator mismatch (old=%s vs new=%s) for block %llu",
        VAR_3->validator->name, VAR_4 ? VAR_4->name : "NULL",
        (unsigned long long) FUNC_1(VAR_2));
   return -VAR_0;
  }
 }

 return 0;
}
