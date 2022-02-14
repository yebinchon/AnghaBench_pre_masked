
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {struct hlist_head* stripe_hashtbl; } ;
struct hlist_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(struct r5conf *VAR_2, sector_t VAR_3)
{
 int VAR_4 = (VAR_3 >> VAR_1) & VAR_0;
 return &VAR_2->stripe_hashtbl[VAR_4];
}
