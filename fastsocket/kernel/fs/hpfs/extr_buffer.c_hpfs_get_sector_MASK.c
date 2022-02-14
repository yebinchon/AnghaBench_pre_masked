
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {void* b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct buffer_head* FUNC_3 (struct super_block*,unsigned int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

void *FUNC_6(struct super_block *VAR_0, unsigned VAR_1, struct buffer_head **VAR_2)
{
 struct buffer_head *VAR_3;


 FUNC_1();

 if ((*VAR_2 = VAR_3 = FUNC_3(VAR_0, VAR_1)) != ((void*)0)) {
  if (!FUNC_0(VAR_3)) FUNC_5(VAR_3);
  FUNC_4(VAR_3);
  return VAR_3->b_data;
 } else {
  FUNC_2("HPFS: hpfs_get_sector: getblk failed\n");
  return ((void*)0);
 }
}
