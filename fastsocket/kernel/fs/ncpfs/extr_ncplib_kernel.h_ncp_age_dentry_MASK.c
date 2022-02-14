
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {scalar_t__ dentry_ttl; } ;
struct dentry {scalar_t__ d_time; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct ncp_server* VAR_1, struct dentry* VAR_2)
{
 VAR_2->d_time = VAR_0 - VAR_1->dentry_ttl;
}
