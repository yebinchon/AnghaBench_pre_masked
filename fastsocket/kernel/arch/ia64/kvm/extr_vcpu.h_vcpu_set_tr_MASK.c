
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct thash_data {void* rid; void* vadr; void* itir; void* page_flags; } ;



__attribute__((used)) static inline void FUNC_0(struct thash_data *VAR_0, u64 VAR_1, u64 VAR_2,
  u64 VAR_3, u64 VAR_4)
{
 VAR_0->page_flags = VAR_1;
 VAR_0->itir = VAR_2;
 VAR_0->vadr = VAR_3;
 VAR_0->rid = VAR_4;
}
