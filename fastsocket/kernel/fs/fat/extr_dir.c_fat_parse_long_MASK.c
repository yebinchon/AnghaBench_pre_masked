
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct msdos_dir_slot {unsigned char id; unsigned char alias_checksum; scalar_t__ attr; int name11_12; int name5_10; int name0_4; } ;
struct msdos_dir_entry {scalar_t__* name; scalar_t__ attr; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* FUNC_1 () ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 unsigned char FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (struct inode*,int *,struct buffer_head**,struct msdos_dir_entry**) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, loff_t *VAR_8,
     struct buffer_head **VAR_9, struct msdos_dir_entry **VAR_10,
     wchar_t **VAR_11, unsigned char *VAR_12)
{
 struct msdos_dir_slot *VAR_13;
 unsigned char VAR_14, VAR_15, VAR_16, VAR_17;

 if (!*VAR_11) {
  *VAR_11 = FUNC_1();
  if (!*VAR_11) {
   FUNC_2(*VAR_9);
   return -VAR_3;
  }
 }
parse_long:
 VAR_16 = 0;
 VAR_13 = (struct msdos_dir_slot *)*VAR_10;
 VAR_14 = VAR_13->id;
 if (!(VAR_14 & 0x40))
  return VAR_5;
 VAR_16 = VAR_14 & ~0x40;
 if (VAR_16 > 20 || !VAR_16)
  return VAR_5;
 *VAR_12 = VAR_16;
 VAR_17 = VAR_13->alias_checksum;

 VAR_15 = VAR_16;
 while (1) {
  int VAR_18;

  VAR_15--;
  VAR_18 = VAR_15 * 13;
  FUNC_3(*VAR_11 + VAR_18, VAR_13->name0_4, 5);
  FUNC_3(*VAR_11 + VAR_18 + 5, VAR_13->name5_10, 6);
  FUNC_3(*VAR_11 + VAR_18 + 11, VAR_13->name11_12, 2);

  if (VAR_13->id & 0x40)
   (*VAR_11)[VAR_18 + 13] = 0;
  if (FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10) < 0)
   return VAR_4;
  if (VAR_15 == 0)
   break;
  VAR_13 = (struct msdos_dir_slot *)*VAR_10;
  if (VAR_13->attr != VAR_0)
   return VAR_6;
  if ((VAR_13->id & ~0x40) != VAR_15)
   goto parse_long;
  if (VAR_13->alias_checksum != VAR_17)
   goto parse_long;
 }
 if ((*VAR_10)->name[0] == VAR_2)
  return VAR_5;
 if ((*VAR_10)->attr == VAR_0)
  goto parse_long;
 if (FUNC_0((*VAR_10)->name) || ((*VAR_10)->attr & VAR_1))
  return VAR_5;
 if (FUNC_4((*VAR_10)->name) != VAR_17)
  *VAR_12 = 0;

 return 0;
}
