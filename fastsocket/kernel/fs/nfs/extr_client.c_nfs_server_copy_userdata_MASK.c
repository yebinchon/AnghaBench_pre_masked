
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int options; int caps; int acdirmax; int acdirmin; int acregmax; int acregmin; int wsize; int rsize; int flags; } ;



__attribute__((used)) static void FUNC_0(struct nfs_server *VAR_0, struct nfs_server *VAR_1)
{
 VAR_0->flags = VAR_1->flags;
 VAR_0->rsize = VAR_1->rsize;
 VAR_0->wsize = VAR_1->wsize;
 VAR_0->acregmin = VAR_1->acregmin;
 VAR_0->acregmax = VAR_1->acregmax;
 VAR_0->acdirmin = VAR_1->acdirmin;
 VAR_0->acdirmax = VAR_1->acdirmax;
 VAR_0->caps = VAR_1->caps;
 VAR_0->options = VAR_1->options;
}
