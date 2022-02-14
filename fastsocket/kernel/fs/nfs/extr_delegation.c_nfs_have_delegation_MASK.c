
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int type; int flags; } ;
struct inode {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int delegation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct inode *VAR_3, fmode_t VAR_4)
{
 struct nfs_delegation *VAR_5;
 int VAR_6 = 0;

 VAR_4 &= VAR_0|VAR_1;
 FUNC_3();
 VAR_5 = FUNC_2(FUNC_0(VAR_3)->delegation);
 if (VAR_5 != ((void*)0) && (VAR_5->type & VAR_4) == VAR_4 &&
     !FUNC_5(VAR_2, &VAR_5->flags)) {
  FUNC_1(VAR_5);
  VAR_6 = 1;
 }
 FUNC_4();
 return VAR_6;
}
