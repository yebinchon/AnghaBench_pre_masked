
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_stateid {int st_access_bmap; struct nfs4_file* st_file; } ;
struct nfs4_file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs4_file*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct nfs4_stateid *VAR_0, u32 VAR_1)
{
 struct nfs4_file *VAR_2 = VAR_0->st_file;
 int VAR_3 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1, &VAR_0->st_access_bmap))
  return;
 FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_1, &VAR_0->st_access_bmap);
}
