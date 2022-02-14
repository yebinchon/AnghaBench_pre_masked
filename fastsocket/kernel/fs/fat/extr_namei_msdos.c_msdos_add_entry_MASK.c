
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct msdos_sb_info {int dummy; } ;
struct msdos_dir_entry {scalar_t__ size; void* starthi; void* start; void* date; void* time; scalar_t__ ctime_cs; scalar_t__ ctime; scalar_t__ adate; scalar_t__ cdate; scalar_t__ lcase; int attr; int name; } ;
struct inode {struct timespec i_mtime; struct timespec i_ctime; int i_sb; } ;
struct fat_slot_info {int dummy; } ;
typedef void* __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct msdos_dir_entry*,int,struct fat_slot_info*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct msdos_sb_info*,struct timespec*,void**,void**,int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, const unsigned char *VAR_5,
      int VAR_6, int VAR_7, int VAR_8,
      struct timespec *VAR_9, struct fat_slot_info *VAR_10)
{
 struct msdos_sb_info *VAR_11 = FUNC_1(VAR_4->i_sb);
 struct msdos_dir_entry VAR_12;
 __le16 VAR_13, VAR_14;
 int VAR_15;

 FUNC_7(VAR_12.name, VAR_5, VAR_3);
 VAR_12.attr = VAR_6 ? VAR_1 : VAR_0;
 if (VAR_7)
  VAR_12.attr |= VAR_2;
 VAR_12.lcase = 0;
 FUNC_5(VAR_11, VAR_9, &VAR_13, &VAR_14, ((void*)0));
 VAR_12.cdate = VAR_12.adate = 0;
 VAR_12.ctime = 0;
 VAR_12.ctime_cs = 0;
 VAR_12.time = VAR_13;
 VAR_12.date = VAR_14;
 VAR_12.start = FUNC_2(VAR_8);
 VAR_12.starthi = FUNC_2(VAR_8 >> 16);
 VAR_12.size = 0;

 VAR_15 = FUNC_3(VAR_4, &VAR_12, 1, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_4->i_ctime = VAR_4->i_mtime = *VAR_9;
 if (FUNC_0(VAR_4))
  (void)FUNC_4(VAR_4);
 else
  FUNC_6(VAR_4);

 return 0;
}
