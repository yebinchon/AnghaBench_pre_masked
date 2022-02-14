
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {scalar_t__ magic1; scalar_t__ magic2; scalar_t__ magic3; int block_size; int block_shift; scalar_t__ log_start; scalar_t__ log_end; } ;
typedef TYPE_1__ befs_sb_info ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct super_block*,char*,...) ;

int
FUNC_2(struct super_block *VAR_6)
{
 befs_sb_info *VAR_7 = FUNC_0(VAR_6);


 if ((VAR_7->magic1 != VAR_2)
     || (VAR_7->magic2 != VAR_3)
     || (VAR_7->magic3 != VAR_4)) {
  FUNC_1(VAR_6, "invalid magic header");
  return VAR_0;
 }







 if ((VAR_7->block_size != 1024)
     && (VAR_7->block_size != 2048)
     && (VAR_7->block_size != 4096)
     && (VAR_7->block_size != 8192)) {
  FUNC_1(VAR_6, "invalid blocksize: %u", VAR_7->block_size);
  return VAR_0;
 }

 if (VAR_7->block_size > VAR_5) {
  FUNC_1(VAR_6, "blocksize(%u) cannot be larger"
      "than system pagesize(%lu)", VAR_7->block_size,
      VAR_5);
  return VAR_0;
 }






 if ((1 << VAR_7->block_shift) != VAR_7->block_size) {
  FUNC_1(VAR_6, "block_shift disagrees with block_size. "
      "Corruption likely.");
  return VAR_0;
 }

 if (VAR_7->log_start != VAR_7->log_end) {
  FUNC_1(VAR_6, "Filesystem not clean! There are blocks in the "
      "journal. You must boot into BeOS and mount this volume "
      "to make it clean.");
  return VAR_0;
 }

 return VAR_1;
}
