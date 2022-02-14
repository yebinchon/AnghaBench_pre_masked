
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {scalar_t__ cred; scalar_t__ state; } ;



__attribute__((used)) static bool FUNC_0(const struct nfs_open_context *VAR_0,
  const struct nfs_open_context *VAR_1)
{
 return VAR_0->cred == VAR_1->cred && VAR_0->state == VAR_1->state;
}
