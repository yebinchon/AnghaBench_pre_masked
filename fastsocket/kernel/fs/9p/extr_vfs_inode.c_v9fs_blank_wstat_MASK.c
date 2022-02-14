
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; int version; int type; } ;
struct p9_wstat {int * extension; int n_muid; int n_gid; int n_uid; int * muid; int * gid; int * uid; int * name; int length; int mtime; int atime; int mode; TYPE_1__ qid; int dev; int type; } ;



__attribute__((used)) static void
FUNC_0(struct p9_wstat *VAR_0)
{
 VAR_0->type = ~0;
 VAR_0->dev = ~0;
 VAR_0->qid.type = ~0;
 VAR_0->qid.version = ~0;
 *((long long *)&VAR_0->qid.path) = ~0;
 VAR_0->mode = ~0;
 VAR_0->atime = ~0;
 VAR_0->mtime = ~0;
 VAR_0->length = ~0;
 VAR_0->name = ((void*)0);
 VAR_0->uid = ((void*)0);
 VAR_0->gid = ((void*)0);
 VAR_0->muid = ((void*)0);
 VAR_0->n_uid = ~0;
 VAR_0->n_gid = ~0;
 VAR_0->n_muid = ~0;
 VAR_0->extension = ((void*)0);
}
