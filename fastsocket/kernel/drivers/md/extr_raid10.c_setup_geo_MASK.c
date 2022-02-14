
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int layout; int chunk_sectors; int raid_disks; int delta_disks; int new_layout; int new_chunk_sectors; } ;
struct geom {int raid_disks; int near_copies; int far_copies; int far_offset; int far_set_size; int chunk_mask; int chunk_shift; } ;
typedef enum geo_type { ____Placeholder_geo_type } geo_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;



 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct geom *VAR_1, struct mddev *VAR_2, enum geo_type VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;
 switch (VAR_3) {
 case 129:
  VAR_7 = VAR_2->layout;
  VAR_8 = VAR_2->chunk_sectors;
  VAR_9 = VAR_2->raid_disks - VAR_2->delta_disks;
  break;
 case 130:
  VAR_7 = VAR_2->new_layout;
  VAR_8 = VAR_2->new_chunk_sectors;
  VAR_9 = VAR_2->raid_disks;
  break;
 default:
 case 128:

  VAR_7 = VAR_2->new_layout;
  VAR_8 = VAR_2->new_chunk_sectors;
  VAR_9 = VAR_2->raid_disks + VAR_2->delta_disks;
  break;
 }
 if (VAR_7 >> 18)
  return -1;
 if (VAR_8 < (VAR_0 >> 9) ||
     !FUNC_1(VAR_8))
  return -2;
 VAR_4 = VAR_7 & 255;
 VAR_5 = (VAR_7 >> 8) & 255;
 VAR_6 = VAR_7 & (1<<16);
 VAR_1->raid_disks = VAR_9;
 VAR_1->near_copies = VAR_4;
 VAR_1->far_copies = VAR_5;
 VAR_1->far_offset = VAR_6;
 VAR_1->far_set_size = (VAR_7 & (1<<17)) ? VAR_9 / VAR_5 : VAR_9;
 VAR_1->chunk_mask = VAR_8 - 1;
 VAR_1->chunk_shift = FUNC_0(~VAR_8);
 return VAR_4*VAR_5;
}
