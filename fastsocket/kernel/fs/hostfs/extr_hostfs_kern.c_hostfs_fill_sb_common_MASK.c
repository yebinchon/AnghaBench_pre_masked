
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int * s_root; int s_maxbytes; int * s_op; int s_magic; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {char* host_filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int * FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 struct inode* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct inode*) ;
 int VAR_4 ;
 int FUNC_7 (struct inode*,int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (scalar_t__,int ) ;
 char* VAR_5 ;
 int FUNC_11 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_6, void *VAR_7, int VAR_8)
{
 struct inode *VAR_9;
 char *VAR_10, *VAR_11 = VAR_7;
 int VAR_12;

 VAR_6->s_blocksize = 1024;
 VAR_6->s_blocksize_bits = 10;
 VAR_6->s_magic = VAR_2;
 VAR_6->s_op = &VAR_4;
 VAR_6->s_maxbytes = VAR_3;


 if (VAR_11 == ((void*)0))
  VAR_11 = "";

 VAR_12 = -VAR_0;
 VAR_10 = FUNC_10(FUNC_12(VAR_5) + 1
     + FUNC_12(VAR_11) + 1, VAR_1);
 if (VAR_10 == ((void*)0))
  goto out;

 FUNC_11(VAR_10, "%s/%s", VAR_5, VAR_11);

 VAR_9 = FUNC_5(VAR_6);
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_2(VAR_9);
  goto out_free;
 }

 VAR_12 = FUNC_7(VAR_9, ((void*)0));
 if (VAR_12)
  goto out_put;

 FUNC_0(VAR_9)->host_filename = VAR_10;




 VAR_10 = ((void*)0);

 VAR_12 = -VAR_0;
 VAR_6->s_root = FUNC_3(VAR_9);
 if (VAR_6->s_root == ((void*)0))
  goto out_put;

 VAR_12 = FUNC_6(VAR_9);
 if (VAR_12) {

  FUNC_4(VAR_6->s_root);
  VAR_6->s_root = ((void*)0);
  goto out;
 }

 return 0;

out_put:
 FUNC_8(VAR_9);
out_free:
 FUNC_9(VAR_10);
out:
 return VAR_12;
}
