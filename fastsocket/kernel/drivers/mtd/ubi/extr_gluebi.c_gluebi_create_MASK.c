
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_info {scalar_t__ vol_type; unsigned long long size; unsigned long long used_bytes; int vol_id; int ubi_num; scalar_t__ usable_leb_size; scalar_t__ name_len; int name; } ;
struct ubi_device_info {int min_io_size; int ro_mode; } ;
struct mtd_info {unsigned long long size; struct gluebi_device* name; int index; int put_device; int get_device; int erase; int write; int read; scalar_t__ erasesize; int writesize; int owner; int flags; int type; } ;
struct gluebi_device {int list; struct mtd_info mtd; int ubi_num; int vol_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct mtd_info*) ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 struct gluebi_device* FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct gluebi_device*) ;
 struct gluebi_device* FUNC_4 (int ,scalar_t__,int ) ;
 struct gluebi_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ubi_device_info *VAR_14,
    struct ubi_volume_info *VAR_15)
{
 struct gluebi_device *VAR_16, *VAR_17;
 struct mtd_info *VAR_18;

 VAR_16 = FUNC_5(sizeof(struct gluebi_device), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_18 = &VAR_16->mtd;
 VAR_18->name = FUNC_4(VAR_15->name, VAR_15->name_len + 1, VAR_2);
 if (!VAR_18->name) {
  FUNC_3(VAR_16);
  return -VAR_1;
 }

 VAR_16->vol_id = VAR_15->vol_id;
 VAR_16->ubi_num = VAR_15->ubi_num;
 VAR_18->type = VAR_3;
 if (!VAR_14->ro_mode)
  VAR_18->flags = VAR_4;
 VAR_18->owner = VAR_5;
 VAR_18->writesize = VAR_14->min_io_size;
 VAR_18->erasesize = VAR_15->usable_leb_size;
 VAR_18->read = VAR_12;
 VAR_18->write = VAR_13;
 VAR_18->erase = VAR_9;
 VAR_18->get_device = VAR_10;
 VAR_18->put_device = VAR_11;






 if (VAR_15->vol_type == VAR_6)
  VAR_18->size = (unsigned long long)VAR_15->usable_leb_size * VAR_15->size;
 else
  VAR_18->size = VAR_15->used_bytes;


 FUNC_7(&VAR_7);
 VAR_17 = FUNC_2(VAR_15->ubi_num, VAR_15->vol_id);
 if (VAR_17)
  FUNC_1("gluebi MTD device %d form UBI device %d volume %d "
   "already exists", VAR_17->mtd.index, VAR_15->ubi_num,
   VAR_15->vol_id);
 FUNC_8(&VAR_7);

 if (FUNC_0(VAR_18)) {
  FUNC_1("cannot add MTD device");
  FUNC_3(VAR_18->name);
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 FUNC_7(&VAR_7);
 FUNC_6(&VAR_16->list, &VAR_8);
 FUNC_8(&VAR_7);
 return 0;
}
