
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_bdi; int s_blocksize_bits; int s_blocksize; int s_dev; int s_id; int s_magic; } ;
struct nfs_server {int maxfilesize; int backing_dev_info; int wsize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nfs_server* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (int ,int,char*,int,int) ;

__attribute__((used)) static inline void FUNC_6(struct super_block *VAR_1)
{
 struct nfs_server *VAR_2 = FUNC_2(VAR_1);

 VAR_1->s_magic = VAR_0;


 FUNC_5(VAR_1->s_id, sizeof(VAR_1->s_id),
   "%x:%x", FUNC_0(VAR_1->s_dev), FUNC_1(VAR_1->s_dev));

 if (VAR_1->s_blocksize == 0)
  VAR_1->s_blocksize = FUNC_3(VAR_2->wsize,
       &VAR_1->s_blocksize_bits);

 VAR_1->s_bdi = &VAR_2->backing_dev_info;

 FUNC_4(VAR_1, VAR_2->maxfilesize);
}
