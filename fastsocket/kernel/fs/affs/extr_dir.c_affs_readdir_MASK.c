
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; scalar_t__ i_version; struct super_block* i_sb; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {int f_pos; scalar_t__ f_version; void* private_data; TYPE_1__ f_path; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ (* filldir_t ) (void*,unsigned char*,int,int,int,int ) ;
struct TYPE_10__ {int * table; } ;
struct TYPE_9__ {int s_hashsize; } ;
struct TYPE_8__ {unsigned char* name; int hash_chain; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 TYPE_5__* FUNC_0 (struct buffer_head*) ;
 TYPE_4__* FUNC_1 (struct super_block*) ;
 TYPE_3__* FUNC_2 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*,char*,char*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct super_block*,char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned char,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*,int,...) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_3, void *VAR_4, filldir_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->f_path.dentry->d_inode;
 struct super_block *VAR_7 = VAR_6->i_sb;
 struct buffer_head *VAR_8;
 struct buffer_head *VAR_9;
 unsigned char *VAR_10;
 int VAR_11;
 u32 VAR_12;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_12("AFFS: readdir(ino=%lu,f_pos=%lx)\n",VAR_6->i_ino,(unsigned long)VAR_3->f_pos);

 VAR_17 = 0;
 VAR_18 = -VAR_2;
 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_15 = VAR_3->f_pos;

 if (VAR_15 == 0) {
  VAR_3->private_data = (void *)0;
  if (VAR_5(VAR_4, ".", 1, VAR_15, VAR_6->i_ino, VAR_0) < 0)
   return 0;
  VAR_3->f_pos = VAR_15 = 1;
  VAR_17++;
 }
 if (VAR_15 == 1) {
  if (VAR_5(VAR_4, "..", 2, VAR_15, FUNC_11(VAR_3->f_path.dentry), VAR_0) < 0)
   return VAR_17;
  VAR_3->f_pos = VAR_15 = 2;
  VAR_17++;
 }

 FUNC_6(VAR_6);
 VAR_14 = (VAR_15 - 2) & 0xffff;
 VAR_13 = (VAR_15 - 2) >> 16;
 if (VAR_14 == 0xffff) {
  FUNC_8(VAR_7, "readdir", "More than 65535 entries in chain");
  VAR_14 = 0;
  VAR_13++;
  VAR_3->f_pos = ((VAR_13 << 16) | VAR_14) + 2;
 }
 VAR_8 = FUNC_3(VAR_7, VAR_6->i_ino);
 if (!VAR_8)
  goto readdir_out;




 VAR_16 = (u32)(long)VAR_3->private_data;
 if (VAR_16 && VAR_3->f_version == VAR_6->i_version) {
  FUNC_12("AFFS: readdir() left off=%d\n", VAR_16);
  goto inside;
 }

 VAR_16 = FUNC_9(FUNC_0(VAR_8)->table[VAR_13]);
 for (VAR_12 = 0; VAR_16 && VAR_12 < VAR_14; VAR_12++) {
  VAR_9 = FUNC_3(VAR_7, VAR_16);
  if (!VAR_9) {
   FUNC_5(VAR_7, "readdir","Cannot read block %d", VAR_12);
   goto readdir_out;
  }
  VAR_16 = FUNC_9(FUNC_2(VAR_7, VAR_9)->hash_chain);
  FUNC_4(VAR_9);
  VAR_9 = ((void*)0);
 }
 if (VAR_16)
  goto inside;
 VAR_13++;

 for (; VAR_13 < FUNC_1(VAR_7)->s_hashsize; VAR_13++) {
  VAR_16 = FUNC_9(FUNC_0(VAR_8)->table[VAR_13]);
  if (!VAR_16)
   continue;
  VAR_15 = (VAR_13 << 16) + 2;
inside:
  do {
   VAR_9 = FUNC_3(VAR_7, VAR_16);
   if (!VAR_9) {
    FUNC_5(VAR_7, "readdir","Cannot read block %d", VAR_16);
    goto readdir_done;
   }

   VAR_11 = FUNC_10(FUNC_2(VAR_7, VAR_9)->name[0], (u8)30);
   VAR_10 = FUNC_2(VAR_7, VAR_9)->name + 1;
   FUNC_12("AFFS: readdir(): filldir(\"%.*s\", ino=%u), hash=%d, f_pos=%x\n",
     VAR_11, VAR_10, VAR_16, VAR_13, VAR_15);
   if (VAR_5(VAR_4, VAR_10, VAR_11, VAR_15, VAR_16, VAR_1) < 0)
    goto readdir_done;
   VAR_17++;
   VAR_15++;
   VAR_16 = FUNC_9(FUNC_2(VAR_7, VAR_9)->hash_chain);
   FUNC_4(VAR_9);
   VAR_9 = ((void*)0);
  } while (VAR_16);
 }
readdir_done:
 VAR_3->f_pos = VAR_15;
 VAR_3->f_version = VAR_6->i_version;
 VAR_3->private_data = (void *)(long)VAR_16;
 VAR_18 = VAR_17;

readdir_out:
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_7(VAR_6);
 FUNC_12("AFFS: readdir()=%d\n", VAR_17);
 return VAR_18;
}
