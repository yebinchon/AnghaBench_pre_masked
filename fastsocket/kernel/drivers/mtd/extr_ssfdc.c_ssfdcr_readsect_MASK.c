
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtd; } ;
struct ssfdcr_record {int erase_size; int map_len; int* logic_block_map; TYPE_1__ mbd; } ;
struct mtd_blktrans_dev {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mtd_blktrans_dev *VAR_4,
    unsigned long VAR_5, char *VAR_6)
{
 struct ssfdcr_record *VAR_7 = (struct ssfdcr_record *)VAR_4;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_7->erase_size >> VAR_2;
 VAR_9 = (int)(VAR_5 % VAR_8);
 VAR_10 = (int)(VAR_5 / VAR_8);

 FUNC_1(VAR_1,
  "SSFDC_RO: ssfdcr_readsect(%lu) sec_per_blk=%d, ofst=%d,"
  " block_addr=%d\n", VAR_5, VAR_8, VAR_9,
  VAR_10);

 if (VAR_10 >= VAR_7->map_len)
  FUNC_0();

 VAR_10 = VAR_7->logic_block_map[VAR_10];

 FUNC_1(VAR_1,
  "SSFDC_RO: ssfdcr_readsect() phys_block_addr=%d\n",
  VAR_10);

 if (VAR_10 < 0xffff) {
  unsigned long VAR_11;

  VAR_11 = (unsigned long)VAR_10 * VAR_8 +
    VAR_9;

  FUNC_1(VAR_1,
   "SSFDC_RO: ssfdcr_readsect() phys_sect_no=%lu\n",
   VAR_11);

  if (FUNC_3(VAR_7->mbd.mtd, VAR_6, VAR_11) < 0)
   return -VAR_0;
 } else {
  FUNC_2(VAR_6, 0xff, VAR_3);
 }

 return 0;
}
