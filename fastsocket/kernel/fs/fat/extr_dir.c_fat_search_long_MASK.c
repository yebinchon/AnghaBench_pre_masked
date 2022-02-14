
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct super_block {int dummy; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {unsigned short shortname; } ;
struct msdos_sb_info {TYPE_1__ options; struct nls_table* nls_disk; } ;
struct msdos_dir_entry {scalar_t__* name; int attr; int lcase; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {unsigned char nr_slots; struct msdos_dir_entry* de; struct buffer_head* bh; int i_pos; scalar_t__ slot_off; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int bufname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_9 ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**) ;
 int FUNC_4 (struct super_block*,struct buffer_head*,struct msdos_dir_entry*) ;
 scalar_t__ FUNC_5 (struct msdos_sb_info*,unsigned char const*,int,void*,int) ;
 int FUNC_6 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**,int**,unsigned char*) ;
 int FUNC_7 (struct nls_table*,char*,int,int*) ;
 int FUNC_8 (struct nls_table*,unsigned char*,int,int*,unsigned short,int) ;
 int FUNC_9 (struct msdos_sb_info*,int*,void*,int) ;
 int FUNC_10 (unsigned char*,scalar_t__*,int) ;

int FUNC_11(struct inode *VAR_14, const unsigned char *VAR_15,
      int VAR_16, struct fat_slot_info *VAR_17)
{
 struct super_block *VAR_18 = VAR_14->i_sb;
 struct msdos_sb_info *VAR_19 = FUNC_1(VAR_18);
 struct buffer_head *VAR_20 = ((void*)0);
 struct msdos_dir_entry *VAR_21;
 struct nls_table *VAR_22 = VAR_19->nls_disk;
 unsigned char VAR_23;
 wchar_t VAR_24[14];
 wchar_t *VAR_25 = ((void*)0);
 unsigned char VAR_26[VAR_9];
 unsigned char VAR_27[VAR_6];
 unsigned short VAR_28 = VAR_19->options.shortname;
 loff_t VAR_29 = 0;
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_34 = -VAR_5;
 while (1) {
  if (FUNC_3(VAR_14, &VAR_29, &VAR_20, &VAR_21) == -1)
   goto end_of_dir;
parse_record:
  VAR_23 = 0;
  if (VAR_21->name[0] == VAR_4)
   continue;
  if (VAR_21->attr != VAR_0 && (VAR_21->attr & VAR_1))
   continue;
  if (VAR_21->attr != VAR_0 && FUNC_0(VAR_21->name))
   continue;
  if (VAR_21->attr == VAR_0) {
   int VAR_36 = FUNC_6(VAR_14, &VAR_29, &VAR_20, &VAR_21,
          &VAR_25, &VAR_23);
   if (VAR_36 < 0) {
    VAR_34 = VAR_36;
    goto end_of_dir;
   } else if (VAR_36 == VAR_11)
    continue;
   else if (VAR_36 == VAR_12)
    goto parse_record;
   else if (VAR_36 == VAR_10)
    goto end_of_dir;
  }

  FUNC_10(VAR_26, VAR_21->name, sizeof(VAR_21->name));

  if (VAR_26[0] == 0x05)
   VAR_26[0] = 0xE5;
  for (VAR_31 = 0, VAR_32 = 0, VAR_33 = 0; VAR_31 < 8;) {
   if (!VAR_26[VAR_31])
    break;
   VAR_30 = FUNC_8(VAR_22, &VAR_26[VAR_31], 8 - VAR_31,
      &VAR_24[VAR_32++], VAR_28,
      VAR_21->lcase & VAR_2);
   if (VAR_30 <= 1) {
    if (VAR_26[VAR_31] != ' ')
     VAR_33 = VAR_32;
   } else {
    VAR_33 = VAR_32;
   }
   VAR_31 += VAR_30;
  }
  VAR_32 = VAR_33;
  FUNC_7(VAR_22, ".", 1, &VAR_24[VAR_32++]);
  for (VAR_31 = 8; VAR_31 < VAR_9;) {
   if (!VAR_26[VAR_31])
    break;
   VAR_30 = FUNC_8(VAR_22, &VAR_26[VAR_31],
      VAR_9 - VAR_31,
      &VAR_24[VAR_32++], VAR_28,
      VAR_21->lcase & VAR_3);
   if (VAR_30 <= 1) {
    if (VAR_26[VAR_31] != ' ')
     VAR_33 = VAR_32;
   } else {
    VAR_33 = VAR_32;
   }
   VAR_31 += VAR_30;
  }
  if (!VAR_33)
   continue;


  VAR_24[VAR_33] = 0x0000;
  VAR_35 = FUNC_9(VAR_19, VAR_24, VAR_27, sizeof(VAR_27));
  if (FUNC_5(VAR_19, VAR_15, VAR_16, VAR_27, VAR_35))
   goto found;

  if (VAR_23) {
   void *VAR_37 = VAR_25 + VAR_7;
   int VAR_38 = VAR_13 - VAR_8;


   VAR_35 = FUNC_9(VAR_19, VAR_25, VAR_37, VAR_38);
   if (FUNC_5(VAR_19, VAR_15, VAR_16, VAR_37, VAR_35))
    goto found;
  }
 }

found:
 VAR_23++;
 VAR_17->slot_off = VAR_29 - VAR_23 * sizeof(*VAR_21);
 VAR_17->nr_slots = VAR_23;
 VAR_17->de = VAR_21;
 VAR_17->bh = VAR_20;
 VAR_17->i_pos = FUNC_4(VAR_18, VAR_17->bh, VAR_17->de);
 VAR_34 = 0;
end_of_dir:
 if (VAR_25)
  FUNC_2(VAR_25);

 return VAR_34;
}
