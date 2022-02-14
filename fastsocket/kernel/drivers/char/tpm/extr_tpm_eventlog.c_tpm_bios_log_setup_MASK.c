
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry** FUNC_1 (int,int ) ;
 struct dentry* FUNC_2 (char*,int *) ;
 struct dentry* FUNC_3 (char*,int,struct dentry*,int *,int *) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;

struct dentry **FUNC_5(char *VAR_5)
{
 struct dentry **VAR_6 = ((void*)0), *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = FUNC_2(VAR_5, ((void*)0));
 if (FUNC_0(VAR_7))
  goto out;

 VAR_8 =
     FUNC_3("binary_bios_measurements",
       VAR_2 | VAR_1, VAR_7, ((void*)0),
       &VAR_4);
 if (FUNC_0(VAR_8))
  goto out_tpm;

 VAR_9 =
     FUNC_3("ascii_bios_measurements",
       VAR_2 | VAR_1, VAR_7, ((void*)0),
       &VAR_3);
 if (FUNC_0(VAR_9))
  goto out_bin;

 VAR_6 = FUNC_1(3 * sizeof(struct dentry *), VAR_0);
 if (!VAR_6)
  goto out_ascii;

 VAR_6[0] = VAR_9;
 VAR_6[1] = VAR_8;
 VAR_6[2] = VAR_7;

 return VAR_6;

out_ascii:
 FUNC_4(VAR_9);
out_bin:
 FUNC_4(VAR_8);
out_tpm:
 FUNC_4(VAR_7);
out:
 return ((void*)0);
}
