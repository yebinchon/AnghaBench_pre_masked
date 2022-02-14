
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dentry {int d_hash; int d_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hlist_head*) ;

__attribute__((used)) static void FUNC_1(struct dentry * VAR_1, struct hlist_head *VAR_2)
{

  VAR_1->d_flags &= ~VAR_0;
  FUNC_0(&VAR_1->d_hash, VAR_2);
}
