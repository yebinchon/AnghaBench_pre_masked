
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int complete; } ;
struct dm_exception {void* new_chunk; void* old_chunk; } ;
typedef void* chunk_t ;


 int VAR_0 ;
 struct dm_exception* FUNC_0 () ;
 int FUNC_1 (int *,struct dm_exception*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, chunk_t VAR_2, chunk_t VAR_3)
{
 struct dm_snapshot *VAR_4 = VAR_1;
 struct dm_exception *VAR_5;

 VAR_5 = FUNC_0();
 if (!VAR_5)
  return -VAR_0;

 VAR_5->old_chunk = VAR_2;


 VAR_5->new_chunk = VAR_3;

 FUNC_1(&VAR_4->complete, VAR_5);

 return 0;
}
