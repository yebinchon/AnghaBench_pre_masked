
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct nfsmount {scalar_t__ nm_vers; } ;
struct nfsbuf {int nb_error; int nb_flags; int nb_np; } ;
typedef int nfsnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsmount* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct nfsbuf*,int ) ;
 int FUNC_3 (int ,struct nfsbuf*,int ) ;
 scalar_t__ FUNC_4 (struct nfsmount*) ;

int
FUNC_5(struct nfsbuf *VAR_4, vfs_context_t VAR_5)
{
 nfsnode_t VAR_6 = VAR_4->nb_np;
 struct nfsmount *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = 0;

 if (FUNC_4(VAR_7))
  return (VAR_0);

 if (VAR_7->nm_vers < VAR_3)
  VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_5);
 else
  VAR_8 = FUNC_3(VAR_6, VAR_4, VAR_5);

 if (VAR_8 && (VAR_8 != VAR_2)) {
  FUNC_1(VAR_4->nb_flags, VAR_1);
  VAR_4->nb_error = VAR_8;
 }
 return (VAR_8);
}
