
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {scalar_t__ csum; int flags; int magic; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct thin_disk_superblock* FUNC_2 (struct dm_block*) ;
 scalar_t__ FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int *,size_t,int ) ;
 unsigned long long FUNC_5 (scalar_t__) ;
 unsigned long long FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dm_block_validator *VAR_4,
      struct dm_block *VAR_5,
      size_t VAR_6)
{
 struct thin_disk_superblock *VAR_7 = FUNC_2(VAR_5);
 __le32 VAR_8;

 if (FUNC_3(VAR_5) != FUNC_6(VAR_7->blocknr)) {
  FUNC_0("sb_check failed: blocknr %llu: "
        "wanted %llu", FUNC_6(VAR_7->blocknr),
        (unsigned long long)FUNC_3(VAR_5));
  return -VAR_1;
 }

 if (FUNC_6(VAR_7->magic) != VAR_3) {
  FUNC_0("sb_check failed: magic %llu: "
        "wanted %llu", FUNC_6(VAR_7->magic),
        (unsigned long long)VAR_3);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(FUNC_4(&VAR_7->flags,
          VAR_6 - sizeof(__le32),
          VAR_2));
 if (VAR_8 != VAR_7->csum) {
  FUNC_0("sb_check failed: csum %u: wanted %u",
        FUNC_5(VAR_8), FUNC_5(VAR_7->csum));
  return -VAR_0;
 }

 return 0;
}
