
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(int VAR_2)
{
 return &VAR_1[VAR_2 & (VAR_0 - 1)];
}
