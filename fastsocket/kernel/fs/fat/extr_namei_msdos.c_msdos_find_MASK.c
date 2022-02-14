
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dotsOK; } ;
struct msdos_sb_info {TYPE_2__ options; } ;
struct inode {int i_sb; } ;
struct fat_slot_info {int bh; TYPE_1__* de; } ;
struct TYPE_3__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msdos_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,unsigned char*,struct fat_slot_info*) ;
 int FUNC_3 (unsigned char const*,int,unsigned char*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, const unsigned char *VAR_4, int VAR_5,
        struct fat_slot_info *VAR_6)
{
 struct msdos_sb_info *VAR_7 = FUNC_0(VAR_3->i_sb);
 unsigned char VAR_8[VAR_2];
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8, &VAR_7->options);
 if (VAR_9)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_6);
 if (!VAR_9 && VAR_7->options.dotsOK) {
  if (VAR_4[0] == '.') {
   if (!(VAR_6->de->attr & VAR_0))
    VAR_9 = -VAR_1;
  } else {
   if (VAR_6->de->attr & VAR_0)
    VAR_9 = -VAR_1;
  }
  if (VAR_9)
   FUNC_1(VAR_6->bh);
 }
 return VAR_9;
}
