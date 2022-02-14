
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

__attribute__((used)) static inline struct list_head *FUNC_2(struct list_head *VAR_0)
{
 if (!FUNC_1(VAR_0)) {
  struct list_head *VAR_1 = VAR_0->next;

  FUNC_0(VAR_1);
  return VAR_1;
 }

 return ((void*)0);
}
