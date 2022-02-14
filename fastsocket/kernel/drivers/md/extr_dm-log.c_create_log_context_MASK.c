
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int * vma; } ;
struct TYPE_10__ {TYPE_3__ ptr; int type; } ;
struct TYPE_8__ {int * fn; } ;
struct TYPE_11__ {int client; TYPE_4__ mem; TYPE_2__ notify; } ;
struct TYPE_7__ {size_t count; TYPE_6__* bdev; scalar_t__ sector; } ;
struct log_c {unsigned int region_count; int sync; size_t bitset_uint32_count; unsigned int sync_count; scalar_t__ sync_search; int * disk_header; TYPE_5__ io_req; int * clean_bits; int * sync_bits; int recovering_bits; TYPE_1__ header_location; struct dm_dev* log_dev; scalar_t__ log_dev_flush_failed; scalar_t__ log_dev_failed; int region_size; scalar_t__ flush_failed; scalar_t__ touched_cleaned; scalar_t__ touched_dirtied; struct dm_target* ti; } ;
struct dm_target {int len; } ;
struct dm_dirty_log {struct log_c* context; } ;
struct dm_dev {int name; TYPE_6__* bdev; } ;
typedef enum sync { ____Placeholder_sync } sync ;
struct TYPE_12__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 size_t VAR_9 ;
 int FUNC_3 (struct dm_target*,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (size_t,int) ;
 unsigned int FUNC_8 (int ,int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (struct log_c*) ;
 struct log_c* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int,size_t) ;
 int FUNC_13 (char*,char*,int *,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (size_t) ;
 int FUNC_17 (size_t) ;

__attribute__((used)) static int FUNC_18(struct dm_dirty_log *VAR_10, struct dm_target *VAR_11,
         unsigned int VAR_12, char **VAR_13,
         struct dm_dev *VAR_14)
{
 enum sync VAR_15 = VAR_1;

 struct log_c *VAR_16;
 uint32_t VAR_17;
 unsigned int VAR_18;
 size_t VAR_19, VAR_20;
 int VAR_21;
 char VAR_22;

 if (VAR_12 < 1 || VAR_12 > 2) {
  FUNC_0("wrong number of arguments to dirty region log");
  return -VAR_3;
 }

 if (VAR_12 > 1) {
  if (!FUNC_14(VAR_13[1], "sync"))
   VAR_15 = VAR_5;
  else if (!FUNC_14(VAR_13[1], "nosync"))
   VAR_15 = VAR_8;
  else {
   FUNC_0("unrecognised sync argument to "
          "dirty region log: %s", VAR_13[1]);
   return -VAR_3;
  }
 }

 if (FUNC_13(VAR_13[0], "%u%c", &VAR_17, &VAR_22) != 1 ||
     !FUNC_3(VAR_11, VAR_17)) {
  FUNC_0("invalid region size %s", VAR_13[0]);
  return -VAR_3;
 }

 VAR_18 = FUNC_8(VAR_11->len, VAR_17);

 VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  FUNC_0("couldn't allocate core log");
  return -VAR_4;
 }

 VAR_16->ti = VAR_11;
 VAR_16->touched_dirtied = 0;
 VAR_16->touched_cleaned = 0;
 VAR_16->flush_failed = 0;
 VAR_16->region_size = VAR_17;
 VAR_16->region_count = VAR_18;
 VAR_16->sync = VAR_15;




 VAR_19 = FUNC_7(VAR_18,
      sizeof(*VAR_16->clean_bits) << VAR_0);
 VAR_19 >>= VAR_0;

 VAR_16->bitset_uint32_count = VAR_19 / sizeof(*VAR_16->clean_bits);




 if (!VAR_14) {
  VAR_16->clean_bits = FUNC_16(VAR_19);
  if (!VAR_16->clean_bits) {
   FUNC_0("couldn't allocate clean bitset");
   FUNC_10(VAR_16);
   return -VAR_4;
  }
  VAR_16->disk_header = ((void*)0);
 } else {
  VAR_16->log_dev = VAR_14;
  VAR_16->log_dev_failed = 0;
  VAR_16->log_dev_flush_failed = 0;
  VAR_16->header_location.bdev = VAR_16->log_dev->bdev;
  VAR_16->header_location.sector = 0;




  VAR_20 =
      FUNC_7((VAR_7 << VAR_9) + VAR_19,
    FUNC_4(VAR_16->header_location.
           bdev));

  if (VAR_20 > FUNC_9(VAR_14->bdev->bd_inode)) {
   FUNC_0("log device %s too small: need %llu bytes",
    VAR_14->name, (unsigned long long)VAR_20);
   FUNC_10(VAR_16);
   return -VAR_3;
  }

  VAR_16->header_location.count = VAR_20 >> VAR_9;

  VAR_16->io_req.mem.type = VAR_2;
  VAR_16->io_req.notify.fn = ((void*)0);
  VAR_16->io_req.client = FUNC_5();
  if (FUNC_1(VAR_16->io_req.client)) {
   VAR_21 = FUNC_2(VAR_16->io_req.client);
   FUNC_0("couldn't allocate disk io client");
   FUNC_10(VAR_16);
   return VAR_21;
  }

  VAR_16->disk_header = FUNC_16(VAR_20);
  if (!VAR_16->disk_header) {
   FUNC_0("couldn't allocate disk log buffer");
   FUNC_6(VAR_16->io_req.client);
   FUNC_10(VAR_16);
   return -VAR_4;
  }

  VAR_16->io_req.mem.ptr.vma = VAR_16->disk_header;
  VAR_16->clean_bits = (void *)VAR_16->disk_header +
     (VAR_7 << VAR_9);
 }

 FUNC_12(VAR_16->clean_bits, -1, VAR_19);

 VAR_16->sync_bits = FUNC_16(VAR_19);
 if (!VAR_16->sync_bits) {
  FUNC_0("couldn't allocate sync bitset");
  if (!VAR_14)
   FUNC_15(VAR_16->clean_bits);
  else
   FUNC_6(VAR_16->io_req.client);
  FUNC_15(VAR_16->disk_header);
  FUNC_10(VAR_16);
  return -VAR_4;
 }
 FUNC_12(VAR_16->sync_bits, (VAR_15 == VAR_8) ? -1 : 0, VAR_19);
 VAR_16->sync_count = (VAR_15 == VAR_8) ? VAR_18 : 0;

 VAR_16->recovering_bits = FUNC_17(VAR_19);
 if (!VAR_16->recovering_bits) {
  FUNC_0("couldn't allocate sync bitset");
  FUNC_15(VAR_16->sync_bits);
  if (!VAR_14)
   FUNC_15(VAR_16->clean_bits);
  else
   FUNC_6(VAR_16->io_req.client);
  FUNC_15(VAR_16->disk_header);
  FUNC_10(VAR_16);
  return -VAR_4;
 }
 VAR_16->sync_search = 0;
 VAR_10->context = VAR_16;

 return 0;
}
