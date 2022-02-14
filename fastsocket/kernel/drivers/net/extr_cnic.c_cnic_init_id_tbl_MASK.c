
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct cnic_id_tbl {int table; int lock; void* next; void* max; void* start; } ;


 int FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct cnic_id_tbl *VAR_2, u32 VAR_3, u32 VAR_4,
       u32 VAR_5)
{
 VAR_2->start = VAR_4;
 VAR_2->max = VAR_3;
 VAR_2->next = VAR_5;
 FUNC_2(&VAR_2->lock);
 VAR_2->table = FUNC_1(FUNC_0(VAR_3, 32) * 4, VAR_1);
 if (!VAR_2->table)
  return -VAR_0;

 return 0;
}
