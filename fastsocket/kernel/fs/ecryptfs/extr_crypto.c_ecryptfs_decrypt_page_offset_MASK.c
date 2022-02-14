
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct ecryptfs_crypt_stat {int dummy; } ;


 int FUNC_0 (struct ecryptfs_crypt_stat*,struct scatterlist*,struct scatterlist*,int,unsigned char*) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,struct page*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct ecryptfs_crypt_stat *VAR_0,
        struct page *VAR_1, int VAR_2,
        struct page *VAR_3, int VAR_4, int VAR_5,
        unsigned char *VAR_6)
{
 struct scatterlist VAR_7, VAR_8;

 FUNC_1(&VAR_7, 1);
 FUNC_2(&VAR_7, VAR_3, VAR_5, VAR_4);

 FUNC_1(&VAR_8, 1);
 FUNC_2(&VAR_8, VAR_1, VAR_5, VAR_2);

 return FUNC_0(VAR_0, &VAR_8, &VAR_7, VAR_5, VAR_6);
}
