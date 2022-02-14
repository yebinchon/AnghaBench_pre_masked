
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct coda_vattr {int dummy; } ;
struct CodaFid {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,struct CodaFid*,struct coda_vattr*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*,struct CodaFid*,struct coda_vattr*) ;

int FUNC_5(struct inode **VAR_0, struct CodaFid *VAR_1, struct super_block *VAR_2)
{
        struct coda_vattr VAR_3;
        int VAR_4;


 VAR_4 = FUNC_4(VAR_2, VAR_1, &VAR_3);
 if ( VAR_4 ) {
     *VAR_0 = ((void*)0);
     return VAR_4;
 }

 *VAR_0 = FUNC_2(VAR_2, VAR_1, &VAR_3);
 if ( FUNC_0(*VAR_0) ) {
  FUNC_3("coda_cnode_make: coda_iget failed\n");
                return FUNC_1(*VAR_0);
        }
 return 0;
}
