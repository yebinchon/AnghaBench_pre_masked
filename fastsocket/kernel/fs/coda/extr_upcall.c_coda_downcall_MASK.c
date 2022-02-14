
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct CodaFid {int dummy; } ;
struct TYPE_10__ {struct CodaFid NewFid; struct CodaFid OldFid; } ;
struct TYPE_9__ {struct CodaFid CodaFid; } ;
struct TYPE_8__ {struct CodaFid CodaFid; } ;
struct TYPE_7__ {struct CodaFid CodaFid; } ;
union outputArgs {TYPE_5__ coda_replace; TYPE_4__ coda_purgefid; TYPE_3__ coda_zapfile; TYPE_2__ coda_zapdir; } ;
struct super_block {TYPE_1__* s_root; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {struct inode* d_inode; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 struct inode* FUNC_1 (struct CodaFid*,struct super_block*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct CodaFid*,struct CodaFid*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct super_block*) ;

int FUNC_8(int VAR_3, union outputArgs * VAR_4, struct super_block *VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 struct CodaFid *VAR_7, *VAR_8;


 if ( !VAR_5 || !VAR_5->s_root)
  return 0;

 switch (VAR_3) {
 case 133:
  FUNC_0(VAR_5);
  FUNC_7(VAR_5);
  if (VAR_5->s_root->d_inode)
      FUNC_2(VAR_5->s_root->d_inode, VAR_0);
  break;

 case 131:
  FUNC_0(VAR_5);
  break;

 case 129:
  VAR_7 = &VAR_4->coda_zapdir.CodaFid;
  VAR_6 = FUNC_1(VAR_7, VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_6, VAR_1);
   FUNC_2(VAR_6, VAR_2);
  }
  break;

 case 128:
  VAR_7 = &VAR_4->coda_zapfile.CodaFid;
  VAR_6 = FUNC_1(VAR_7, VAR_5);
  if (VAR_6)
   FUNC_2(VAR_6, VAR_2);
  break;

 case 132:
  VAR_7 = &VAR_4->coda_purgefid.CodaFid;
  VAR_6 = FUNC_1(VAR_7, VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_6, VAR_1);


   FUNC_2(VAR_6, VAR_1);
   FUNC_5(VAR_6);

  }
  break;

 case 130:
  VAR_7 = &VAR_4->coda_replace.OldFid;
  VAR_8 = &VAR_4->coda_replace.NewFid;
  VAR_6 = FUNC_1(VAR_7, VAR_5);
  if (VAR_6)
   FUNC_4(VAR_6, VAR_7, VAR_8);
  break;
 }

 if (VAR_6)
  FUNC_6(VAR_6);

 return 0;
}
