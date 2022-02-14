
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v9fs_session_info {int flags; char* uname; int aname; int clnt; int uid; } ;
struct p9_fid {int dummy; } ;
struct TYPE_2__ {scalar_t__ name; } ;
struct dentry {TYPE_1__ d_name; struct dentry* d_parent; int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_fid* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_3 () ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 struct p9_fid* FUNC_7 (int ,int *,char*,int ,int ) ;
 struct p9_fid* FUNC_8 (struct p9_fid*,int,char**,int) ;
 scalar_t__ FUNC_9 (struct v9fs_session_info*) ;
 int FUNC_10 (struct dentry*,struct p9_fid*) ;
 struct p9_fid* FUNC_11 (struct dentry*,int ,int) ;
 struct v9fs_session_info* FUNC_12 (int ) ;

struct p9_fid *FUNC_13(struct dentry *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;
 struct p9_fid *VAR_13;
 struct dentry *VAR_14, *VAR_15;
 struct v9fs_session_info *VAR_16;
 char **VAR_17, *VAR_18;

 VAR_16 = FUNC_12(VAR_5->d_inode);
 VAR_11 = VAR_16->flags & VAR_4;
 switch (VAR_11) {
 case 129:
 case 128:
  VAR_12 = FUNC_3();
  VAR_10 = 0;
  break;

 case 130:
  VAR_12 = VAR_16->uid;
  VAR_10 = 1;
  break;

 default:
  VAR_12 = ~0;
  VAR_10 = 0;
  break;
 }

 VAR_13 = FUNC_11(VAR_5, VAR_12, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_15 = VAR_5->d_parent;
 VAR_13 = FUNC_11(VAR_15, VAR_12, VAR_10);
 if (!VAR_13) {
  VAR_7 = 0;
  for (VAR_15 = VAR_5; !FUNC_2(VAR_15); VAR_15 = VAR_15->d_parent)
   VAR_7++;

  VAR_13 = FUNC_11(VAR_15, VAR_12, VAR_10);
  if (!VAR_13) {
   if (VAR_11 == 129)
    return FUNC_0(-VAR_1);

   if (FUNC_9(VAR_16))
    VAR_18 = ((void*)0);
   else
    VAR_18 = VAR_16->uname;

   VAR_13 = FUNC_7(VAR_16->clnt, ((void*)0), VAR_18, VAR_12,
    VAR_16->aname);

   if (FUNC_1(VAR_13))
    return VAR_13;

   FUNC_10(VAR_15, VAR_13);
  }
 } else
  VAR_7 = 1;

 if (VAR_15 == VAR_5)
  return VAR_13;

 VAR_17 = FUNC_5(sizeof(char *) * VAR_7, VAR_2);
 if (!VAR_17)
  return FUNC_0(-VAR_0);

 for (VAR_14 = VAR_5, VAR_6 = (VAR_7-1); VAR_6 >= 0; VAR_6--, VAR_14 = VAR_14->d_parent)
  VAR_17[VAR_6] = (char *) VAR_14->d_name.name;

 VAR_9 = 1;
 VAR_6 = 0;
 while (VAR_6 < VAR_7) {
  VAR_8 = FUNC_6(VAR_7 - VAR_6, VAR_3);
  VAR_13 = FUNC_8(VAR_13, VAR_8, &VAR_17[VAR_6], VAR_9);
  if (FUNC_1(VAR_13)) {
   FUNC_4(VAR_17);
   return VAR_13;
  }

  VAR_6 += VAR_8;
  VAR_9 = 0;
 }

 FUNC_4(VAR_17);
 FUNC_10(VAR_5, VAR_13);
 return VAR_13;
}
