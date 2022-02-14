
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct ipz_queue {size_t queue_length; struct ipz_page** queue_pages; } ;
struct ipz_page {void* entries; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void *FUNC_0(struct ipz_queue *VAR_2, u64 VAR_3)
{
 struct ipz_page *VAR_4;
 if (VAR_3 >= VAR_2->queue_length)
  return ((void*)0);
 VAR_4 = (VAR_2->queue_pages)[VAR_3 >> VAR_0];
 return &VAR_4->entries[VAR_3 & (VAR_1 - 1)];
}
