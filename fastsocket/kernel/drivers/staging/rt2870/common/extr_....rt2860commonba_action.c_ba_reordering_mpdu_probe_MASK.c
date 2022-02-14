
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reordering_mpdu {int dummy; } ;
struct reordering_list {struct reordering_mpdu* next; } ;


 int FUNC_0 (struct reordering_list*) ;

__attribute__((used)) static inline struct reordering_mpdu *FUNC_1(struct reordering_list *VAR_0)
 {
 FUNC_0(VAR_0);

  return(VAR_0->next);
 }
