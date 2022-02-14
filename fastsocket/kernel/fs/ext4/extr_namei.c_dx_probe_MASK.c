
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qstr {int len; int name; } ;
struct inode {scalar_t__ i_ino; int i_sb; } ;
struct TYPE_3__ {scalar_t__ hash_version; int unused_flags; unsigned int indirect_levels; int info_length; } ;
struct dx_root {TYPE_1__ info; } ;
struct dx_node {struct dx_entry* entries; } ;
struct dx_hash_info {scalar_t__ hash_version; scalar_t__ hash; int seed; } ;
struct dx_frame {struct buffer_head* bh; struct dx_entry* at; struct dx_entry* entries; } ;
struct dx_entry {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ s_hash_unsigned; int s_hash_seed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct dx_entry*) ;
 unsigned int FUNC_4 (struct dx_entry*) ;
 scalar_t__ FUNC_5 (struct dx_entry*) ;
 unsigned int FUNC_6 (struct dx_entry*) ;
 unsigned int FUNC_7 (struct inode*) ;
 unsigned int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (int ) ;
 struct buffer_head* FUNC_10 (int *,struct inode*,int ,int ,int*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int ,struct dx_hash_info*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static struct dx_frame *
FUNC_14(const struct qstr *VAR_4, struct inode *VAR_5,
  struct dx_hash_info *VAR_6, struct dx_frame *VAR_7, int *VAR_8)
{
 unsigned VAR_9, VAR_10;
 struct dx_entry *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 struct dx_root *VAR_16;
 struct buffer_head *VAR_17;
 struct dx_frame *VAR_18 = VAR_7;
 u32 VAR_19;

 VAR_18->bh = ((void*)0);
 if (!(VAR_17 = FUNC_10 (((void*)0),VAR_5, 0, 0, VAR_8)))
  goto fail;
 VAR_16 = (struct dx_root *) VAR_17->b_data;
 if (VAR_16->info.hash_version != VAR_2 &&
     VAR_16->info.hash_version != VAR_0 &&
     VAR_16->info.hash_version != VAR_1) {
  FUNC_11(VAR_5->i_sb, "Unrecognised inode hash code %d",
        VAR_16->info.hash_version);
  FUNC_2(VAR_17);
  *VAR_8 = VAR_3;
  goto fail;
 }
 VAR_6->hash_version = VAR_16->info.hash_version;
 if (VAR_6->hash_version <= VAR_2)
  VAR_6->hash_version += FUNC_0(VAR_5->i_sb)->s_hash_unsigned;
 VAR_6->seed = FUNC_0(VAR_5->i_sb)->s_hash_seed;
 if (VAR_4)
  FUNC_12(VAR_4->name, VAR_4->len, VAR_6);
 VAR_19 = VAR_6->hash;

 if (VAR_16->info.unused_flags & 1) {
  FUNC_11(VAR_5->i_sb, "Unimplemented inode hash flags: %#06x",
        VAR_16->info.unused_flags);
  FUNC_2(VAR_17);
  *VAR_8 = VAR_3;
  goto fail;
 }

 if ((VAR_10 = VAR_16->info.indirect_levels) > 1) {
  FUNC_11(VAR_5->i_sb, "Unimplemented inode hash depth: %#06x",
        VAR_16->info.indirect_levels);
  FUNC_2(VAR_17);
  *VAR_8 = VAR_3;
  goto fail;
 }

 VAR_12 = (struct dx_entry *) (((char *)&VAR_16->info) +
           VAR_16->info.info_length);

 if (FUNC_6(VAR_12) != FUNC_8(VAR_5,
         VAR_16->info.info_length)) {
  FUNC_11(VAR_5->i_sb, "dx entry: limit != root limit");
  FUNC_2(VAR_17);
  *VAR_8 = VAR_3;
  goto fail;
 }

 FUNC_9(FUNC_13("Look up %x", VAR_19));
 while (1)
 {
  VAR_9 = FUNC_4(VAR_12);
  if (!VAR_9 || VAR_9 > FUNC_6(VAR_12)) {
   FUNC_11(VAR_5->i_sb,
         "dx entry: no count or count > limit");
   FUNC_2(VAR_17);
   *VAR_8 = VAR_3;
   goto fail2;
  }

  VAR_13 = VAR_12 + 1;
  VAR_14 = VAR_12 + VAR_9 - 1;
  while (VAR_13 <= VAR_14)
  {
   VAR_15 = VAR_13 + (VAR_14 - VAR_13)/2;
   FUNC_9(FUNC_13("."));
   if (FUNC_5(VAR_15) > VAR_19)
    VAR_14 = VAR_15 - 1;
   else
    VAR_13 = VAR_15 + 1;
  }

  if (0)
  {
   unsigned VAR_20 = VAR_9 - 1;
   VAR_11 = VAR_12;
   while (VAR_20--)
   {
    FUNC_9(FUNC_13(","));
    if (FUNC_5(++VAR_11) > VAR_19)
    {
     VAR_11--;
     break;
    }
   }
   FUNC_1 (VAR_11 == VAR_13 - 1);
  }

  VAR_11 = VAR_13 - 1;
  FUNC_9(FUNC_13(" %x->%u\n", VAR_11 == VAR_12? 0: FUNC_5(VAR_11), FUNC_3(VAR_11)));
  VAR_18->bh = VAR_17;
  VAR_18->entries = VAR_12;
  VAR_18->at = VAR_11;
  if (!VAR_10--) return VAR_18;
  if (!(VAR_17 = FUNC_10 (((void*)0),VAR_5, FUNC_3(VAR_11), 0, VAR_8)))
   goto fail2;
  VAR_11 = VAR_12 = ((struct dx_node *) VAR_17->b_data)->entries;
  if (FUNC_6(VAR_12) != FUNC_7 (VAR_5)) {
   FUNC_11(VAR_5->i_sb,
         "dx entry: limit != node limit");
   FUNC_2(VAR_17);
   *VAR_8 = VAR_3;
   goto fail2;
  }
  VAR_18++;
  VAR_18->bh = ((void*)0);
 }
fail2:
 while (VAR_18 >= VAR_7) {
  FUNC_2(VAR_18->bh);
  VAR_18--;
 }
fail:
 if (*VAR_8 == VAR_3)
  FUNC_11(VAR_5->i_sb,
        "Corrupt dir inode %ld, running e2fsck is "
        "recommended.", VAR_5->i_ino);
 return ((void*)0);
}
