
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_blocksize; } ;
struct msdos_sb_info {int fats; int fat_length; int fat_inode; } ;
struct buffer_head {int b_blocknr; int b_data; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_2, struct buffer_head **VAR_3,
     int VAR_4)
{
 struct msdos_sb_info *VAR_5 = FUNC_0(VAR_2);
 struct buffer_head *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = 0;
 for (VAR_9 = 1; VAR_9 < VAR_5->fats; VAR_9++) {
  sector_t VAR_10 = VAR_5->fat_length * VAR_9;

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_6 = FUNC_4(VAR_2, VAR_10 + VAR_3[VAR_8]->b_blocknr);
   if (!VAR_6) {
    VAR_7 = -VAR_0;
    goto error;
   }
   FUNC_3(VAR_6->b_data, VAR_3[VAR_8]->b_data, VAR_2->s_blocksize);
   FUNC_5(VAR_6);
   FUNC_2(VAR_6, VAR_5->fat_inode);
   if (VAR_2->s_flags & VAR_1)
    VAR_7 = FUNC_6(VAR_6);
   FUNC_1(VAR_6);
   if (VAR_7)
    goto error;
  }
 }
error:
 return VAR_7;
}
