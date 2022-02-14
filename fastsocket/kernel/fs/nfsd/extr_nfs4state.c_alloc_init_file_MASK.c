
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_had_conflict; int fi_hash; int fi_access; int fi_fds; scalar_t__ fi_id; int fi_inode; int fi_delegations; int fi_stateids; int fi_ref; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 unsigned int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct inode*) ;
 struct nfs4_file* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline struct nfs4_file *
FUNC_9(struct inode *VAR_5)
{
 struct nfs4_file *VAR_6;
 unsigned int VAR_7 = FUNC_2(VAR_5);

 VAR_6 = FUNC_4(VAR_3, VAR_0);
 if (VAR_6) {
  FUNC_1(&VAR_6->fi_ref, 1);
  FUNC_0(&VAR_6->fi_hash);
  FUNC_0(&VAR_6->fi_stateids);
  FUNC_0(&VAR_6->fi_delegations);
  VAR_6->fi_inode = FUNC_3(VAR_5);
  VAR_6->fi_id = VAR_1++;
  VAR_6->fi_had_conflict = 0;
  FUNC_6(VAR_6->fi_fds, 0, sizeof(VAR_6->fi_fds));
  FUNC_6(VAR_6->fi_access, 0, sizeof(VAR_6->fi_access));
  FUNC_7(&VAR_4);
  FUNC_5(&VAR_6->fi_hash, &VAR_2[VAR_7]);
  FUNC_8(&VAR_4);
  return VAR_6;
 }
 return ((void*)0);
}
