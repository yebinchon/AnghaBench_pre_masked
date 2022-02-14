
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext4_extent_header {scalar_t__ eh_magic; scalar_t__ eh_depth; scalar_t__ eh_max; scalar_t__ eh_entries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,char*,int ,char const*,int,int,int,int,int,int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,struct ext4_extent_header*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, struct inode *VAR_3,
     struct ext4_extent_header *VAR_4,
     int VAR_5)
{
 const char *VAR_6;
 int VAR_7 = 0;

 if (FUNC_4(VAR_4->eh_magic != VAR_1)) {
  VAR_6 = "invalid magic";
  goto corrupted;
 }
 if (FUNC_4(FUNC_3(VAR_4->eh_depth) != VAR_5)) {
  VAR_6 = "unexpected eh_depth";
  goto corrupted;
 }
 if (FUNC_4(VAR_4->eh_max == 0)) {
  VAR_6 = "invalid eh_max";
  goto corrupted;
 }
 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (FUNC_4(FUNC_3(VAR_4->eh_max) > VAR_7)) {
  VAR_6 = "too large eh_max";
  goto corrupted;
 }
 if (FUNC_4(FUNC_3(VAR_4->eh_entries) > FUNC_3(VAR_4->eh_max))) {
  VAR_6 = "invalid eh_entries";
  goto corrupted;
 }
 if (!FUNC_2(VAR_3, VAR_4, VAR_5)) {
  VAR_6 = "invalid extent entries";
  goto corrupted;
 }
 return 0;

corrupted:
 FUNC_0(VAR_3->i_sb, VAR_2,
   "bad header/extent in inode #%lu: %s - magic %x, "
   "entries %u, max %u(%u), depth %u(%u)",
   VAR_3->i_ino, VAR_6, FUNC_3(VAR_4->eh_magic),
   FUNC_3(VAR_4->eh_entries), FUNC_3(VAR_4->eh_max),
   VAR_7, FUNC_3(VAR_4->eh_depth), VAR_5);

 return -VAR_0;
}
