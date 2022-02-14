
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int inode; } ;
struct nfs4_exception {scalar_t__ retry; struct nfs4_state* state; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*,int,struct file_lock*) ;
 int FUNC_2 (int ,int,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct nfs4_state *VAR_2, int VAR_3, struct file_lock *VAR_4)
{
 struct nfs4_exception VAR_5 = {
  .state = VAR_2,
 };
 int VAR_6;

 do {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_6 == -VAR_1)
   VAR_6 = -VAR_0;
  VAR_6 = FUNC_2(FUNC_0(VAR_2->inode),
    VAR_6, &VAR_5);
 } while (VAR_5.retry);
 return VAR_6;
}
