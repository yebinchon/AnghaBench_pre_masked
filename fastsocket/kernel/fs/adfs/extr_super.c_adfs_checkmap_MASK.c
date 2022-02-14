
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct adfs_discmap {TYPE_1__* dm_bh; } ;
struct TYPE_4__ {int s_map_size; } ;
struct TYPE_3__ {unsigned char* b_data; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 unsigned char FUNC_1 (struct super_block*,unsigned char*) ;
 int FUNC_2 (struct super_block*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, struct adfs_discmap *VAR_1)
{
 unsigned char VAR_2 = 0, VAR_3 = 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0)->s_map_size; VAR_4++) {
  unsigned char *VAR_5;

  VAR_5 = VAR_1[VAR_4].dm_bh->b_data;

  if (FUNC_1(VAR_0, VAR_5) != VAR_5[0]) {
   FUNC_2(VAR_0, "zone %d fails zonecheck", VAR_4);
   VAR_3 = 0;
  }
  VAR_2 ^= VAR_5[3];
 }
 if (VAR_2 != 0xff)
  FUNC_2(VAR_0, "crosscheck != 0xff");
 return VAR_2 == 0xff && VAR_3;
}
