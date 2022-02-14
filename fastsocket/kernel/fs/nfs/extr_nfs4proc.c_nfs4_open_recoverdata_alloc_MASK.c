
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dentry; } ;
struct nfs4_state {int count; int owner; } ;
struct nfs4_opendata {struct nfs4_state* state; } ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;


 int VAR_0 ;
 struct nfs4_opendata* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct nfs4_opendata* FUNC_2 (int ,int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static struct nfs4_opendata *FUNC_3(struct nfs_open_context *VAR_2,
  struct nfs4_state *VAR_3, enum open_claim_type4 VAR_4)
{
 struct nfs4_opendata *VAR_5;

 VAR_5 = FUNC_2(VAR_2->dentry, VAR_3->owner, 0, 0,
   ((void*)0), VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_5->state = VAR_3;
 FUNC_1(&VAR_3->count);
 return VAR_5;
}
