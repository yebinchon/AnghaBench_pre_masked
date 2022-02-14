
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_id_tbl {int max; int next; int lock; scalar_t__ start; int table; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u32 FUNC_5(struct cnic_id_tbl *VAR_0)
{
 u32 VAR_1;

 FUNC_3(&VAR_0->lock);
 VAR_1 = FUNC_1(VAR_0->table, VAR_0->max, VAR_0->next);
 if (VAR_1 >= VAR_0->max) {
  VAR_1 = -1;
  if (VAR_0->next != 0) {
   VAR_1 = FUNC_0(VAR_0->table, VAR_0->next);
   if (VAR_1 >= VAR_0->next)
    VAR_1 = -1;
  }
 }

 if (VAR_1 < VAR_0->max) {
  FUNC_2(VAR_1, VAR_0->table);
  VAR_0->next = (VAR_1 + 1) & (VAR_0->max - 1);
  VAR_1 += VAR_0->start;
 }

 FUNC_4(&VAR_0->lock);

 return VAR_1;
}
