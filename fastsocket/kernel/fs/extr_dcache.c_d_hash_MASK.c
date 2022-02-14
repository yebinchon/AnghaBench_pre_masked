
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dentry {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct hlist_head* VAR_4 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(struct dentry *VAR_5,
     unsigned long VAR_6)
{
 VAR_6 += ((unsigned long) VAR_5 ^ VAR_2) / VAR_3;
 VAR_6 = VAR_6 ^ ((VAR_6 ^ VAR_2) >> VAR_0);
 return VAR_4 + (VAR_6 & VAR_1);
}
