
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct adfs_sb_info {unsigned int s_map_size; unsigned int s_ids_per_zone; int s_idlen; int s_map2blk; } ;
struct adfs_discrecord {int log2secsize; int log2bpmb; int disc_size; int disc_size_high; int zone_spare; } ;
struct adfs_discmap {unsigned int dm_startbit; unsigned int dm_endbit; int dm_startblk; int dm_bh; } ;


 unsigned int VAR_0 ;
 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*,struct adfs_discmap*) ;
 int FUNC_2 (struct super_block*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adfs_discmap*) ;
 struct adfs_discmap* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,unsigned int) ;
 unsigned int FUNC_9 (unsigned int,int ) ;

__attribute__((used)) static struct adfs_discmap *FUNC_10(struct super_block *VAR_2, struct adfs_discrecord *VAR_3)
{
 struct adfs_discmap *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;
 struct adfs_sb_info *VAR_10 = FUNC_0(VAR_2);

 VAR_7 = VAR_10->s_map_size;
 VAR_6 = (8 << VAR_3->log2secsize) - FUNC_6(VAR_3->zone_spare);
 VAR_5 = (VAR_7 >> 1) * VAR_6 -
       ((VAR_7 > 1) ? VAR_0 : 0);
 VAR_5 = FUNC_9(VAR_5, VAR_10->s_map2blk);

 VAR_10->s_ids_per_zone = VAR_6 / (VAR_10->s_idlen + 1);

 VAR_4 = FUNC_5(VAR_7 * sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_2, "not enough memory");
  return ((void*)0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_5++) {
  VAR_4[VAR_9].dm_startbit = 0;
  VAR_4[VAR_9].dm_endbit = VAR_6;
  VAR_4[VAR_9].dm_startblk = VAR_9 * VAR_6 - VAR_0;
  VAR_4[VAR_9].dm_bh = FUNC_8(VAR_2, VAR_5);

  if (!VAR_4[VAR_9].dm_bh) {
   FUNC_2(VAR_2, "unable to read map");
   goto error_free;
  }
 }


 VAR_8 = VAR_9 - 1;
 VAR_4[0].dm_startblk = 0;
 VAR_4[0].dm_startbit = VAR_0;
 VAR_4[VAR_8].dm_endbit = (FUNC_7(VAR_3->disc_size_high) << (32 - VAR_3->log2bpmb)) +
       (FUNC_7(VAR_3->disc_size) >> VAR_3->log2bpmb) +
       (VAR_0 - VAR_8 * VAR_6);

 if (FUNC_1(VAR_2, VAR_4))
  return VAR_4;

 FUNC_2(VAR_2, "map corrupted");

error_free:
 while (--VAR_9 >= 0)
  FUNC_3(VAR_4[VAR_9].dm_bh);

 FUNC_4(VAR_4);
 return ((void*)0);
}
