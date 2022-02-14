
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int dummy; } ;
struct dentry {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct ecryptfs_crypt_stat*,struct dentry*,size_t*,size_t) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,struct ecryptfs_crypt_stat*,size_t*) ;
 int FUNC_3 (char*,struct ecryptfs_crypt_stat*,size_t*) ;
 int FUNC_4 (char*,size_t*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, size_t VAR_3,
           size_t *VAR_4,
           struct ecryptfs_crypt_stat *VAR_5,
           struct dentry *VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 VAR_9 = VAR_0;
 FUNC_4((VAR_2 + VAR_9), &VAR_8);
 VAR_9 += VAR_8;
 FUNC_3((VAR_2 + VAR_9), VAR_5, &VAR_8);
 VAR_9 += VAR_8;
 FUNC_2((VAR_2 + VAR_9), VAR_5,
           &VAR_8);
 VAR_9 += VAR_8;
 VAR_7 = FUNC_0((VAR_2 + VAR_9), VAR_5,
           VAR_6, &VAR_8,
           VAR_3 - VAR_9);
 if (VAR_7)
  FUNC_1(VAR_1, "Error generating key packet "
    "set; rc = [%d]\n", VAR_7);
 if (VAR_4) {
  VAR_9 += VAR_8;
  *VAR_4 = VAR_9;
 }
 return VAR_7;
}
