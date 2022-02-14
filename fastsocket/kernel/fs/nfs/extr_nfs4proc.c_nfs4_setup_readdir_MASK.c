
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nfs4_readdir_arg {int count; int cookie; char verifier; int pgbase; int * pages; } ;
struct dentry {TYPE_1__* d_parent; int d_inode; } ;
typedef char __be32 ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 char* FUNC_7 (char*,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_8(u64 VAR_5, __be32 *VAR_6, struct dentry *VAR_7,
  struct nfs4_readdir_arg *VAR_8)
{
 __be32 *VAR_9, *VAR_10;

 FUNC_0(VAR_8->count < 80);
 if (VAR_5 > 2) {
  VAR_8->cookie = VAR_5;
  FUNC_5(&VAR_8->verifier, VAR_6, sizeof(VAR_8->verifier));
  return;
 }

 VAR_8->cookie = 0;
 FUNC_6(&VAR_8->verifier, 0, sizeof(VAR_8->verifier));
 if (VAR_5 == 2)
  return;
 VAR_9 = VAR_10 = FUNC_3(*VAR_8->pages, VAR_1);

 if (VAR_5 == 0) {
  *VAR_10++ = VAR_2;
  *VAR_10++ = VAR_4;
  *VAR_10++ = VAR_2;
  *VAR_10++ = VAR_2;
  FUNC_5(VAR_10, ".\0\0\0", 4);
  VAR_10++;
  *VAR_10++ = VAR_2;
  *VAR_10++ = FUNC_2(VAR_0);
  *VAR_10++ = FUNC_2(8);
  VAR_10 = FUNC_7(VAR_10, FUNC_1(VAR_7->d_inode));
 }

 *VAR_10++ = VAR_2;
 *VAR_10++ = VAR_4;
 *VAR_10++ = VAR_3;
 *VAR_10++ = VAR_3;
 FUNC_5(VAR_10, "..\0\0", 4);
 VAR_10++;
 *VAR_10++ = VAR_2;
 *VAR_10++ = FUNC_2(VAR_0);
 *VAR_10++ = FUNC_2(8);
 VAR_10 = FUNC_7(VAR_10, FUNC_1(VAR_7->d_parent->d_inode));

 VAR_8->pgbase = (char *)VAR_10 - (char *)VAR_9;
 VAR_8->count -= VAR_8->pgbase;
 FUNC_4(VAR_9, VAR_1);
}
