
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int caps; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct nfs_server *VAR_2)
{
 VAR_2->flags &= ~VAR_1;
 VAR_2->caps &= ~VAR_0;
}
