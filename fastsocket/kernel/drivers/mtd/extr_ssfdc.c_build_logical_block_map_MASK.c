
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct ssfdcr_record {int map_len; unsigned long erase_size; int cis_block; unsigned short* logic_block_map; TYPE_1__ mbd; } ;
struct mtd_info {scalar_t__ (* block_isbad ) (struct mtd_info*,unsigned long) ;} ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtd_info*,unsigned long,int *) ;
 scalar_t__ FUNC_3 (struct mtd_info*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ssfdcr_record *VAR_6)
{
 unsigned long VAR_7;
 uint8_t VAR_8[VAR_5];
 int VAR_9, VAR_10, VAR_11;
 struct mtd_info *VAR_12 = VAR_6->mbd.mtd;

 FUNC_0(VAR_3, "SSFDC_RO: build_block_map() nblks=%d (%luK)\n",
       VAR_6->map_len,
       (unsigned long)VAR_6->map_len * VAR_6->erase_size / 1024);


 for (VAR_11 = VAR_6->cis_block + 1; VAR_11 < VAR_6->map_len;
   VAR_11++) {
  VAR_7 = (unsigned long)VAR_11 * VAR_6->erase_size;
  if (VAR_12->block_isbad(VAR_12, VAR_7))
   continue;

  VAR_9 = FUNC_2(VAR_12, VAR_7, VAR_8);
  if (VAR_9 < 0) {
   FUNC_0(VAR_2,
    "SSFDC_RO: mtd read_oob() failed at %lu\n",
    VAR_7);
   return -1;
  }
  VAR_10 = FUNC_1(VAR_8);


  if (VAR_10 >= 0 &&
    VAR_10 < VAR_0) {
   int VAR_13;

   VAR_13 = VAR_11 / VAR_1;
   VAR_10 += VAR_13 * VAR_0;
   VAR_6->logic_block_map[VAR_10] =
    (unsigned short)VAR_11;

   FUNC_0(VAR_4,
    "SSFDC_RO: build_block_map() phys_block=%d,"
    "logic_block_addr=%d, zone=%d\n",
    VAR_11, VAR_10, VAR_13);
  }
 }
 return 0;
}
