
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateid {int st_file; int st_access_bmap; } ;


 int FUNC_0 (int ,struct nfs4_stateid*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct nfs4_stateid *VAR_1)
{
 int VAR_2;

 if (VAR_1->st_access_bmap) {
  for (VAR_2 = 1; VAR_2 < 4; VAR_2++) {
   if (FUNC_4(VAR_2, &VAR_1->st_access_bmap))
    FUNC_2(VAR_1->st_file,
      FUNC_1(VAR_2));
  }
 }
 FUNC_3(VAR_1->st_file);
 FUNC_0(VAR_0, VAR_1);
}
