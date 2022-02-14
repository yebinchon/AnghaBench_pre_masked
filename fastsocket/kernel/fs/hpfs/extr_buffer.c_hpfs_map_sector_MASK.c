
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {void* b_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct buffer_head* FUNC_2 (struct super_block*,unsigned int) ;

void *FUNC_3(struct super_block *VAR_0, unsigned VAR_1, struct buffer_head **VAR_2,
   int VAR_3)
{
 struct buffer_head *VAR_4;

 FUNC_0();

 *VAR_2 = VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 != ((void*)0))
  return VAR_4->b_data;
 else {
  FUNC_1("HPFS: hpfs_map_sector: read error\n");
  return ((void*)0);
 }
}
