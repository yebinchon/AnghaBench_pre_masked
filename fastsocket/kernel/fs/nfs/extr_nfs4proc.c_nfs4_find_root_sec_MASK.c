
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_5, struct nfs_fh *VAR_6,
         struct nfs_fsinfo *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 rpc_authflavor_t VAR_11[VAR_3 + 2];

 VAR_9 = FUNC_0(&VAR_11[0]);
 VAR_11[VAR_9] = VAR_4;
 VAR_9 += 1;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_11[VAR_8]);
  if (VAR_10 == -VAR_2 || VAR_10 == -VAR_0)
   continue;
  break;
 }







 if (VAR_10 == -VAR_0)
  VAR_10 = -VAR_1;
 return VAR_10;
}
