
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {struct qfq_group** qif_groups; } ;
struct qfq_group {int dummy; } ;
typedef int pktsched_bitmap_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct qfq_group *
FUNC_2(struct qfq_if *VAR_1, pktsched_bitmap_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2) - 1;
 FUNC_0(VAR_3 >= 0 && VAR_3 <= VAR_0 &&
     VAR_1->qif_groups[VAR_3] != ((void*)0));
 return (VAR_1->qif_groups[VAR_3]);
}
