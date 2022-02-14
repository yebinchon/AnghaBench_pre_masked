
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int inode; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct file_lock {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*,int,struct file_lock*) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct nfs4_state *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 struct nfs4_exception VAR_3 = { };
 int VAR_4;

 do {
  VAR_4 = FUNC_2(FUNC_0(VAR_0->inode),
    FUNC_1(VAR_0, VAR_1, VAR_2),
    &VAR_3);
 } while (VAR_3.retry);
 return VAR_4;
}
