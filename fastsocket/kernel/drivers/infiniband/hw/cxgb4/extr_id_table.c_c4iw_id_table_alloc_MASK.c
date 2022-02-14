
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c4iw_id_table {int start; int flags; int last; int max; int table; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct c4iw_id_table *VAR_5, u32 VAR_6, u32 VAR_7,
   u32 VAR_8, u32 VAR_9)
{
 int VAR_10;

 VAR_5->start = VAR_6;
 VAR_5->flags = VAR_9;
 if (VAR_9 & VAR_1)
  VAR_5->last = FUNC_3() % VAR_4;
 else
  VAR_5->last = 0;
 VAR_5->max = VAR_7;
 FUNC_5(&VAR_5->lock);
 VAR_5->table = FUNC_2(FUNC_0(VAR_7) * sizeof(long),
    VAR_3);
 if (!VAR_5->table)
  return -VAR_2;

 FUNC_1(VAR_5->table, VAR_7);
 if (!(VAR_5->flags & VAR_0))
  for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
   FUNC_4(VAR_10, VAR_5->table);

 return 0;
}
