
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; unsigned long i_ino; } ;
struct coda_vattr {int dummy; } ;
struct coda_inode_info {scalar_t__ c_mapcount; } ;
struct CodaFid {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 struct coda_inode_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 unsigned long FUNC_2 (struct CodaFid*) ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_4 (struct super_block*,unsigned long,int ,int ,struct CodaFid*) ;
 int FUNC_5 (struct inode*) ;

struct inode * FUNC_6(struct super_block * VAR_4, struct CodaFid * VAR_5,
    struct coda_vattr * VAR_6)
{
 struct inode *VAR_7;
 struct coda_inode_info *VAR_8;
 unsigned long VAR_9 = FUNC_2(VAR_5);

 VAR_7 = FUNC_4(VAR_4, VAR_9, VAR_3, VAR_2, VAR_5);

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 if (VAR_7->i_state & VAR_1) {
  VAR_8 = FUNC_1(VAR_7);

  VAR_7->i_ino = VAR_9;
  VAR_8->c_mapcount = 0;
  FUNC_5(VAR_7);
 }


 FUNC_3(VAR_7, VAR_6);
 return VAR_7;
}
