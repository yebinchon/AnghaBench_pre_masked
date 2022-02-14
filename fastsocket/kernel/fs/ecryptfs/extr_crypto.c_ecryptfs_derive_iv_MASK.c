
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {char* root_iv; int iv_bytes; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct ecryptfs_crypt_stat*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(char *VAR_5, struct ecryptfs_crypt_stat *VAR_6,
         loff_t VAR_7)
{
 int VAR_8 = 0;
 char VAR_9[VAR_3];
 char VAR_10[VAR_0 + 16];

 if (FUNC_6(VAR_4 > 0)) {
  FUNC_2(VAR_1, "root iv:\n");
  FUNC_1(VAR_6->root_iv, VAR_6->iv_bytes);
 }




 FUNC_3(VAR_10, VAR_6->root_iv, VAR_6->iv_bytes);
 FUNC_4((VAR_10 + VAR_6->iv_bytes), 0, 16);
 FUNC_5((VAR_10 + VAR_6->iv_bytes), 16, "%lld", VAR_7);
 if (FUNC_6(VAR_4 > 0)) {
  FUNC_2(VAR_1, "source:\n");
  FUNC_1(VAR_10, (VAR_6->iv_bytes + 16));
 }
 VAR_8 = FUNC_0(VAR_9, VAR_6, VAR_10,
        (VAR_6->iv_bytes + 16));
 if (VAR_8) {
  FUNC_2(VAR_2, "Error attempting to compute "
    "MD5 while generating IV for a page\n");
  goto out;
 }
 FUNC_3(VAR_5, VAR_9, VAR_6->iv_bytes);
 if (FUNC_6(VAR_4 > 0)) {
  FUNC_2(VAR_1, "derived iv:\n");
  FUNC_1(VAR_5, VAR_6->iv_bytes);
 }
out:
 return VAR_8;
}
