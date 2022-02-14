
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pstore {int dummy; } ;
struct disk_exception {int new_chunk; int old_chunk; } ;
struct core_exception {void* new_chunk; void* old_chunk; } ;


 struct disk_exception* FUNC_0 (struct pstore*,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pstore *VAR_0,
      uint32_t VAR_1, struct core_exception *VAR_2)
{
 struct disk_exception *VAR_3 = FUNC_0(VAR_0, VAR_1);


 VAR_2->old_chunk = FUNC_1(VAR_3->old_chunk);
 VAR_2->new_chunk = FUNC_1(VAR_3->new_chunk);
}
