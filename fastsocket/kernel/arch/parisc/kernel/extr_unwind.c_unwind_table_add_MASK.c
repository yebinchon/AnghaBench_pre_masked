
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_table_entry {int dummy; } ;
struct unwind_table {int list; } ;


 int VAR_0 ;
 struct unwind_table* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (struct unwind_table*,char const*,unsigned long,unsigned long,void*,void*) ;
 int FUNC_5 (struct unwind_table_entry*,struct unwind_table_entry*) ;
 int VAR_2 ;

struct unwind_table *
FUNC_6(const char *VAR_3, unsigned long VAR_4,
   unsigned long VAR_5,
                 void *VAR_6, void *VAR_7)
{
 struct unwind_table *VAR_8;
 unsigned long VAR_9;
 struct unwind_table_entry *VAR_10 = (struct unwind_table_entry *)VAR_6;
 struct unwind_table_entry *VAR_11 = (struct unwind_table_entry *)VAR_7;

 FUNC_5(VAR_10, VAR_11);

 VAR_8 = FUNC_0(sizeof(struct unwind_table), VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(&VAR_1, VAR_9);
 FUNC_1(&VAR_8->list, &VAR_2);
 FUNC_3(&VAR_1, VAR_9);

 return VAR_8;
}
