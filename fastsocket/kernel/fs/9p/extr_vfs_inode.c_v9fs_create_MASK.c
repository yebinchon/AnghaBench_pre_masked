
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_fid {int i_sb; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int name; } ;
struct dentry {int * d_op; int d_parent; TYPE_1__ d_name; } ;


 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct dentry*,struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*,char*,int ,int ,char*) ;
 struct p9_fid* FUNC_7 (struct p9_fid*,int,char**,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct dentry*,struct p9_fid*) ;
 struct p9_fid* FUNC_9 (int ) ;
 struct p9_fid* FUNC_10 (struct v9fs_session_info*,struct p9_fid*,int ) ;

__attribute__((used)) static struct p9_fid *
FUNC_11(struct v9fs_session_info *VAR_3, struct inode *VAR_4,
  struct dentry *VAR_5, char *VAR_6, u32 VAR_7, u8 VAR_8)
{
 int VAR_9;
 char *VAR_10;
 struct p9_fid *VAR_11, *VAR_12, *VAR_13;
 struct inode *VAR_14;

 FUNC_2(VAR_0, "name %s\n", VAR_5->d_name.name);

 VAR_9 = 0;
 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_10 = (char *) VAR_5->d_name.name;
 VAR_11 = FUNC_9(VAR_5->d_parent);
 if (FUNC_1(VAR_11)) {
  VAR_9 = FUNC_3(VAR_11);
  FUNC_2(VAR_0, "fid clone failed %d\n", VAR_9);
  VAR_11 = ((void*)0);
  goto error;
 }


 VAR_12 = FUNC_7(VAR_11, 0, ((void*)0), 1);
 if (FUNC_1(VAR_12)) {
  VAR_9 = FUNC_3(VAR_12);
  FUNC_2(VAR_0, "p9_client_walk failed %d\n", VAR_9);
  VAR_12 = ((void*)0);
  goto error;
 }

 VAR_9 = FUNC_6(VAR_12, VAR_10, VAR_7, VAR_8, VAR_6);
 if (VAR_9 < 0) {
  FUNC_2(VAR_0, "p9_client_fcreate failed %d\n", VAR_9);
  goto error;
 }


 VAR_13 = FUNC_7(VAR_11, 1, &VAR_10, 0);
 if (FUNC_1(VAR_13)) {
  VAR_9 = FUNC_3(VAR_13);
  FUNC_2(VAR_0, "p9_client_walk failed %d\n", VAR_9);
  VAR_13 = ((void*)0);
  goto error;
 } else
  VAR_11 = ((void*)0);


 VAR_14 = FUNC_10(VAR_3, VAR_13, VAR_4->i_sb);
 if (FUNC_1(VAR_14)) {
  VAR_9 = FUNC_3(VAR_14);
  FUNC_2(VAR_0, "inode creation failed %d\n", VAR_9);
  goto error;
 }

 if (VAR_3->cache)
  VAR_5->d_op = &VAR_1;
 else
  VAR_5->d_op = &VAR_2;

 FUNC_4(VAR_5, VAR_14);
 VAR_9 = FUNC_8(VAR_5, VAR_13);
 if (VAR_9 < 0)
  goto error;

 return VAR_12;

error:
 if (VAR_11)
  FUNC_5(VAR_11);

 if (VAR_12)
  FUNC_5(VAR_12);

 if (VAR_13)
  FUNC_5(VAR_13);

 return FUNC_0(VAR_9);
}
