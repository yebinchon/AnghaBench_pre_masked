
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int type; } ;
struct inode {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int delegation; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct nfs_delegation* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, fmode_t VAR_1)
{
 struct nfs_delegation *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_2(FUNC_0(VAR_0)->delegation);
 if (VAR_2 == ((void*)0) || (VAR_2->type & VAR_1) == VAR_1) {
  FUNC_4();
  return;
 }
 FUNC_4();
 FUNC_1(VAR_0);
}
