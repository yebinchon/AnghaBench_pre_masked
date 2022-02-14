
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_ctl {scalar_t__ idx; scalar_t__ type; scalar_t__ proto; scalar_t__ addrlen; int addr; } ;


 int FUNC_0 (int *,int *,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct pohmelfs_ctl *VAR_0, struct pohmelfs_ctl *VAR_1)
{
 if (VAR_0->idx == VAR_1->idx && VAR_0->type == VAR_1->type &&
   VAR_0->proto == VAR_1->proto &&
   VAR_0->addrlen == VAR_1->addrlen &&
   !FUNC_0(&VAR_0->addr, &VAR_1->addr, VAR_1->addrlen))
  return 1;

 return 0;
}
