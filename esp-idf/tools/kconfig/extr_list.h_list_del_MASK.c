
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct list_head*,struct list_head*) ;

__attribute__((used)) static inline void FUNC_1(struct list_head *VAR_2)
{
 FUNC_0(VAR_2->prev, VAR_2->next);
 VAR_2->next = (struct list_head*)VAR_0;
 VAR_2->prev = (struct list_head*)VAR_1;
}
