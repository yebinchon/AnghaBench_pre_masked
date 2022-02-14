
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateowner {int so_time; int so_close_lru; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct nfs4_stateowner*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct nfs4_stateowner *VAR_1)
{
 FUNC_0("NFSD: move_to_close_lru nfs4_stateowner %p\n", VAR_1);

 FUNC_2(&VAR_1->so_close_lru, &VAR_0);
 VAR_1->so_time = FUNC_1();
}
