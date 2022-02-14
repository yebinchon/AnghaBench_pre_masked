
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dummy; } ;
struct nfs4_state_owner {int dummy; } ;
struct nfs4_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_open_context*) ;
 int FUNC_1 (struct nfs_open_context*,struct nfs4_state*) ;
 struct nfs_open_context* FUNC_2 (struct nfs4_state*) ;
 int FUNC_3 (struct nfs_open_context*) ;

__attribute__((used)) static int FUNC_4(struct nfs4_state_owner *VAR_1, struct nfs4_state *VAR_2)
{
 struct nfs_open_context *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_3))
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 FUNC_3(VAR_3);
 return VAR_4;
}
