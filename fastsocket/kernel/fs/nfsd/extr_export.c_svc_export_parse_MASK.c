
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_5__ {scalar_t__ expiry_time; int flags; } ;
struct svc_export {char* ex_pathname; int ex_flags; int ex_anon_uid; int ex_anon_gid; int ex_fsid; char* ex_uuid; TYPE_3__ ex_path; int ex_fslocs; TYPE_1__ h; struct auth_domain* ex_client; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int dummy; } ;
struct TYPE_6__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct auth_domain* FUNC_0 (char*) ;
 int FUNC_1 (struct auth_domain*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int*,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct svc_export*) ;
 int FUNC_6 (char**,char*,int *) ;
 scalar_t__ FUNC_7 (char**) ;
 int FUNC_8 (char**,int*) ;
 int FUNC_9 (char*,int ,TYPE_3__*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ,int ) ;
 char* FUNC_12 (char*,int,int ) ;
 char* FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (char**,char*,int ) ;
 int FUNC_17 (char**,char*,struct svc_export*) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 struct svc_export* FUNC_20 (struct svc_export*) ;
 struct svc_export* FUNC_21 (struct svc_export*,struct svc_export*) ;

__attribute__((used)) static int FUNC_22(struct cache_detail *VAR_6, char *VAR_7, int VAR_8)
{

 char *VAR_9;
 int VAR_10;
 int VAR_11;
 struct auth_domain *VAR_12 = ((void*)0);
 struct svc_export VAR_13 = {}, *VAR_14;
 int VAR_15;

 if (VAR_7[VAR_8-1] != '\n')
  return -VAR_1;
 VAR_7[VAR_8-1] = 0;
 FUNC_4("svc_export_parse: '%s'\n", VAR_7);

 VAR_9 = FUNC_11(VAR_5, VAR_4);
 if (!VAR_9)
  return -VAR_3;


 VAR_11 = -VAR_1;
 VAR_10 = FUNC_16(&VAR_7, VAR_9, VAR_5);
 if (VAR_10 <= 0)
  goto out;

 VAR_11 = -VAR_2;
 VAR_12 = FUNC_0(VAR_9);
 if (!VAR_12)
  goto out;


 VAR_11 = -VAR_1;
 if ((VAR_10 = FUNC_16(&VAR_7, VAR_9, VAR_5)) <= 0)
  goto out1;

 VAR_11 = FUNC_9(VAR_9, 0, &VAR_13.ex_path);
 if (VAR_11)
  goto out1;

 VAR_13.ex_client = VAR_12;

 VAR_11 = -VAR_3;
 VAR_13.ex_pathname = FUNC_13(VAR_9, VAR_4);
 if (!VAR_13.ex_pathname)
  goto out2;


 VAR_11 = -VAR_1;
 VAR_13.h.expiry_time = FUNC_7(&VAR_7);
 if (VAR_13.h.expiry_time == 0)
  goto out3;


 VAR_11 = FUNC_8(&VAR_7, &VAR_15);
 if (VAR_11 == -VAR_2) {
  VAR_11 = 0;
  FUNC_18(VAR_0, &VAR_13.h.flags);
 } else {
  if (VAR_11 || VAR_15 < 0)
   goto out3;
  VAR_13.ex_flags= VAR_15;


  VAR_11 = FUNC_8(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_anon_uid= VAR_15;


  VAR_11 = FUNC_8(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_anon_gid= VAR_15;


  VAR_11 = FUNC_8(&VAR_7, &VAR_15);
  if (VAR_11)
   goto out3;
  VAR_13.ex_fsid = VAR_15;

  while ((VAR_10 = FUNC_16(&VAR_7, VAR_9, VAR_5)) > 0) {
   if (FUNC_19(VAR_9, "fsloc") == 0)
    VAR_11 = FUNC_6(&VAR_7, VAR_9, &VAR_13.ex_fslocs);
   else if (FUNC_19(VAR_9, "uuid") == 0) {

    VAR_10 = FUNC_16(&VAR_7, VAR_9, VAR_5);
    if (VAR_10 != 16)
     VAR_11 = -VAR_1;
    else {
     VAR_13.ex_uuid =
      FUNC_12(VAR_9, 16, VAR_4);
     if (VAR_13.ex_uuid == ((void*)0))
      VAR_11 = -VAR_3;
    }
   } else if (FUNC_19(VAR_9, "secinfo") == 0)
    VAR_11 = FUNC_17(&VAR_7, VAR_9, &VAR_13);
   else




    break;
   if (VAR_11)
    goto out4;
  }

  VAR_11 = FUNC_3(VAR_13.ex_path.dentry->d_inode, &VAR_13.ex_flags,
       VAR_13.ex_uuid);
  if (VAR_11)
   goto out4;
 }

 VAR_14 = FUNC_20(&VAR_13);
 if (VAR_14)
  VAR_14 = FUNC_21(&VAR_13, VAR_14);
 else
  VAR_11 = -VAR_3;
 FUNC_2();
 if (VAR_14 == ((void*)0))
  VAR_11 = -VAR_3;
 else
  FUNC_5(VAR_14);
out4:
 FUNC_14(&VAR_13.ex_fslocs);
 FUNC_10(VAR_13.ex_uuid);
out3:
 FUNC_10(VAR_13.ex_pathname);
out2:
 FUNC_15(&VAR_13.ex_path);
out1:
 FUNC_1(VAR_12);
out:
 FUNC_10(VAR_9);
 if (VAR_11)
  FUNC_4("svc_export_parse: err %d\n", VAR_11);
 return VAR_11;
}
