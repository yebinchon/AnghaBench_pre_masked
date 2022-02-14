
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int ee_block; int ee_len; } ;
struct ext4_ext_path {int * p_bh; struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef unsigned short ext4_lblk_t ;


 int VAR_0 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,char*,unsigned short,...) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ext4_extent* FUNC_3 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_4 (struct ext4_extent_header*) ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_8 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned short FUNC_9 (struct ext4_extent*) ;
 scalar_t__ FUNC_10 (struct ext4_extent*) ;
 int FUNC_11 (struct ext4_extent*) ;
 unsigned short FUNC_12 (struct ext4_extent*) ;
 int FUNC_13 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_14 (struct ext4_extent*,int ) ;
 int FUNC_15 (int *,struct inode*,int) ;
 int FUNC_16 (int *,struct inode*,struct ext4_extent*,unsigned short,unsigned short) ;
 struct ext4_extent_header* FUNC_17 (int *) ;
 int FUNC_18 (char*,unsigned short,unsigned int,...) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (scalar_t__*,int) ;
 unsigned short FUNC_21 (int ) ;
 int FUNC_22 (struct ext4_extent*,struct ext4_extent*,int) ;
 int FUNC_23 (struct ext4_extent*,int ,int) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25(handle_t *VAR_3, struct inode *VAR_4,
  struct ext4_ext_path *VAR_5, ext4_lblk_t VAR_6,
  ext4_lblk_t VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = FUNC_19(VAR_4), VAR_11;
 struct ext4_extent_header *VAR_12;
 ext4_lblk_t VAR_13, VAR_14;
 unsigned VAR_15;
 ext4_lblk_t VAR_16;
 unsigned short VAR_17;
 unsigned VAR_18 = 0;
 struct ext4_extent *VAR_19;


 FUNC_18("truncate since %u in leaf to %u\n", VAR_6, VAR_7);
 if (!VAR_5[VAR_10].p_hdr)
  VAR_5[VAR_10].p_hdr = FUNC_17(VAR_5[VAR_10].p_bh);
 VAR_12 = VAR_5[VAR_10].p_hdr;
 if (FUNC_24(VAR_5[VAR_10].p_hdr == ((void*)0))) {
  FUNC_1(VAR_4, "path[%d].p_hdr == NULL", VAR_10);
  return -VAR_0;
 }

 VAR_19 = FUNC_4(VAR_12);

 VAR_16 = FUNC_21(VAR_19->ee_block);
 VAR_17 = FUNC_9(VAR_19);

 while (VAR_19 >= FUNC_3(VAR_12) &&
   VAR_16 + VAR_17 > VAR_6) {

  if (FUNC_10(VAR_19))
   VAR_18 = 1;
  else
   VAR_18 = 0;

  FUNC_18("remove ext %u:[%d]%d\n", VAR_16,
    VAR_18, VAR_17);
  VAR_5[VAR_10].p_ext = VAR_19;

  VAR_13 = VAR_16 > VAR_6 ? VAR_16 : VAR_6;
  VAR_14 = VAR_16+VAR_17 - 1 < VAR_7 ?
   VAR_16+VAR_17 - 1 : VAR_7;

  FUNC_18("  border %u:%u\n", VAR_13, VAR_14);


  if (VAR_7 < VAR_16) {
   VAR_19--;
   VAR_16 = FUNC_21(VAR_19->ee_block);
   VAR_17 = FUNC_9(VAR_19);
   continue;
  } else if (VAR_14 != VAR_16 + VAR_17 - 1) {
   FUNC_1(VAR_4,
      "can not handle truncate %u:%u "
      "on extent %u:%u",
      VAR_6, VAR_7, VAR_16,
      VAR_16 + VAR_17 - 1);
   VAR_8 = -VAR_0;
   goto out;
  } else if (VAR_13 != VAR_16) {

   VAR_15 = VAR_13 - VAR_16;
  } else {

   VAR_15 = 0;
  }






  VAR_11 = 7 + 2*(VAR_17/FUNC_0(VAR_4->i_sb));
  if (VAR_19 == FUNC_3(VAR_12)) {
   VAR_9 = 1;
   VAR_11 += (FUNC_19(VAR_4)) + 1;
  }
  VAR_11 += FUNC_2(VAR_4->i_sb);

  VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_11);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_8(VAR_3, VAR_4, VAR_5 + VAR_10);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_16(VAR_3, VAR_4, VAR_19, VAR_13, VAR_14);
  if (VAR_8)
   goto out;

  if (VAR_15 == 0)

   FUNC_14(VAR_19, 0);

  VAR_19->ee_len = FUNC_5(VAR_15);




  if (VAR_18 && VAR_15)
   FUNC_11(VAR_19);




  if (VAR_15 == 0) {
   if (VAR_7 != VAR_1 - 1) {





    FUNC_22(VAR_19, VAR_19+1, (FUNC_4(VAR_12) - VAR_19) *
     sizeof(struct ext4_extent));


    FUNC_23(FUNC_4(VAR_12), 0,
     sizeof(struct ext4_extent));
   }
   FUNC_20(&VAR_12->eh_entries, -1);
  }

  VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_5 + VAR_10);
  if (VAR_8)
   goto out;

  FUNC_18("new extent: %u:%u:%llu\n", VAR_2, VAR_15,
    FUNC_12(VAR_19));
  VAR_19--;
  VAR_16 = FUNC_21(VAR_19->ee_block);
  VAR_17 = FUNC_9(VAR_19);
 }

 if (VAR_9 && VAR_12->eh_entries)
  VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5);



 if (VAR_8 == 0 && VAR_12->eh_entries == 0 && VAR_5[VAR_10].p_bh != ((void*)0))
  VAR_8 = FUNC_13(VAR_3, VAR_4, VAR_5 + VAR_10);

out:
 return VAR_8;
}
