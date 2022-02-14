
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct inode {int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int access; } ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_cred*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct rpc_cred*) ;


 int VAR_8 ;

 int VAR_9 ;
 int FUNC_4 (int ,char*,int ,int ,int,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int,int *) ;
 int FUNC_7 (struct inode*,struct rpc_cred*,int) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int ,struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_12 () ;

int FUNC_13(struct inode *VAR_10, int VAR_11)
{
 struct rpc_cred *VAR_12;
 int VAR_13 = 0;

 FUNC_8(VAR_10, VAR_6);

 if ((VAR_11 & (VAR_4 | VAR_5 | VAR_2)) == 0)
  goto out;

 if (VAR_11 & VAR_1)
  goto force_lookup;

 switch (VAR_10->i_mode & VAR_8) {
  case 129:
   goto out;
  case 128:

   if (FUNC_10(VAR_10, VAR_7)
     && (VAR_11 & VAR_3)
     && !(VAR_11 & VAR_2))
    goto out;
   break;
  case 130:




   if ((VAR_11 & VAR_5) && !(VAR_11 & VAR_4))
    goto out;
 }

force_lookup:
 if (!FUNC_1(VAR_10)->access)
  goto out_notsup;

 VAR_12 = FUNC_12();
 if (!FUNC_0(VAR_12)) {
  VAR_13 = FUNC_7(VAR_10, VAR_12, VAR_11);
  FUNC_11(VAR_12);
 } else
  VAR_13 = FUNC_3(VAR_12);
out:
 if (!VAR_13 && (VAR_11 & VAR_2) && !FUNC_5(VAR_10))
  VAR_13 = -VAR_0;

 FUNC_4(VAR_9, "NFS: permission(%s/%ld), mask=0x%x, res=%d\n",
  VAR_10->i_sb->s_id, VAR_10->i_ino, VAR_11, VAR_13);
 return VAR_13;
out_notsup:
 VAR_13 = FUNC_9(FUNC_2(VAR_10), VAR_10);
 if (VAR_13 == 0)
  VAR_13 = FUNC_6(VAR_10, VAR_11, ((void*)0));
 goto out;
}
